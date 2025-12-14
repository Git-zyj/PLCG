/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147551
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_18 &= ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned char) var_0)), (var_7))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) % (max((((/* implicit */long long int) 357590034)), (-3095790728716401989LL)))));
                        var_20 &= ((/* implicit */unsigned char) var_10);
                    }
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_3))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1]))) * (((((/* implicit */_Bool) -357590034)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24835))) : (342594963U)))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)106)), ((unsigned char)143)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (min((var_1), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_5 [(signed char)9] [(signed char)16] [i_5])))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_8)))))))));
                        arr_14 [i_2] [(signed char)3] [i_1] [i_2] = ((/* implicit */unsigned short) var_9);
                        var_24 = ((/* implicit */unsigned char) arr_3 [11]);
                    }
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) arr_11 [(signed char)10] [i_1 - 2] [(unsigned char)14] [(signed char)10]))))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    var_26 |= ((/* implicit */short) var_15);
                    var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))));
                    var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [(_Bool)1] [18LL] [16ULL]))));
                    var_29 = ((/* implicit */int) arr_5 [(signed char)14] [i_1] [6ULL]);
                }
                for (signed char i_7 = 3; i_7 < 17; i_7 += 3) 
                {
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((((/* implicit */_Bool) arr_2 [i_1 - 4] [i_7 + 2])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1 - 4] [i_7] [i_7] [(signed char)18]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_1 - 3] [i_1] [(signed char)10] [(unsigned char)13])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_7 - 2])) : (((/* implicit */int) arr_15 [i_1 - 2] [(signed char)1] [i_7] [(_Bool)1])))))));
                    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [18ULL] [i_1])) ? (max((arr_19 [(unsigned short)5] [5ULL] [3LL]), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_16 [(unsigned char)19] [(unsigned char)11] [(short)2])))))))) ? (((arr_19 [i_7] [i_1] [(signed char)5]) / (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1 - 3] [i_1 - 3] [(unsigned short)12] [i_7 - 3]))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                }
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) ((unsigned short) min((min((var_3), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) var_8))))))));
}
