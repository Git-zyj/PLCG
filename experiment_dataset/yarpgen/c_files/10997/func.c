/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10997
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
    var_10 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8796093022207LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12213))) : (((((/* implicit */unsigned long long int) 9223372036854775807LL)) + (var_3))))))));
                var_11 *= ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) 3974895776U)))));
                var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)97))))), ((+(arr_2 [i_0])))));
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) arr_2 [i_0]))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */int) arr_7 [i_2]);
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned char i_6 = 3; i_6 < 10; i_6 += 4) 
                            {
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_11 [i_3] [i_6 - 1]))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_2] [i_5])) ? (((/* implicit */unsigned long long int) arr_2 [i_2])) : (arr_11 [i_6 - 1] [i_6 + 1]))))));
                                var_18 = ((/* implicit */unsigned long long int) var_2);
                                arr_21 [i_5] [i_3] [i_4] [i_5] [i_6] &= ((/* implicit */long long int) ((((var_5) < (((/* implicit */int) (signed char)118)))) ? (((unsigned int) arr_1 [i_6 + 2])) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))));
                                var_19 = ((/* implicit */unsigned int) arr_19 [i_2] [i_2] [i_3] [i_4] [i_4] [i_5] [i_6 + 3]);
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                            {
                                var_20 = ((/* implicit */short) arr_23 [i_2]);
                                var_21 = ((/* implicit */unsigned short) (-(10562525129168461374ULL)));
                                arr_24 [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-12))));
                                arr_25 [i_2] [i_2] [i_2] [i_2] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)6538))));
                            }
                            for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                            {
                                arr_30 [i_2] [i_3] [i_4] [i_5] [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((long long int) var_7)));
                                arr_31 [i_2] [i_3] [i_4] [i_2] [i_8] = ((/* implicit */unsigned short) 1393453099);
                            }
                            for (unsigned short i_9 = 3; i_9 < 12; i_9 += 2) 
                            {
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (short)-14))))) | (max((1143914305352105984LL), (988054058674209353LL))))) == (((/* implicit */long long int) ((/* implicit */int) arr_29 [(unsigned char)8] [8] [i_4] [8] [8]))))))));
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_0))));
                                arr_34 [i_9 + 2] [i_9] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_33 [i_2] [i_3] [i_5] [i_5] [i_9 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_33 [i_2] [i_4] [i_4] [i_5] [i_9 - 1])))) != (((((/* implicit */_Bool) 8859660213283269789LL)) ? (((/* implicit */int) arr_33 [i_5] [i_3] [i_2] [i_5] [i_9 - 2])) : (((/* implicit */int) arr_33 [i_9] [i_5] [i_4] [i_5] [i_9 + 1]))))));
                            }
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
                            {
                                var_24 ^= ((/* implicit */short) ((signed char) var_6));
                                arr_37 [i_2] [i_3] [i_4] [i_5] [i_2] = ((/* implicit */long long int) (+(267911168)));
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_0))));
                                arr_38 [i_2] [i_2] [i_3] [i_3] [i_4] [i_2] [i_10] = ((/* implicit */int) ((arr_20 [i_10] [i_5] [i_4] [i_3] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
                                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13711))) : (arr_20 [i_2] [i_3] [i_4] [i_5] [i_4])));
                            }
                            for (int i_11 = 0; i_11 < 14; i_11 += 4) 
                            {
                                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) -211366579)) * (((((/* implicit */_Bool) ((unsigned short) arr_32 [i_4] [i_4]))) ? (((/* implicit */unsigned long long int) ((long long int) 8562884195797451151LL))) : (((((/* implicit */unsigned long long int) arr_16 [i_11] [i_11])) & (18446744073709551609ULL))))))))));
                                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_40 [i_11] [(unsigned short)9] [i_11] [7] [i_11] [i_2])) ? (-1342497175) : (((/* implicit */int) var_6)))) : ((~(((/* implicit */int) arr_19 [i_2] [i_3] [i_5] [i_5] [i_4] [i_3] [(unsigned char)3]))))));
                                arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) arr_33 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                                var_29 = ((/* implicit */signed char) 8581545984LL);
                            }
                            for (long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                            {
                                arr_44 [i_2] [i_2] [i_5] [i_5] [i_5] = ((/* implicit */signed char) arr_1 [i_5]);
                                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_2))));
                                var_31 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_28 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (var_7) : (((/* implicit */unsigned long long int) ((unsigned int) arr_17 [i_2] [i_3] [i_12] [i_12]))))) & (arr_4 [i_4] [i_5])));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
