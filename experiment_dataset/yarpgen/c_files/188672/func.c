/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188672
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
    var_19 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [(signed char)14] [i_0] [i_0] = ((/* implicit */int) (short)127);
                            arr_14 [2LL] [i_0] [i_1] [10LL] [i_3] [i_0] = ((/* implicit */_Bool) (unsigned short)61440);
                            var_21 = ((/* implicit */_Bool) var_9);
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_5 = 1; i_5 < 19; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) -1LL);
                            var_23 -= 1073741823U;
                            var_24 = ((/* implicit */_Bool) (signed char)(-127 - 1));
                            arr_18 [i_5 + 1] [i_0] [(unsigned char)8] [i_0] [i_0] = ((/* implicit */_Bool) var_10);
                            arr_19 [i_0] [i_1] [i_0] [i_1] [i_5 - 1] [i_0] = ((/* implicit */unsigned long long int) var_13);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (max((max((min((((/* implicit */unsigned long long int) 0)), (var_1))), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) var_6))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 0U)), (0LL)))))))))));
                            arr_23 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned char)31)), ((~(var_18)))));
                            var_26 = ((/* implicit */long long int) var_9);
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((min((((/* implicit */int) (signed char)127)), ((~(((/* implicit */int) var_14)))))), ((~((~(((/* implicit */int) (unsigned short)65530))))))));
                        }
                    }
                    arr_25 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (max((((/* implicit */unsigned long long int) 0U)), (min((var_16), (((/* implicit */unsigned long long int) (_Bool)0))))))));
                    arr_26 [i_0] [i_0] [i_2] = min((max((((/* implicit */unsigned int) var_10)), ((-(var_18))))), (max((((/* implicit */unsigned int) var_10)), ((~(var_8))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) min((min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_5)))), (((/* implicit */int) (unsigned char)0))));
}
