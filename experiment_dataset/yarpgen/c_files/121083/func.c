/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121083
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
    var_14 = ((/* implicit */unsigned char) 18446744073709551615ULL);
    var_15 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0] [i_0] [i_0 - 1] [16ULL]))) ? (((((/* implicit */int) arr_8 [i_0 + 1] [i_2] [i_0])) - (((/* implicit */int) (unsigned char)13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                            arr_9 [i_0 + 1] [i_1] [i_0] [i_0 + 1] [i_2] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_2] [i_0])) ? (var_2) : (var_2)))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 869649300U)) && (((/* implicit */_Bool) var_10)))), (max((arr_6 [i_0 - 1] [i_1 - 2] [i_1] [i_1 - 2] [i_1]), (arr_6 [i_0 + 1] [i_1 - 4] [13] [i_1 - 2] [i_1 - 2])))));
            }
        } 
    } 
}
