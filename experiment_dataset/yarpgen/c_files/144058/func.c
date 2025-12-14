/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144058
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
    for (unsigned short i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_0 [i_0]), (arr_11 [(unsigned short)6] [i_0] [i_0] [i_0 + 2]))))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                            {
                                var_18 ^= ((/* implicit */long long int) max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) arr_7 [i_0 + 1] [(unsigned short)5] [i_0 + 3] [i_0 + 3]))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((unsigned short) (-(((/* implicit */int) arr_12 [i_4] [i_4] [i_1] [i_2] [i_1] [i_4])))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (arr_13 [i_0] [i_0 + 4] [i_0 + 1] [i_0]))))));
                                var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) arr_0 [i_0])))))))), (max((arr_2 [i_3] [i_4]), (arr_2 [i_1] [i_2])))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                            {
                                var_21 = ((/* implicit */unsigned short) max((max((var_12), (((long long int) arr_2 [i_1] [i_2])))), (((/* implicit */long long int) arr_3 [i_0] [i_3]))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8781801724588935652LL)) ? (-9193395719892009331LL) : (8781801724588935652LL)))) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_16))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_11))))) : (max((3007548845027481003LL), (((/* implicit */long long int) ((unsigned short) var_15)))))));
                            }
                        }
                    } 
                } 
                arr_19 [i_0] [i_0] = max((((unsigned short) var_5)), (max((arr_13 [i_0] [i_1] [i_1] [i_0]), (arr_17 [i_0 + 1] [i_0] [i_0 + 3] [i_0] [i_0]))));
                var_24 = ((/* implicit */long long int) var_9);
                arr_20 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -8781801724588935662LL))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) max((var_25), (var_6)));
}
