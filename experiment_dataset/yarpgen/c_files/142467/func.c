/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142467
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) max((max((((arr_6 [i_2 - 2]) & (((/* implicit */int) arr_4 [(_Bool)1])))), (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((short) (signed char)-20))))))));
                    var_17 ^= ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) ((short) arr_4 [i_2 - 1]))), (max((((/* implicit */unsigned long long int) arr_4 [i_0])), (var_13)))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_18 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((arr_7 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))) >> (((/* implicit */int) ((_Bool) var_3)))));
                        var_19 ^= ((/* implicit */long long int) max((((unsigned short) arr_5 [i_3] [i_2 - 2] [i_2 - 2])), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) != (arr_3 [i_0] [i_2 + 1] [i_1]))))));
                    }
                    var_20 ^= ((/* implicit */signed char) max((((/* implicit */long long int) arr_2 [i_0] [i_0])), (((((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1] [i_2 + 1] [i_2])) - (((long long int) arr_5 [i_0] [7LL] [i_0]))))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_2 - 2])), (var_8))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_1] [i_2 - 1]))), (arr_6 [i_0])))) : (max((((var_7) | (((/* implicit */unsigned long long int) arr_7 [i_1])))), (((/* implicit */unsigned long long int) max((var_12), (var_12)))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 14; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((short) max((((unsigned int) arr_6 [i_5])), (((/* implicit */unsigned int) (+(arr_9 [i_0] [i_0] [15LL] [i_0] [i_0])))))));
                    var_23 = ((/* implicit */long long int) max((max((max((((/* implicit */unsigned long long int) var_14)), (arr_12 [i_0] [i_4 - 1] [(unsigned char)11]))), (((unsigned long long int) arr_5 [i_5] [i_4] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_13 [i_4] [(_Bool)1]) != (((/* implicit */long long int) arr_9 [i_5] [i_5] [i_0] [(unsigned char)10] [i_0]))))) <= ((+(((/* implicit */int) var_11)))))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) max((((((/* implicit */_Bool) arr_13 [i_4 + 2] [i_4 + 1])) ? (arr_13 [i_4 - 1] [i_4 + 1]) : (arr_13 [i_4 + 1] [i_4 + 2]))), (max((arr_7 [i_4 + 1]), (arr_7 [i_4 + 1]))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_9 [i_4] [i_4 - 1] [i_6 - 1] [i_6 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_4 [i_6 + 1])) : (((/* implicit */int) ((unsigned short) (unsigned short)9933))))))))));
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_16 [i_0] [(unsigned short)10] [i_0] [(unsigned short)10]))));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_12)) : (arr_9 [i_0] [4U] [i_4 - 1] [i_6 - 1] [i_7]))) - (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) ((short) var_2)))))))))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) max((903631241U), (((/* implicit */unsigned int) (signed char)122)))))) && (((/* implicit */_Bool) max((arr_9 [i_0] [i_0] [9U] [i_7 - 1] [i_7]), (((/* implicit */int) arr_17 [i_0] [i_7] [(signed char)5] [i_7 - 1] [i_7 - 1]))))))))));
                        }
                        var_29 -= ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) max((var_1), (var_1)))), (arr_21 [i_6] [i_6 + 1] [i_6 + 1] [i_4 + 1] [14ULL] [(unsigned char)5]))))));
                    }
                    for (signed char i_8 = 3; i_8 < 14; i_8 += 1) 
                    {
                        var_30 = ((unsigned int) max((((/* implicit */unsigned int) max((arr_0 [i_0]), (((/* implicit */short) arr_4 [i_0]))))), (((unsigned int) var_4))));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 1; i_9 < 13; i_9 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) ((short) arr_9 [i_0] [i_4 - 1] [i_4 - 1] [i_4 - 1] [(signed char)4])))))));
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(unsigned char)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4] [i_4]))) : (arr_11 [i_0] [(short)1] [i_0])))) ? (((((/* implicit */_Bool) ((arr_7 [i_8 - 3]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [15U])))))) ? (((/* implicit */int) ((short) arr_20 [i_4 + 2] [i_4] [i_5]))) : (((/* implicit */int) ((signed char) var_1))))) : (((((/* implicit */_Bool) (-(arr_20 [i_9] [i_4] [i_5])))) ? (((/* implicit */int) ((signed char) var_6))) : (((((/* implicit */int) arr_0 [i_9])) - (((/* implicit */int) arr_5 [i_8] [i_4] [i_5])))))))))));
                        }
                    }
                    for (long long int i_10 = 2; i_10 < 14; i_10 += 2) 
                    {
                        arr_32 [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [15] [15] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 3391336046U)) != (7004174068727513847ULL))))) : (arr_12 [i_4 + 1] [i_4 + 1] [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_19 [i_4 - 1] [i_4 + 2]), (((signed char) var_2))))))));
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            var_33 -= ((/* implicit */short) ((_Bool) var_6));
                            var_34 ^= ((/* implicit */unsigned char) ((short) max((arr_30 [7LL] [(signed char)6] [i_0] [0LL] [0LL] [i_4 + 2]), (arr_30 [i_0] [i_0] [i_0] [i_0] [i_4 + 1] [i_4 - 1]))));
                        }
                        for (unsigned long long int i_12 = 2; i_12 < 14; i_12 += 4) 
                        {
                            arr_37 [i_0] [i_4] [i_5] [i_10 + 1] [i_12 - 1] = ((/* implicit */unsigned short) max(((~(arr_9 [i_0] [(unsigned short)9] [i_4 + 1] [i_5] [i_10 + 1]))), (((/* implicit */int) ((_Bool) ((_Bool) 16178742839646809293ULL))))));
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) max((((/* implicit */int) max(((!(((/* implicit */_Bool) arr_29 [i_12] [15] [i_12])))), ((!(((/* implicit */_Bool) arr_7 [i_0]))))))), (((((/* implicit */_Bool) max((arr_29 [i_10 - 2] [1LL] [i_4]), (((/* implicit */signed char) var_3))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_36 [i_0] [i_4] [i_10])), (arr_5 [i_0] [(short)0] [i_0])))))))))));
                        }
                    }
                    for (unsigned int i_13 = 2; i_13 < 14; i_13 += 1) 
                    {
                        var_36 = ((/* implicit */long long int) min((var_36), (((long long int) max((max((((/* implicit */int) var_2)), (arr_6 [i_5]))), (((/* implicit */int) var_12)))))));
                        var_37 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [4LL] [i_4] [i_13 + 1]))))), ((~(((long long int) arr_2 [(unsigned short)3] [7LL]))))));
                    }
                    var_38 = ((/* implicit */unsigned short) max(((+(((unsigned long long int) arr_15 [i_0])))), (((/* implicit */unsigned long long int) var_10))));
                    var_39 += ((/* implicit */unsigned long long int) max((((long long int) arr_28 [i_4] [i_4] [i_4] [i_4 + 2] [i_4 + 1] [i_5])), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_3) ? (arr_18 [i_5] [i_5] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) <= (arr_12 [i_4 + 1] [i_4 + 2] [i_4]))))));
                }
            } 
        } 
        var_40 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))))) ? ((+(arr_38 [(unsigned short)14] [i_0] [i_0] [(_Bool)1] [(short)8]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0])))) < (((/* implicit */int) ((short) arr_23 [i_0] [i_0] [i_0])))))))));
        arr_42 [i_0] [i_0] = ((long long int) (short)-6454);
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_45 [i_14] [i_14] = ((/* implicit */signed char) ((unsigned long long int) 2864146779558704454ULL));
        arr_46 [i_14] = ((/* implicit */signed char) (-(arr_43 [i_14])));
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
    {
        arr_51 [i_15] = ((unsigned long long int) arr_18 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [i_15] [i_15]);
        var_41 += ((/* implicit */signed char) ((arr_49 [i_15]) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_41 [i_15] [(unsigned char)12] [i_15] [i_15]))))))));
    }
    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) max((var_13), (((/* implicit */unsigned long long int) max((((unsigned int) var_9)), (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))))))))));
    var_43 = ((/* implicit */unsigned char) min((var_43), (var_0)));
    var_44 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 4) 
    {
        for (unsigned short i_17 = 0; i_17 < 16; i_17 += 2) 
        {
            {
                arr_56 [i_16] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((max((arr_34 [i_16] [i_17]), (((/* implicit */long long int) var_5)))) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_16]))))))));
                var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) arr_9 [i_16] [i_16] [(short)5] [i_16] [i_17])) ? (((/* implicit */int) arr_23 [i_16] [i_17] [i_17])) : (((/* implicit */int) arr_21 [i_16] [i_17] [i_17] [(unsigned char)13] [i_17] [i_16])))) >> (((((/* implicit */int) max((((/* implicit */short) var_11)), (var_9)))) - (191))))), (max(((+(((/* implicit */int) arr_19 [i_16] [i_17])))), (((/* implicit */int) arr_54 [i_16] [i_16])))))))));
            }
        } 
    } 
}
