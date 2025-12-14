/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150482
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */int) ((((/* implicit */int) (unsigned char)59)) > (((/* implicit */int) (unsigned char)185))))), ((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))) > (((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_0] [i_0]))) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 1] [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) < (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))));
                var_19 = ((/* implicit */long long int) (((~(((/* implicit */int) min((arr_5 [i_0] [i_1] [i_1 - 2]), (((/* implicit */unsigned char) arr_4 [i_0] [5ULL] [i_1]))))))) == (((((/* implicit */int) var_0)) * (((/* implicit */int) arr_1 [i_1 - 1]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0]);
                            var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_2 - 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) arr_11 [i_1 + 1] [i_2 - 1] [i_2 - 1] [i_3 - 3]))))), (var_8)));
                            var_22 = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) arr_5 [i_3 - 3] [i_2 - 2] [i_1 - 1])))));
                            var_23 = ((/* implicit */short) (-(arr_12 [i_1 - 2] [i_2 - 1])));
                            var_24 = ((/* implicit */signed char) max((((arr_8 [i_1 - 1] [i_1 - 1] [i_2] [i_3]) ^ (arr_8 [i_1 - 1] [i_1 - 2] [i_3 - 3] [i_3]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1] [i_1] [i_1 + 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_2)))))) || (((/* implicit */_Bool) var_0))));
}
