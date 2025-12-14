/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132046
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) min((max((var_7), (((/* implicit */unsigned int) var_0)))), (max((min((var_8), (var_3))), (((/* implicit */unsigned int) ((_Bool) var_9))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_3 [i_0] [i_0])) << (((/* implicit */int) arr_1 [i_1]))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 4; i_2 < 11; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                        {
                            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (3218584866U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(_Bool)1] [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_4] [i_4] [i_3]))))) : (((/* implicit */int) ((_Bool) (_Bool)1))))))));
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((3218584870U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106)))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-107))))));
                            arr_14 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_1 [i_2 - 2]))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_4))));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_17 [8U] [i_1] [i_2] [i_3] [i_3] [i_5] [i_5])) != (((/* implicit */int) (signed char)106))))))))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((int) (_Bool)1)))));
                            arr_18 [i_0] [i_1] [i_5] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1076382433U)) ? (((/* implicit */int) arr_10 [i_5])) : (((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) ((signed char) arr_15 [i_0] [i_0] [i_0] [i_3] [i_0])))));
                        }
                        var_18 = ((/* implicit */_Bool) min((var_18), (((3273176480U) > (((/* implicit */unsigned int) ((int) var_2)))))));
                    }
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_6])) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) 903834408)), (4294967295U)))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)(-127 - 1))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_1])))))) : (((/* implicit */int) ((signed char) ((var_10) ? (3218584855U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
                        var_20 = ((1076382433U) * (((/* implicit */unsigned int) ((int) (_Bool)0))));
                    }
                    arr_21 [i_0] [i_0] = ((/* implicit */signed char) max((((int) (+(((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_0] [i_0]))))), (((/* implicit */int) max((((_Bool) var_10)), ((_Bool)0))))));
                    /* LoopSeq 4 */
                    for (int i_7 = 1; i_7 < 9; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                            var_22 = ((/* implicit */signed char) max((((arr_16 [i_8] [i_2] [i_2] [i_1] [i_0]) ? (arr_12 [i_2 + 1] [i_2] [i_2 + 1] [i_7 - 1] [i_7 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))))), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_0] [i_8]))) : (arr_12 [i_0] [i_0] [i_2] [i_0] [i_0])))))));
                            var_23 = (!(((/* implicit */_Bool) ((unsigned int) arr_13 [i_2 + 1] [i_7] [i_2 + 1] [i_7] [i_2 + 1]))));
                        }
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            var_24 += (_Bool)1;
                            var_25 = ((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)-102)))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_7] [i_0]))) : (var_8)))))))));
                            arr_31 [i_0] [i_7] [i_2] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) ((signed char) var_10))) << (((1076382418U) - (1076382408U))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) -553587131))));
                            var_27 = ((/* implicit */unsigned int) ((signed char) ((((int) (signed char)20)) == ((((_Bool)1) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_7] [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        }
                        var_28 |= ((/* implicit */unsigned int) arr_0 [i_0]);
                        var_29 = ((/* implicit */signed char) arr_20 [i_7]);
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            var_30 *= ((_Bool) 4294967283U);
                            arr_36 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_11] [i_2] [i_10] [i_10] [i_11] [i_11] [i_11])) ? (1699926576) : (((/* implicit */int) (_Bool)1))));
                            arr_37 [i_11] [i_2] [i_10] [i_11] &= (!(((((/* implicit */int) (_Bool)1)) < (arr_30 [i_0] [i_0] [i_0] [i_11]))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_42 [i_0] [i_10] [i_0] [i_12] = ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (1076382417U)));
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0] [i_2] [i_0] [(signed char)0])) ? ((-(((/* implicit */int) arr_6 [i_12] [i_12] [i_2])))) : (((/* implicit */int) arr_33 [(signed char)0] [i_2 + 1] [i_2 - 2] [i_2] [i_2 - 2])))))));
                            arr_43 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1076382418U)) ? (((/* implicit */int) (signed char)-91)) : (-1162911023)))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_12]) == (-1096363724)))))));
                            arr_44 [i_1] [i_1] [i_10] [i_1] = ((/* implicit */unsigned int) (((-2147483647 - 1)) & (arr_30 [i_2 - 1] [i_10] [i_10] [i_10])));
                            arr_45 [i_10] [i_10] = ((/* implicit */signed char) ((arr_5 [i_2 - 2] [i_2 - 2] [i_2 - 4]) | (arr_5 [i_2 - 3] [i_2 - 3] [i_2 - 2])));
                        }
                        for (signed char i_13 = 2; i_13 < 9; i_13 += 2) 
                        {
                            arr_48 [i_0] [i_1] [i_1] [i_0] [i_10] = ((/* implicit */_Bool) ((unsigned int) 16U));
                            arr_49 [i_0] [i_0] [i_10] [i_10] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((int) (signed char)-6)))));
                        }
                    }
                    for (int i_14 = 3; i_14 < 8; i_14 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */signed char) ((arr_30 [i_0] [i_2] [i_2] [i_14]) < (-800543969)));
                        arr_54 [i_14] [i_14] [i_14] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((arr_13 [i_0] [i_0] [i_2] [i_14] [i_14]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)90))))) >= (max((arr_34 [i_0] [i_1] [i_14] [i_14 + 1] [i_14] [i_14] [i_1]), (arr_34 [i_0] [i_0] [i_2] [i_14 + 3] [i_2] [i_0] [i_0])))));
                        var_34 = ((/* implicit */_Bool) max((max((((unsigned int) 1096363711)), (((/* implicit */unsigned int) min((arr_7 [i_0] [i_2] [i_0] [i_14]), (((/* implicit */int) arr_35 [i_0] [i_1] [i_14] [i_2] [i_0]))))))), (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_1]))));
                        /* LoopSeq 1 */
                        for (int i_15 = 0; i_15 < 12; i_15 += 4) 
                        {
                            arr_58 [i_14] = ((/* implicit */int) min((((/* implicit */unsigned int) var_9)), (((2874280012U) * (((/* implicit */unsigned int) ((int) arr_19 [i_14])))))));
                            arr_59 [i_14] [i_14] [i_14] [i_14] [i_14] = (i_14 % 2 == 0) ? (((/* implicit */int) (((-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3))))) >> ((((((((_Bool)1) ? (3376327606U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) + (((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [i_14] [i_14] [i_2] [i_1] [i_14]))))))) - (3376327645U)))))) : (((/* implicit */int) (((-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3))))) >> ((((((((((_Bool)1) ? (3376327606U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) + (((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [i_14] [i_14] [i_2] [i_1] [i_14]))))))) - (3376327645U))) - (4294967276U))))));
                        }
                    }
                    for (int i_16 = 3; i_16 < 8; i_16 += 1) /* same iter space */
                    {
                        arr_62 [i_16] [i_2] [i_1] [i_0] [i_0] = arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_16];
                        /* LoopSeq 2 */
                        for (signed char i_17 = 1; i_17 < 10; i_17 += 2) 
                        {
                            arr_65 [i_0] [i_1] [i_0] [i_16] [i_17] = ((/* implicit */_Bool) 1U);
                            arr_66 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (((((0) < (((/* implicit */int) (signed char)-1)))) ? (((/* implicit */int) ((_Bool) 1U))) : (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) var_7))))))) : (-17)));
                        }
                        for (unsigned int i_18 = 1; i_18 < 9; i_18 += 4) 
                        {
                            var_35 -= ((/* implicit */signed char) ((_Bool) var_10));
                            arr_69 [i_0] [i_1] [i_2] [i_16] [i_1] = ((/* implicit */_Bool) max((min((arr_4 [i_1] [i_2 - 4] [i_18]), (arr_4 [i_16 - 1] [i_2 + 1] [i_0]))), (((/* implicit */unsigned int) ((_Bool) (_Bool)1)))));
                            var_36 *= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_9 [i_2 - 4] [i_16 - 2] [i_18 - 1])) ? (((/* implicit */unsigned int) arr_9 [i_2 - 1] [i_16 + 2] [i_18 + 1])) : (4294967274U))));
                        }
                    }
                }
            }
        } 
    } 
    var_37 |= min((((/* implicit */int) var_1)), (var_9));
}
