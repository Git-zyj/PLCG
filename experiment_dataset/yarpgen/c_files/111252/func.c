/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111252
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
    var_16 += ((/* implicit */signed char) var_2);
    var_17 = ((/* implicit */short) (~(min((828643495U), (((/* implicit */unsigned int) ((_Bool) var_9)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((int) (-(((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? (9237573778234234390ULL) : (((/* implicit */unsigned long long int) 65535LL)))))));
        var_19 = max((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) != (var_7)))) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) ((signed char) max((arr_0 [i_0] [i_0]), (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                var_20 = ((/* implicit */unsigned char) ((((long long int) arr_5 [i_0] [i_1] [i_2])) <= (((/* implicit */long long int) ((unsigned int) var_5)))));
                var_21 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0]);
                arr_6 [i_2] [(short)1] [i_2] [i_2] = ((/* implicit */short) var_7);
                var_22 = ((/* implicit */unsigned long long int) (!(min((arr_4 [i_0] [i_1] [i_2]), (arr_4 [i_1] [i_1] [i_2])))));
                var_23 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_2]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [13U]))))))));
            }
            for (signed char i_3 = 2; i_3 < 16; i_3 += 4) 
            {
                arr_9 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) var_2)))))) && (((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_10))))))));
                var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_9))) << ((((~(((/* implicit */int) arr_4 [(short)7] [i_3 - 2] [i_3])))) + (6)))));
            }
            for (short i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)182)) ? (arr_8 [i_0] [i_1] [i_4] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [7U] [i_1] [i_0]))) : (arr_3 [(short)3] [i_1] [i_4])));
                arr_13 [i_4] [i_4] = arr_4 [i_0] [i_1] [i_0];
                /* LoopSeq 2 */
                for (unsigned int i_5 = 3; i_5 < 15; i_5 += 4) 
                {
                    var_26 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((short) -8854613701263442566LL))), (((((/* implicit */_Bool) max(((unsigned char)74), (arr_11 [(short)14] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) max((arr_14 [i_5 + 2] [0U] [(short)4] [i_5] [i_1]), (((/* implicit */long long int) var_10))))) : (min((((/* implicit */unsigned long long int) var_2)), (2ULL)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        var_27 = ((_Bool) ((((/* implicit */int) arr_20 [i_0] [i_1] [i_4] [i_5] [i_6] [i_6])) + (((/* implicit */int) var_14))));
                        arr_21 [i_0] [i_1] [(signed char)0] [i_4] [i_6] = ((/* implicit */short) ((unsigned char) 6640404899309122170ULL));
                        var_28 *= arr_20 [i_0] [i_1] [i_4] [i_5] [i_5 - 3] [i_6];
                        var_29 = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) 18446744073709551603ULL)))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_4] [i_7])), (var_0)));
                        var_31 = ((/* implicit */unsigned short) ((min((arr_23 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 - 3] [i_5 - 2] [i_5 + 1]), (((/* implicit */unsigned long long int) arr_1 [i_5 + 1] [i_5 + 2])))) != (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_22 [i_5 + 1] [i_5 - 1] [i_5 - 3] [i_4])), (arr_12 [i_4]))))));
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) arr_15 [13ULL] [i_1] [i_1] [i_5 - 3] [i_7] [(_Bool)1]))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (+(max((((/* implicit */unsigned int) arr_16 [i_4] [i_5 - 1] [i_5 - 3] [i_5 - 3] [i_7])), (((unsigned int) (_Bool)1)))))))));
                        var_34 = ((/* implicit */int) var_14);
                    }
                    var_35 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [3U] [i_1] [i_1]))));
                }
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    arr_26 [i_0] [i_4] [i_1] [i_4] [i_8] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? ((+(((/* implicit */int) arr_16 [i_4] [i_4] [i_1] [i_1] [i_4])))) : ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                    var_36 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_12 [i_4])))));
                    arr_27 [i_0] [i_1] [i_4] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) (short)-21612)), (2798307508U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((unsigned long long int) (short)21381))))) : (((((/* implicit */_Bool) min((637592625U), (arr_12 [i_4])))) ? (((((/* implicit */_Bool) var_1)) ? (854019748U) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_0])) == (((/* implicit */int) arr_7 [i_0]))))))))));
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_3 [i_0] [i_4] [i_8]) : (arr_3 [i_8] [i_8] [i_8])))) ? (min((arr_3 [i_0] [i_1] [i_4]), (((/* implicit */long long int) arr_5 [i_0] [(unsigned char)13] [i_0])))) : (max((((/* implicit */long long int) arr_2 [i_8] [i_4] [i_1])), (arr_3 [i_0] [i_1] [i_0])))));
                }
            }
            var_38 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-15))) & (9223372036854775807LL)));
            arr_28 [i_1] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) max((arr_22 [2LL] [i_0] [i_0] [2LL]), ((unsigned char)182))))) / (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (var_15) : (arr_8 [i_0] [i_1] [i_0] [i_1]))));
        }
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        arr_31 [(unsigned short)0] [i_9] = arr_3 [(unsigned char)14] [i_9] [4LL];
        var_39 = ((/* implicit */_Bool) arr_19 [i_9]);
        arr_32 [i_9] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_4)))) ? ((+(var_2))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_9])))));
    }
    for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
    {
        var_40 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)37847));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            arr_38 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) arr_3 [i_10] [i_11] [i_11])) ? (arr_34 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((signed char) arr_0 [i_11] [16ULL]))))), (((/* implicit */unsigned long long int) var_14))));
            /* LoopNest 2 */
            for (signed char i_12 = 1; i_12 < 15; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_44 [i_10] [(unsigned char)13] [i_11] [i_12 + 1] [i_10] = (i_10 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_10] [i_12 + 1] [i_12] [i_12])) << ((((-(((/* implicit */int) arr_18 [i_10] [i_12 + 1] [i_12] [(signed char)8])))) + (6326)))))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_18 [i_10] [i_12 + 1] [i_12] [i_12])) + (2147483647))) << ((((((-(((/* implicit */int) arr_18 [i_10] [i_12 + 1] [i_12] [(signed char)8])))) + (6326))) - (20493))))));
                        var_41 -= ((/* implicit */long long int) arr_7 [i_12]);
                        var_42 -= ((/* implicit */short) (unsigned char)86);
                    }
                } 
            } 
            var_43 = ((/* implicit */short) arr_22 [i_10] [i_10] [i_10] [i_10]);
            arr_45 [i_10] = ((/* implicit */_Bool) var_12);
        }
    }
    var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((short)-1), (((/* implicit */short) (signed char)-43))))) ? (var_3) : (var_9)));
}
