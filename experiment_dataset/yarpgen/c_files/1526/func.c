/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1526
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
    var_17 = ((/* implicit */short) ((signed char) max((var_14), (((/* implicit */unsigned short) ((signed char) 2147483647))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */short) (((+((+(((/* implicit */int) (signed char)-85)))))) | (((int) arr_4 [i_1] [i_1] [i_1]))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((((unsigned long long int) var_14)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_4 [i_1] [i_3] [i_4]) / (arr_10 [i_0] [(signed char)1] [i_1] [i_2] [i_3] [i_4])))))))));
                                var_19 = ((/* implicit */long long int) max((((/* implicit */int) arr_9 [i_2] [i_2 + 1] [i_2 + 1] [i_4])), (((((/* implicit */_Bool) -8149700148173787832LL)) ? (((/* implicit */int) (short)22465)) : (((/* implicit */int) (short)1023))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) min((10852432380948591178ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 1; i_5 < 15; i_5 += 3) 
                    {
                        var_21 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(arr_10 [i_0] [i_1] [i_2 - 1] [i_5] [i_2 + 1] [i_5 + 3])))), (((((/* implicit */_Bool) (+(arr_7 [i_5] [(unsigned short)10] [i_0])))) ? (10852432380948591178ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2600089553552746542LL))))))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)23214)))));
                        arr_15 [i_1] [i_1] [i_2] [i_5] = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)62832))))), ((-(var_7)))));
                    }
                }
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (+(((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [9])) ^ ((+(((/* implicit */int) (short)22465)))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) ((unsigned short) ((var_5) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)22480)) ? (((/* implicit */long long int) 570647481)) : (-2600089553552746543LL)))))));
}
