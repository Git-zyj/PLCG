/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157343
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
    var_16 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */unsigned long long int) ((unsigned int) 53733234U))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_8))))))))));
    var_18 |= ((((/* implicit */long long int) ((((/* implicit */int) var_15)) + (((/* implicit */int) var_0))))) > (var_1));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((arr_2 [i_0 + 1]) == (arr_2 [i_0])));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 1])) == (((/* implicit */int) arr_1 [i_0 + 1]))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((int) (short)23125)) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (var_2)))))))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_10 [i_0] [(unsigned char)7] [i_0 - 1] [(unsigned short)7] [i_4] [i_4]))));
                            var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_0 + 1] [i_0 + 1])) ? (arr_10 [i_0 + 1] [i_0 + 1] [(signed char)8] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [8ULL] [i_2] [(unsigned short)2] [i_4] [8ULL])));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_1 - 2])) == (arr_2 [i_0 + 1]))))));
                            var_25 *= ((/* implicit */_Bool) ((signed char) var_13));
                            var_26 = ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0 - 1])))) : (((/* implicit */int) arr_7 [i_1] [i_1 + 2] [i_1 - 1])));
                            var_27 *= ((/* implicit */_Bool) var_9);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_17 [i_2] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_0 [i_0] [i_0 - 1])));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_1 + 2] [i_1])) && (((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_1 + 2] [i_1 + 2])))))));
                            arr_18 [i_0] [i_0] [(short)2] [i_3] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 - 1] [i_1 + 1] [i_1 + 2] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 2] [i_0 - 1] [i_3]))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_10 [i_6] [i_0] [i_2] [(unsigned char)10] [(unsigned char)9] [i_0])) : (arr_6 [i_6] [i_0 - 1] [i_0 - 1])))));
                            arr_19 [i_0 - 1] [i_0 - 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_1]))) == (7547094761845596449LL)))) << (((((/* implicit */int) arr_11 [16U] [i_6] [(unsigned char)16] [i_3] [i_2] [i_1] [i_0 + 1])) + (21749)))));
                        }
                        var_29 = ((/* implicit */signed char) arr_0 [i_0] [2]);
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((int) var_6)))));
        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) == (((/* implicit */int) var_10)))))) % (((arr_6 [13LL] [i_0 + 1] [i_0]) * (((/* implicit */unsigned long long int) var_7)))))))));
    }
    var_32 |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_7)))) <= (((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)105)) >> (((var_1) + (7109965468151777251LL)))))) % (var_4)))));
}
