/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111276
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_5)), (min((min((((/* implicit */unsigned long long int) var_9)), (var_10))), (((/* implicit */unsigned long long int) var_7)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_12 -= ((/* implicit */unsigned long long int) (!(arr_3 [i_0])));
            arr_5 [i_0] [i_0] [(signed char)9] = ((/* implicit */unsigned char) arr_4 [i_0]);
            arr_6 [i_0] = ((/* implicit */short) (+(arr_1 [i_0] [i_0])));
        }
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_0] [i_2]), (arr_7 [i_0] [i_0] [i_0])))), (min((max((((/* implicit */unsigned long long int) arr_9 [i_0])), (arr_4 [i_0]))), (((/* implicit */unsigned long long int) (~(arr_10 [i_0]))))))));
            var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_8 [i_0] [i_0] [i_0]), (arr_8 [i_2] [i_0] [i_0]))))));
            var_15 ^= ((/* implicit */signed char) min((((/* implicit */int) max((arr_9 [i_0]), (arr_9 [i_0])))), ((+(((/* implicit */int) arr_9 [i_0]))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
        {
            arr_13 [7LL] [i_0] = ((/* implicit */_Bool) min((max((arr_0 [i_0]), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3] [i_0]))));
            /* LoopNest 2 */
            for (signed char i_4 = 1; i_4 < 13; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 3) 
                {
                    {
                        var_16 = ((/* implicit */long long int) arr_1 [i_3] [i_3]);
                        arr_19 [i_4] [i_3] [i_4] [i_3] = min((((((/* implicit */int) arr_14 [i_4] [i_5] [i_5 - 1] [i_4])) % (((/* implicit */int) arr_14 [i_4] [i_4 - 1] [i_4 - 1] [i_4])))), ((+(((/* implicit */int) arr_14 [i_4] [i_4 - 1] [i_5 - 1] [i_4])))));
                        var_17 *= ((/* implicit */_Bool) max((max((min((arr_16 [i_0]), (((/* implicit */long long int) arr_8 [i_5 + 1] [i_4 - 1] [i_3])))), (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_0] [i_3] [i_4] [i_5])) + (((/* implicit */int) arr_18 [i_0] [i_3] [i_4] [i_3]))))))), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
                        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_12 [i_4 + 1]), (((((/* implicit */int) arr_12 [i_0])) == (((/* implicit */int) arr_12 [i_3]))))))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_4 - 1])) && (((/* implicit */_Bool) min((arr_16 [i_0]), (((/* implicit */long long int) arr_18 [i_3] [(signed char)2] [(signed char)2] [i_5]))))))))));
                        var_19 ^= ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_3]);
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) arr_12 [1])), (arr_18 [i_3] [i_3] [i_3] [i_0])))) << (((((/* implicit */int) arr_18 [i_0] [i_3] [i_3] [i_3])) - (13075)))))) - (max((6887901048056557857ULL), (((/* implicit */unsigned long long int) -6589999914989956011LL)))))))));
            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((2993135448475160043ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))), (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_3] [i_3])) % (((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_3]))))), (min((arr_17 [i_0] [i_0] [i_3] [i_3]), (arr_10 [i_3])))))));
        }
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        arr_23 [i_6 - 1] = ((/* implicit */unsigned short) min((min((arr_21 [i_6 - 1]), (((/* implicit */unsigned int) arr_22 [i_6 - 1])))), (((/* implicit */unsigned int) max((arr_22 [i_6 - 1]), (arr_22 [i_6 - 1]))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((arr_21 [i_6]), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)26334))))))))));
        arr_24 [i_6 - 1] [i_6 - 1] = ((/* implicit */signed char) min((min((((/* implicit */int) ((arr_21 [i_6]) >= (arr_21 [i_6])))), (arr_22 [i_6]))), (arr_22 [i_6])));
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_22 = ((/* implicit */long long int) min((min((arr_26 [i_7 - 1] [i_7 - 1]), (arr_26 [i_7 - 1] [i_7]))), (arr_26 [i_7 - 1] [i_7])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    {
                        arr_38 [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) arr_25 [i_7 - 1] [i_8]);
                        arr_39 [i_7] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
                    }
                } 
            } 
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (+(((/* implicit */int) arr_31 [i_7 - 1] [i_7 - 1])))))));
            var_24 ^= ((/* implicit */short) (~(arr_33 [i_7 - 1] [i_7 - 1] [i_7 - 1])));
            arr_40 [i_7] [i_8] = ((/* implicit */int) (-(arr_25 [i_7 - 1] [i_7])));
            arr_41 [i_7] &= ((/* implicit */unsigned int) ((((arr_28 [i_7 - 1] [i_8]) + (2147483647))) >> (((/* implicit */int) arr_27 [(short)7]))));
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                var_25 = ((/* implicit */short) (~(arr_33 [i_12] [i_12] [i_7 - 1])));
                var_26 = ((/* implicit */int) (+(arr_34 [i_7] [i_7] [i_7] [i_7] [i_7 - 1] [i_7])));
                var_27 = ((/* implicit */_Bool) arr_31 [(unsigned short)18] [i_12]);
            }
            var_28 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_7] [i_11] [i_7 - 1])) && (((/* implicit */_Bool) arr_33 [i_7] [i_11] [i_7 - 1]))));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 1; i_13 < 23; i_13 += 1) 
            {
                for (signed char i_14 = 2; i_14 < 24; i_14 += 1) 
                {
                    {
                        arr_52 [i_11] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_45 [i_13] [i_13]))));
                        arr_53 [i_13] = ((/* implicit */unsigned long long int) ((((arr_30 [i_7] [i_7 - 1] [i_7 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_11]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_13])))))));
                        arr_54 [i_14] [i_13] [i_13] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) arr_44 [i_7 - 1] [i_13] [i_7 - 1] [(unsigned short)13])) >= (arr_28 [i_7 - 1] [17])));
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 0; i_15 < 25; i_15 += 3) 
                        {
                            var_29 = (i_13 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_13] [i_13 + 1] [i_13] [i_13 + 1]))) % (((arr_30 [i_7 - 1] [i_7] [i_7 - 1]) << (((arr_50 [i_13]) - (287693946U)))))))) : (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_13] [i_13 + 1] [i_13] [i_13 + 1]))) % (((arr_30 [i_7 - 1] [i_7] [i_7 - 1]) << (((((arr_50 [i_13]) - (287693946U))) - (1597718638U))))))));
                            arr_57 [i_13] = (~(arr_48 [i_7 - 1] [i_13]));
                            var_30 = ((/* implicit */unsigned long long int) arr_35 [i_7] [i_7] [i_7 - 1] [i_7 - 1]);
                            arr_58 [i_7] [i_13] [i_7 - 1] [(signed char)2] [i_7] = ((/* implicit */signed char) arr_56 [i_7] [(unsigned short)13] [i_7] [i_7]);
                            arr_59 [i_7 - 1] [i_11] [i_13 - 1] [i_11] [i_15] [i_13] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_44 [i_15] [i_13] [(signed char)21] [i_14 - 2]))))));
                        }
                    }
                } 
            } 
        }
        for (signed char i_16 = 0; i_16 < 25; i_16 += 3) 
        {
            var_31 = max((((/* implicit */long long int) arr_33 [i_7 - 1] [i_7] [i_7])), (max((((/* implicit */long long int) max((arr_26 [i_7 - 1] [i_16]), (arr_46 [i_7])))), (max((arr_34 [i_7] [i_7] [i_7] [i_7] [i_7 - 1] [i_7 - 1]), (((/* implicit */long long int) arr_35 [i_7 - 1] [i_7] [i_7] [i_7])))))));
            var_32 += ((/* implicit */long long int) min((max((arr_42 [i_7 - 1]), (arr_42 [i_7 - 1]))), (((/* implicit */unsigned int) (~(arr_28 [i_7 - 1] [i_7 - 1]))))));
            arr_62 [i_7] [i_7] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_55 [(signed char)10] [i_7] [i_7] [i_16] [i_16] [(unsigned short)19] [i_16])), (arr_34 [i_7] [i_16] [i_7] [i_7 - 1] [i_16] [(_Bool)1])))), (min((((/* implicit */unsigned long long int) arr_55 [i_7] [i_7] [i_7 - 1] [2U] [i_16] [i_16] [i_16])), (arr_56 [i_7] [i_7 - 1] [i_7] [i_7 - 1])))))));
            arr_63 [i_7] = ((/* implicit */int) min((arr_25 [i_7 - 1] [i_7 - 1]), (max((((/* implicit */unsigned int) arr_36 [i_7 - 1] [i_16] [i_7 - 1])), (arr_48 [i_7] [(_Bool)1])))));
        }
    }
    var_33 = ((/* implicit */int) min((min((min((var_10), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((var_0) | (((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) min((min((var_3), (var_1))), (((var_4) && (var_4))))))));
}
