/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137108
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [(signed char)14] [(signed char)14] &= 2196737481U;
        var_16 *= ((/* implicit */unsigned int) (unsigned short)5794);
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) 2196737481U);
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            for (signed char i_3 = 2; i_3 < 12; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_5 = 3; i_5 < 13; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) 3041482428U))));
                            arr_18 [i_3] = ((/* implicit */unsigned char) -71170301);
                            arr_19 [i_1] [i_2] [i_3] [i_3 + 1] [(unsigned short)0] [i_5 + 1] |= ((/* implicit */long long int) 2098229812U);
                        }
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            arr_23 [i_3] [i_4] = ((/* implicit */unsigned int) (signed char)-112);
                            arr_24 [i_1] [6LL] [i_3] [12LL] [(unsigned short)7] [(unsigned short)7] = ((/* implicit */unsigned int) (unsigned char)49);
                            var_19 = ((/* implicit */long long int) 2098229814U);
                        }
                        for (unsigned int i_7 = 2; i_7 < 13; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (_Bool)1))));
                            var_21 = ((/* implicit */unsigned int) (short)21712);
                        }
                        for (unsigned long long int i_8 = 3; i_8 < 13; i_8 += 1) 
                        {
                            arr_32 [i_3] [11ULL] [1] [i_4] [i_8 - 2] = ((/* implicit */unsigned int) -71170301);
                            arr_33 [i_3] [i_3] [i_3] [(unsigned char)5] [i_3] = ((/* implicit */unsigned short) 71170301);
                            var_22 = ((/* implicit */_Bool) 1811420977U);
                            var_23 = 468762589;
                        }
                        arr_34 [(unsigned short)8] [i_3] [i_2] [(unsigned short)8] |= ((/* implicit */signed char) 1941667759);
                        arr_35 [i_1] [i_1] [i_3] [i_3] [i_3] [i_4] = 4294967295U;
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned char) var_3);
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) var_12))));
    var_26 ^= ((/* implicit */short) var_9);
}
