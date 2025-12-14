/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140586
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_11 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-109))) : (min((max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_0])))), (((/* implicit */long long int) (short)-32756))))));
        var_12 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)1))))));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((unsigned char) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_0))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_14 *= ((/* implicit */signed char) (unsigned char)249);
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_2), (((/* implicit */short) var_1))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))), (min((var_0), (((/* implicit */unsigned long long int) (signed char)-108)))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            /* LoopSeq 4 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                arr_15 [i_2] [i_2] [i_3 + 2] [i_4 + 1] = (signed char)(-127 - 1);
                arr_16 [i_2] [i_3] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned char) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-120)))), (arr_13 [i_4] [i_4 + 1] [(unsigned char)11])));
            }
            for (signed char i_5 = 4; i_5 < 14; i_5 += 1) 
            {
                var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)52)), (arr_3 [i_2])));
                var_16 ^= ((/* implicit */unsigned long long int) ((long long int) min((((int) var_4)), (((/* implicit */int) ((var_6) != (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
            }
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_7))));
                var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
                var_19 = ((/* implicit */unsigned short) var_8);
                var_20 = ((/* implicit */signed char) var_2);
            }
            /* vectorizable */
            for (short i_7 = 2; i_7 < 13; i_7 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */int) var_8))))))));
                arr_25 [i_2] [i_2] = arr_21 [i_2] [i_2] [i_3 - 1] [i_7];
                arr_26 [i_7 - 1] [i_3] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) var_3)) % (((/* implicit */int) var_2)))) < (((/* implicit */int) var_8))));
                arr_27 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)86)) & (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) (signed char)86)))) : (((/* implicit */int) (short)-13506))));
                var_22 = ((/* implicit */short) arr_7 [i_7]);
            }
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                for (long long int i_9 = 3; i_9 < 12; i_9 += 2) 
                {
                    {
                        var_23 = ((/* implicit */signed char) var_10);
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), (min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-8)) | (-1505871990)))), (min((var_6), (((/* implicit */long long int) (unsigned char)4))))))));
                            arr_34 [i_2] [i_3 - 1] [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_3] [i_3 + 1] [i_9 - 2])) ? (((((/* implicit */int) (signed char)-86)) ^ (((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 1] [i_9 + 3])))) : (((/* implicit */int) max((((/* implicit */short) arr_13 [i_2] [i_3 + 2] [i_9 - 1])), (var_8))))));
                            arr_35 [i_3] [i_3] [i_8] [i_9] [i_10] [i_3 + 3] = ((/* implicit */unsigned int) (signed char)104);
                        }
                        for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 3) 
                        {
                            arr_39 [i_11 - 2] [i_9] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) var_10);
                            var_25 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_11] [i_9] [(unsigned char)13] [i_2])) : (((/* implicit */int) var_9))));
                            arr_40 [i_2] [i_2] [i_3] [(_Bool)1] [1LL] [i_3] [i_11 - 1] &= ((/* implicit */unsigned short) min((((arr_33 [i_3 - 1] [i_3 - 1] [i_9 + 2] [i_11 + 1] [i_11 + 1]) ? (((/* implicit */int) arr_33 [i_3 - 1] [i_3 + 1] [i_9 + 2] [i_11 - 1] [i_11])) : (((/* implicit */int) arr_33 [i_3 + 2] [i_3 + 2] [i_9 - 1] [i_11 - 1] [i_11])))), (((((/* implicit */int) arr_33 [i_3 - 1] [i_3 + 3] [i_9 - 3] [i_11 - 2] [i_11])) * (((/* implicit */int) arr_33 [i_3 + 3] [i_3 + 3] [i_9 - 3] [i_11 + 1] [i_11 - 1]))))));
                        }
                        var_26 = ((/* implicit */long long int) (+(var_0)));
                        var_27 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_18 [i_2] [i_2] [i_8] [i_2])) <= (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) var_0)) ? (3947863468U) : (((/* implicit */unsigned int) var_10)))))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)87)) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)11))))))))));
                        arr_41 [i_2] [i_3] [i_8] [i_9 + 3] [i_9 + 1] = ((/* implicit */short) max((((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2])), (((((/* implicit */int) min((var_3), ((unsigned char)230)))) | (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_3 [i_2]))))))));
                    }
                } 
            } 
        }
        var_28 -= ((/* implicit */signed char) max((arr_38 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */long long int) min((arr_7 [i_2]), (((/* implicit */int) arr_30 [i_2])))))));
        arr_42 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (min((((/* implicit */unsigned long long int) arr_12 [i_2] [i_2] [i_2] [i_2])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (arr_20 [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-1LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (_Bool)1)) : (var_10)))))))));
        var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_5), (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((long long int) var_7))));
    }
    var_30 = ((/* implicit */long long int) var_2);
}
