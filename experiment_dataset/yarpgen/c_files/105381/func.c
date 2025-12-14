/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105381
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
    var_14 = ((unsigned char) var_9);
    var_15 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (7098822170647427332LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) arr_1 [i_0]))))))))))));
        arr_3 [15U] = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_0)))) & (min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) (unsigned short)41203)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                arr_9 [i_0] [(unsigned char)6] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) (unsigned short)41194))))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [(unsigned short)3] [(unsigned short)3] [(_Bool)1])) ? (((/* implicit */int) var_2)) : (var_11))) >= (((/* implicit */int) (unsigned short)24332)))))));
            }
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    arr_17 [(signed char)7] [i_3] [i_3] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)26582)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) && (((/* implicit */_Bool) arr_12 [(short)8] [(short)8] [0] [i_4])))))) : (((unsigned long long int) var_1))));
                    var_18 = ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_4])));
                }
                var_19 = ((/* implicit */int) arr_15 [i_3] [i_1] [i_3] [0ULL]);
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) arr_16 [i_1] [i_1] [i_3] [i_5]))))) ? (((/* implicit */int) arr_21 [i_5] [i_3])) : (((var_6) ? (((/* implicit */int) arr_4 [i_3] [i_3])) : (((/* implicit */int) (unsigned char)255))))));
                    var_21 = ((/* implicit */unsigned short) arr_4 [(signed char)3] [i_1]);
                    var_22 = (unsigned short)13816;
                }
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 4; i_7 < 20; i_7 += 1) 
                    {
                        {
                            arr_28 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_0] [i_7])) ? (14141946729495653632ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                            var_23 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_6] [i_0] [i_6] [i_6])) ? (((/* implicit */int) (short)-26583)) : (((/* implicit */int) (_Bool)0))))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [(short)14] [i_1] [i_7 - 3] [i_7] [i_7 - 2])) ? (arr_18 [i_0] [i_0] [i_0] [i_7 + 1] [i_7] [i_7 + 1]) : (arr_18 [i_7] [i_7] [i_7] [i_7 - 2] [i_7] [i_7 - 2])));
                        }
                    } 
                } 
            }
            for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
            {
                arr_31 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_5 [i_0] [i_0]));
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    var_25 += (+((~(((/* implicit */int) arr_16 [i_0] [i_0] [(unsigned char)7] [i_9])))));
                    var_26 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_22 [i_8] [i_8])) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)246)))) * (((/* implicit */int) arr_2 [i_0] [i_0]))));
                    arr_35 [i_0] [i_0] [i_1] [i_8] [2] [i_9] &= ((/* implicit */_Bool) (+(var_11)));
                    arr_36 [i_0] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_0] [i_9])) ^ (((/* implicit */int) arr_19 [i_0] [i_9]))));
                    /* LoopSeq 1 */
                    for (signed char i_10 = 1; i_10 < 17; i_10 += 2) 
                    {
                        var_27 = arr_23 [i_10 + 1] [(unsigned short)2] [i_10] [i_10] [7] [i_10];
                        arr_41 [i_0] [i_0] [i_8] [i_9] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_8] [i_9] [i_1] [i_10])) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (_Bool)1))));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))));
                    }
                }
            }
            arr_42 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_1] [i_1]))) : (arr_8 [i_0] [i_1] [i_1])));
        }
    }
    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (var_7)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_3))))) ? (((long long int) (unsigned short)30302)) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) (((((-(((/* implicit */int) var_13)))) + (2147483647))) >> ((((~(((/* implicit */int) var_0)))) + (60)))))))))));
    var_30 = ((/* implicit */short) (~(((/* implicit */int) max((var_4), (((/* implicit */unsigned char) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_0))))))))));
}
