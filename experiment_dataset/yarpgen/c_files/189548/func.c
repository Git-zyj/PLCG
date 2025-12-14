/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189548
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [(_Bool)1] [i_0] [i_1]))))) && (((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)4032)), (arr_2 [i_0] [i_0] [i_0]))))))));
                var_19 -= ((/* implicit */unsigned char) ((_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (arr_0 [i_0] [i_0]) : ((+(arr_0 [i_0] [i_0]))))));
                var_20 += ((/* implicit */unsigned long long int) 615879569);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) ((arr_1 [i_2]) ^ (((/* implicit */unsigned long long int) (+(var_0))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (min((((/* implicit */long long int) (unsigned short)61503)), (-6269477585678483419LL)))))) : (((/* implicit */int) var_6))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 1) /* same iter space */
            {
                arr_14 [i_3] [20] = ((/* implicit */signed char) (~((~((~(1006632960)))))));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 2; i_5 < 21; i_5 += 1) 
                {
                    var_22 = max((((/* implicit */unsigned int) ((var_0) > (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_7 [(short)13] [i_3])) : (((/* implicit */int) (unsigned short)16352))))))), (arr_9 [i_2]));
                    var_23 = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) var_12)) ? (2094952577) : (((/* implicit */int) var_10)))), (((/* implicit */int) arr_12 [i_3] [i_4 + 1] [i_3])))), (((((/* implicit */_Bool) arr_2 [i_2] [15ULL] [i_4])) ? (arr_16 [i_2] [i_3] [i_4] [i_5] [i_4 + 1] [i_5 + 4]) : (arr_16 [i_2] [i_3] [i_4] [23U] [i_4 - 1] [i_5 + 4])))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 1) 
                {
                    var_24 = ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3] [i_4 - 2] [i_4])) ? (((unsigned int) (signed char)48)) : ((+(var_5))));
                    arr_19 [i_3] [i_3] [i_4] [i_6] = ((/* implicit */unsigned long long int) (signed char)48);
                    arr_20 [i_2] [i_3] [5U] [i_3] [i_6 + 3] = ((/* implicit */short) arr_15 [i_3] [i_6] [3] [i_4 + 1] [i_3] [i_3]);
                }
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    var_25 = (i_3 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) max((arr_17 [i_4 - 1] [i_7] [i_3] [i_7] [i_7]), ((short)15872)))) << (((min((arr_22 [i_4 + 2] [(unsigned short)18] [i_3] [i_7]), (arr_22 [i_4 + 2] [i_4] [i_3] [i_4]))) - (260839244)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) max((arr_17 [i_4 - 1] [i_7] [i_3] [i_7] [i_7]), ((short)15872)))) << (((((min((arr_22 [i_4 + 2] [(unsigned short)18] [i_3] [i_7]), (arr_22 [i_4 + 2] [i_4] [i_3] [i_4]))) - (260839244))) + (580283617))))));
                    var_26 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))) % (var_7)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)6588))));
                        var_28 -= ((/* implicit */short) var_8);
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (arr_24 [i_8 - 2] [i_8 + 1] [i_8] [i_8 + 3] [i_8] [i_8 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) arr_24 [i_8 - 2] [i_8 + 1] [i_8] [i_8 + 3] [i_8] [i_8])) ? (((/* implicit */long long int) 396693941U)) : (arr_24 [i_8 - 2] [i_8 + 1] [(signed char)5] [i_8 + 3] [i_8 - 2] [i_8])))));
                    }
                }
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    var_30 = ((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (short)5695))))))) ? ((-((~(((/* implicit */int) var_9)))))) : ((((-(((/* implicit */int) (unsigned char)56)))) * (((((/* implicit */int) var_10)) % (-1280300316)))))));
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) 1280300304))))), (arr_21 [i_2] [i_3] [i_4] [i_4 + 1] [i_4] [i_4])))) ? ((~(var_5))) : (((/* implicit */unsigned int) max((((var_1) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned short)61481)))))));
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_2] [i_3] [i_4 + 2] [i_9] [i_9] [i_9]))) : (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned int) var_11))))))) ? ((-(max((var_13), (((/* implicit */unsigned long long int) arr_0 [i_9] [i_2])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((var_0) >= (arr_15 [2LL] [i_2] [i_2] [16ULL] [i_4 - 1] [(unsigned short)0]))))))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_10 = 2; i_10 < 23; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        {
                            arr_34 [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) (unsigned short)61503)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_2] [5] [22U] [i_2] [i_3]))) : ((~(1071644672U)))))));
                            arr_35 [(unsigned char)14] [12] [(unsigned short)16] [i_10 - 1] [(unsigned short)16] [16LL] [i_2] &= ((/* implicit */int) (+(max((var_13), (72057594037927936ULL)))));
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_2] [i_4 + 3] [i_4] [i_4 + 3] [i_10 - 1] [i_11]))) ? ((~(arr_22 [i_11] [(unsigned char)18] [(unsigned char)18] [i_4 + 1]))) : (((/* implicit */int) min((arr_30 [i_2] [i_3] [22LL] [(unsigned char)14] [i_11] [i_4 + 3]), (arr_30 [i_2] [i_3] [i_3] [(unsigned char)18] [i_11] [i_4 + 1])))))))));
                            var_34 *= ((/* implicit */_Bool) var_7);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned long long int i_12 = 2; i_12 < 22; i_12 += 1) /* same iter space */
            {
                var_35 += ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 17154262487150846309ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [(_Bool)1]))) : (var_7))) : (((/* implicit */unsigned long long int) arr_2 [i_2] [i_12 + 3] [i_12]))));
                arr_40 [i_3] [i_3] [23] [i_12] = ((/* implicit */unsigned char) arr_4 [i_2]);
            }
            arr_41 [i_2] [i_3] [i_2] = (~(((/* implicit */int) (unsigned short)10639)));
        }
        var_36 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_33 [i_2] [(_Bool)0] [i_2] [i_2] [i_2])) ? (297416113U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16352))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_39 [i_2] [i_2] [9ULL])))))));
        var_37 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5)))))), ((~(arr_1 [i_2]))))), (((/* implicit */unsigned long long int) var_14))));
    }
}
