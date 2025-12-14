/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156235
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
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */_Bool) min((min((arr_0 [i_0 + 1] [i_0]), (arr_0 [i_1 + 2] [i_1 - 2]))), (((arr_0 [i_1 - 4] [i_1 + 2]) / (((((/* implicit */int) var_10)) >> (((var_2) + (5217632106385833734LL)))))))));
            var_12 = max((var_8), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))))))))));
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                var_13 &= arr_3 [i_0 + 4] [i_2];
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_0] [i_4])) ? (((((/* implicit */_Bool) min((arr_11 [i_0] [i_2] [i_4]), (((/* implicit */unsigned int) arr_2 [i_0] [i_2] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [4ULL] [i_3] [i_1] [i_1]), (var_10))))) : (max((var_11), (((/* implicit */long long int) arr_2 [i_0] [i_1] [i_2])))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_9 [(signed char)9] [i_2] [i_3])) ? (arr_12 [i_0] [(_Bool)1] [i_2] [i_3]) : (((/* implicit */long long int) arr_9 [i_3] [i_3] [i_3])))))))));
                            arr_15 [i_0] [i_0] [i_0] [(unsigned short)22] [i_0] = ((/* implicit */signed char) ((min((min((((/* implicit */long long int) arr_1 [i_0 + 1] [i_0 + 1])), (arr_12 [i_0] [i_0] [12] [i_3]))), (((/* implicit */long long int) max((var_10), (((/* implicit */unsigned short) arr_2 [i_0] [i_1 + 2] [i_2]))))))) ^ (max((min((((/* implicit */long long int) var_9)), (arr_12 [i_1] [i_2] [14LL] [i_4]))), (arr_12 [i_1 + 1] [i_1] [i_0 + 3] [i_1 - 2])))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_12 [i_0 + 3] [i_1 - 2] [i_1 - 3] [i_1 - 2]), (((/* implicit */long long int) arr_10 [i_0] [i_0 + 4] [i_0] [i_1] [0U] [i_1 - 3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0 + 4] [i_0 + 2] [i_1 + 1])))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_6 [i_0] [i_1 - 4]) : (arr_7 [i_0 + 3] [i_0 + 3] [i_2] [i_0 + 3])))) / (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) arr_11 [(signed char)16] [i_2] [i_3]))))))));
                        }
                    } 
                } 
                arr_16 [(unsigned short)7] [i_1] [i_0] = ((/* implicit */int) (~(((long long int) ((((/* implicit */_Bool) arr_13 [i_0 + 3] [i_0] [i_1 + 2] [i_1 + 2] [9LL])) ? (arr_11 [i_0] [i_0] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [13LL] [i_1 - 2] [i_1] [(_Bool)1] [13LL]))))))));
                arr_17 [i_0 + 3] [i_0 + 3] [i_2] [(signed char)4] = ((/* implicit */unsigned long long int) var_11);
            }
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_8 [i_0 + 2] [i_1 - 4] [i_1 - 3] [i_1 + 2])) / (((/* implicit */int) arr_8 [i_0 - 1] [i_1 - 3] [i_1 - 3] [i_1 - 1]))))));
                            arr_24 [i_7] [i_6] [i_5] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((int) arr_8 [8U] [i_1] [i_5] [i_5])) % (((/* implicit */int) arr_21 [i_0] [i_0] [(_Bool)1] [i_0] [i_6] [i_7]))))), (((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_1 + 2] [i_0])) ? (arr_11 [i_0 + 3] [i_1 + 1] [i_5]) : (arr_11 [i_0 + 2] [i_1 + 1] [i_5])))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) max((arr_10 [i_0] [i_1] [i_5] [i_1] [i_1] [i_0]), (((/* implicit */int) arr_21 [i_0] [i_0 + 4] [i_0 + 4] [i_1 - 4] [i_1 - 4] [i_5]))))), (max((((/* implicit */unsigned int) var_0)), (arr_7 [i_5] [i_5] [i_1 - 1] [i_0]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_21 [i_0 - 1] [i_0 + 2] [i_1 + 2] [i_5] [i_5] [i_5]))))));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 21; i_8 += 2) 
                {
                    for (int i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned short) ((((arr_3 [i_1 - 4] [i_1 - 4]) > (((/* implicit */unsigned int) arr_29 [i_0] [(unsigned short)0] [i_8 + 4] [i_0 + 2] [i_1 - 4])))) ? (((/* implicit */unsigned int) ((((arr_29 [i_0] [i_1] [i_8 - 1] [i_0 + 4] [i_1 + 1]) + (2147483647))) << (((((arr_29 [i_0] [i_1 - 3] [i_8 + 2] [i_0 - 1] [i_1 - 3]) + (1230819407))) - (26)))))) : (min((arr_3 [i_1] [i_1 - 1]), (arr_3 [i_1] [i_1 + 2])))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_0])) ? (arr_11 [i_0 + 4] [(unsigned short)21] [i_5]) : (((/* implicit */unsigned int) arr_9 [i_9] [i_1] [i_5]))))))) ^ (min((((/* implicit */long long int) arr_4 [i_8 + 4] [i_0 + 2])), (max((arr_12 [i_0 + 1] [i_1 - 4] [16U] [5]), (((/* implicit */long long int) arr_9 [(signed char)20] [i_5] [i_0]))))))));
                            var_20 = ((/* implicit */unsigned int) ((int) ((((((/* implicit */_Bool) arr_26 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) arr_1 [i_0] [i_0 + 2])) : (arr_26 [i_8] [i_5] [i_1 + 2] [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_27 [i_0 + 3] [i_1 - 3] [i_5] [i_8 + 1] [i_9] [5] [i_1])) == (var_1))))))));
                        }
                    } 
                } 
                arr_30 [i_0] [i_0] [i_1 - 1] [5ULL] = ((/* implicit */unsigned short) min(((+(arr_26 [i_1 - 2] [i_0 + 3] [i_0 + 4] [i_0 + 4]))), (((((/* implicit */_Bool) arr_12 [i_0 + 4] [i_0 - 1] [i_0] [i_0 + 1])) ? (arr_26 [i_1 - 4] [i_0 + 4] [i_0 - 1] [i_0 - 1]) : (arr_26 [i_1 - 2] [i_0 - 1] [i_0] [i_0 - 1])))));
                arr_31 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */signed char) min((max((arr_25 [i_0 + 4] [i_0 + 4] [i_5] [i_1 - 3]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_28 [i_0] [i_0] [i_0] [i_0 - 1] [i_0])), (arr_19 [13ULL] [i_0] [i_1] [i_5])))))), (((unsigned long long int) (~(((/* implicit */int) arr_13 [i_0] [i_1] [i_5] [i_5] [i_5])))))));
            }
            for (long long int i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                var_21 = ((/* implicit */signed char) ((((((arr_0 [i_0 + 3] [i_1]) ^ (arr_4 [i_0] [i_0]))) > (arr_27 [i_0 + 3] [i_1 - 1] [i_0 + 1] [i_10] [i_1] [i_0 + 3] [i_1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [21] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_1] [i_10]))) : (arr_26 [i_0 + 1] [i_0 + 2] [i_0 + 4] [i_0 + 2]))))))) : ((~(((/* implicit */int) ((_Bool) arr_25 [(unsigned short)20] [i_1 - 4] [(signed char)22] [i_10])))))));
                /* LoopNest 2 */
                for (long long int i_11 = 2; i_11 < 22; i_11 += 2) 
                {
                    for (int i_12 = 1; i_12 < 23; i_12 += 3) 
                    {
                        {
                            arr_41 [i_11] &= ((/* implicit */_Bool) ((unsigned long long int) min((((arr_1 [i_0] [i_12]) ^ (arr_1 [i_12 + 2] [i_1]))), (((/* implicit */int) ((((/* implicit */int) var_0)) < (arr_37 [i_0] [(_Bool)1] [i_10] [i_12 + 2])))))));
                            var_22 = ((/* implicit */long long int) ((arr_20 [i_12 + 1] [i_12 + 1] [i_12 + 1]) ? (var_1) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_10])) ? (((/* implicit */int) arr_32 [i_0] [i_0] [21U])) : (arr_10 [i_0 - 1] [i_0] [i_0] [i_0 + 3] [i_0] [i_0 + 3])))), (var_6))))));
                            arr_42 [i_1] [i_10] = ((/* implicit */unsigned short) arr_0 [i_0] [i_11]);
                        }
                    } 
                } 
            }
            arr_43 [i_0 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) arr_18 [i_1])) % (arr_26 [i_0 - 1] [i_0 - 1] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_34 [i_0] [i_0] [(_Bool)1] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (arr_38 [i_0] [i_0 + 1] [i_1 - 1] [i_1] [i_1 + 2]))))) : (max((arr_19 [i_0] [i_0 - 1] [i_0] [i_1]), (((/* implicit */unsigned int) arr_20 [i_1] [i_0] [i_0]))))))) : (min((((/* implicit */long long int) ((arr_35 [(signed char)0] [(_Bool)1] [4LL] [i_0] [(signed char)0]) ? (arr_29 [i_0] [(signed char)18] [i_1] [i_1 - 1] [i_1 - 4]) : (arr_37 [i_0] [i_1] [i_1 + 2] [i_1 + 1])))), (min((((/* implicit */long long int) arr_9 [i_0] [i_0 + 4] [i_0 + 4])), (var_7)))))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_14 = 1; i_14 < 21; i_14 += 3) 
            {
                for (long long int i_15 = 0; i_15 < 25; i_15 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_14 + 2] [i_13] [i_15])) ? (((/* implicit */int) arr_53 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_14 + 2] [i_14 + 1] [24])) : (((/* implicit */int) arr_33 [i_14 + 2] [i_14 + 2] [i_15]))))), (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_14] [i_14])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_4 [(signed char)9] [i_13])) : (arr_25 [i_0] [i_13] [i_14 - 1] [i_15]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_0 + 3])))))));
                        arr_54 [i_0] [i_15] [i_13] [i_14 + 3] [i_15] = ((/* implicit */_Bool) max((((((var_4) | (((/* implicit */long long int) var_5)))) ^ (((var_11) / (((/* implicit */long long int) arr_26 [i_0] [i_0] [i_14 + 4] [(unsigned short)10])))))), (((((/* implicit */long long int) ((/* implicit */int) max((arr_23 [i_0] [i_14] [i_0]), (((/* implicit */unsigned short) arr_47 [i_0] [i_13] [i_0])))))) * (((var_11) % (((/* implicit */long long int) arr_34 [i_0] [(_Bool)1] [i_15] [i_0]))))))));
                        arr_55 [i_14] [i_14 - 1] [i_15] [i_14] [i_14 + 3] [(signed char)3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_36 [i_0] [i_13] [i_14] [i_15] [i_13])), (arr_50 [i_15] [i_14] [i_0] [i_0])))) ? (((/* implicit */int) ((arr_12 [i_0] [i_0] [i_14 + 3] [i_0]) > (var_8)))) : (((/* implicit */int) arr_38 [i_14 - 1] [i_14 + 2] [i_14 + 1] [i_14 + 3] [i_0 + 1])))), (((/* implicit */int) min((arr_36 [i_0] [i_0] [i_13] [i_14 - 1] [i_15]), (arr_36 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 3] [i_14 + 3]))))));
                    }
                } 
            } 
            arr_56 [i_0] = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_29 [i_0] [i_13] [i_13] [(signed char)9] [i_13])))) : (min((var_11), (((/* implicit */long long int) var_6)))))) * (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) arr_20 [i_13] [i_13] [i_0])))) == (((int) arr_23 [i_0] [(_Bool)1] [i_13]))))))));
        }
        arr_57 [i_0 + 2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_4 [i_0 - 1] [10]) ^ (((arr_51 [21]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [8] [i_0 + 1]))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 + 4] [i_0 + 1] [12U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_0] [i_0]))) : (arr_19 [i_0] [i_0] [i_0] [i_0 - 1]))) << (((min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) arr_13 [(signed char)3] [i_0] [i_0 + 4] [21] [i_0])))) - (31U))))))));
        arr_58 [i_0] [i_0] = arr_4 [i_0 + 3] [(unsigned short)19];
        var_24 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) arr_46 [i_0] [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) arr_6 [24] [i_0 + 3])) - (arr_50 [(_Bool)1] [(_Bool)1] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) arr_33 [i_0 + 3] [i_0 - 1] [8])))))));
    }
    for (int i_16 = 3; i_16 < 18; i_16 += 2) 
    {
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_29 [i_16] [i_16] [i_16] [i_16] [i_16 + 1]))));
        arr_62 [i_16] = ((/* implicit */int) arr_59 [i_16]);
    }
    /* vectorizable */
    for (signed char i_17 = 3; i_17 < 6; i_17 += 3) /* same iter space */
    {
        var_26 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((/* implicit */int) arr_36 [i_17 - 3] [i_17] [i_17 - 1] [i_17 - 1] [i_17 + 2]))));
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) arr_48 [i_17 - 1] [i_17] [i_17 + 2] [(_Bool)1]))));
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */int) ((signed char) arr_46 [i_17] [i_17] [i_17]))) == (var_5))))));
    }
    for (signed char i_18 = 3; i_18 < 6; i_18 += 3) /* same iter space */
    {
        arr_67 [i_18 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_51 [i_18 + 4]) ? (min((((/* implicit */unsigned int) arr_21 [i_18 + 1] [i_18 + 3] [i_18] [3LL] [i_18 + 1] [i_18 + 3])), (arr_6 [i_18] [i_18]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_19 [i_18] [i_18] [i_18] [i_18]))))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [21] [i_18 + 4])))));
        var_29 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) var_9)), (min((var_1), (((/* implicit */unsigned long long int) arr_64 [7])))))) > (((/* implicit */unsigned long long int) ((int) arr_38 [i_18 - 3] [i_18 - 3] [14LL] [i_18 + 2] [i_18])))));
        arr_68 [i_18] [i_18] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_18 - 1])) ? (arr_27 [i_18] [(_Bool)1] [i_18] [i_18] [(_Bool)1] [i_18 + 2] [(_Bool)1]) : (arr_18 [i_18 - 3])))) ? (min((arr_18 [i_18 + 3]), (arr_9 [i_18 - 3] [i_18 - 3] [i_18 - 2]))) : (arr_18 [i_18 + 2]));
    }
    var_30 |= ((int) min((((/* implicit */long long int) min((((/* implicit */int) var_9)), (var_5)))), (((((/* implicit */_Bool) var_0)) ? (var_7) : (var_4)))));
    var_31 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_5)) : (var_1)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) : (max((var_6), (((/* implicit */unsigned int) var_0)))))));
}
