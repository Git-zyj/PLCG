/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109850
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_2)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)83))))), (((((/* implicit */_Bool) max((0), (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0])))) : (min((((/* implicit */unsigned long long int) var_5)), (16222442598991178180ULL)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_1 - 1] [i_2] [i_3] = arr_1 [i_0 + 2] [(short)15];
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((long long int) arr_5 [i_1] [i_1 + 2] [i_2] [i_3])) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_12 [i_0] [i_1] [i_1] [i_1]))))));
                        }
                    } 
                } 
                arr_14 [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_1] [i_0 + 1]));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_1])) : (((/* implicit */int) arr_10 [14] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(_Bool)1] [i_1 + 1] [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1]))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 2] [i_1] [i_1] [i_0 + 2]))) % (var_2)))) ? (((((/* implicit */unsigned long long int) 2147483632)) - (arr_12 [i_0 + 2] [i_0] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483632)) ? (2147483632) : (var_6))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (unsigned char)166);
}
