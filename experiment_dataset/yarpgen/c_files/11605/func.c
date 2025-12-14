/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11605
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) var_10)))) << (((((/* implicit */int) var_6)) - (44337)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((unsigned short) ((((((/* implicit */_Bool) arr_1 [i_2 + 1])) || (((/* implicit */_Bool) var_13)))) ? (((((/* implicit */_Bool) (unsigned short)34872)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [9ULL] [9ULL] [9ULL]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                            {
                                var_16 = ((/* implicit */short) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_3] [i_1])) * (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_0]))))) : (((((/* implicit */_Bool) 1048572ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1680633125U))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) % (((((/* implicit */_Bool) 1495057898U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_12)))))));
                                arr_16 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(2817557163U))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [0U] [i_1] [i_1])))))))) ? (0U) : (var_5)));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_13))));
                                arr_17 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_7 [i_2]);
                            }
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)28380)) ? (7332562773842227892ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26750)))))))) ? (((/* implicit */int) ((short) max((arr_15 [(unsigned short)13] [(unsigned short)13] [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_11)))))) : (((/* implicit */int) (_Bool)1)))))));
                            var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_2 + 3])) ? (((/* implicit */int) (unsigned short)39613)) : (((/* implicit */int) var_6)))) % ((+(((/* implicit */int) var_3))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (signed char)-27))));
}
