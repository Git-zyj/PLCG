/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185648
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_10 ^= ((/* implicit */int) 872159153U);
            /* LoopSeq 2 */
            for (unsigned int i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                var_11 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) arr_4 [i_0])));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 3) 
                {
                    var_12 = ((/* implicit */unsigned char) arr_9 [i_3] [i_3]);
                    var_13 = ((/* implicit */unsigned short) var_7);
                    arr_10 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_3] [i_3 - 1] [i_2 - 1])) ? (arr_7 [i_2 - 1] [i_2 - 1] [i_3 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_7))))));
                    var_14 += ((/* implicit */long long int) ((unsigned int) (signed char)-116));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 13220640541537945084ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115)))));
                }
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2416946779U)) ? (arr_1 [(unsigned char)2]) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_2 + 2] [i_2] [(signed char)4] [i_1])))))));
            }
            for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_0 [(unsigned char)14]) / (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [7ULL] [i_5] [i_6])))))));
                            var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_6]))));
                            var_19 += ((/* implicit */unsigned int) ((long long int) arr_7 [i_4 - 2] [i_4 + 2] [i_4 - 1]));
                            var_20 = ((/* implicit */_Bool) ((unsigned char) (unsigned short)55472));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) arr_2 [i_4] [i_1]);
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 2694393701U)) : (arr_13 [i_0] [(unsigned char)3] [i_0]))) : (((/* implicit */unsigned long long int) ((int) (unsigned short)29474)))));
                var_23 = ((((/* implicit */int) (unsigned short)0)) << (((5441527103617189713ULL) - (5441527103617189703ULL))));
            }
        }
        var_24 = ((unsigned int) (_Bool)1);
        var_25 = ((/* implicit */_Bool) var_0);
    }
    var_26 = ((/* implicit */unsigned long long int) ((var_2) != (((((/* implicit */_Bool) -1173893929)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))) : (1523471763U)))));
}
