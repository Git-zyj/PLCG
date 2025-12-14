/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111747
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_5 [i_0] = max((-1485917000), (((/* implicit */int) (signed char)-71)));
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                var_10 = ((/* implicit */_Bool) -1504991269);
                var_11 *= ((/* implicit */signed char) ((int) ((arr_1 [i_1]) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1])))));
            }
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_3 [2LL] [(unsigned char)5] [i_0])) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) (_Bool)1)) : (var_4)))) ? (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) (~(var_4))))))));
                            arr_16 [i_3] [10] [10] [10] [14U] &= max(((-(var_3))), (((/* implicit */int) max((arr_4 [i_0] [i_1]), (var_7)))));
                            var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))));
                            var_14 ^= var_4;
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 56024259)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (unsigned char)166))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(arr_3 [i_0] [i_0] [i_0])))), (var_2)))) ? (((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */int) (signed char)109)), (1314045331))) : ((~(1648759829))))) : (((/* implicit */int) ((((/* implicit */unsigned int) max((var_5), (((/* implicit */int) (unsigned char)75))))) == (((((/* implicit */_Bool) var_1)) ? (arr_6 [i_0] [i_1] [0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_3 [i_0] [i_1] [i_3]))))));
            }
            for (signed char i_6 = 1; i_6 < 15; i_6 += 1) 
            {
                arr_22 [i_6 + 3] [i_0] [i_0] [(unsigned char)4] = ((/* implicit */unsigned char) min((min(((~(var_4))), (var_4))), ((-(arr_7 [4] [(_Bool)1] [i_0])))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 3; i_7 < 14; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */unsigned char) (!((((~(arr_15 [i_1] [i_7]))) < ((+(var_6)))))));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) var_0)), ((~(((((/* implicit */_Bool) var_3)) ? (var_3) : (var_5)))))));
                /* LoopSeq 1 */
                for (signed char i_9 = 2; i_9 < 15; i_9 += 1) 
                {
                    arr_32 [i_0] [i_0] = ((/* implicit */int) (~(arr_0 [7])));
                    var_18 ^= ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(var_2)))), (max((((/* implicit */long long int) arr_18 [i_6] [i_6 + 3] [i_1])), (var_1)))));
                    arr_33 [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
                    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_9])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [(signed char)2] [(signed char)2])) : (((/* implicit */int) var_0)))) : (arr_27 [8] [i_1] [i_6] [i_1] [i_9 - 2]))) < ((+(((/* implicit */int) (signed char)-15))))));
                    var_20 = (i_0 % 2 == 0) ? (((arr_20 [i_9] [12LL] [i_1] [12LL]) == (((max((((/* implicit */int) (signed char)39)), (arr_19 [i_0] [i_0] [i_0] [i_0]))) >> (((arr_7 [i_0] [i_9 + 1] [i_0]) + (1392957156))))))) : (((arr_20 [i_9] [12LL] [i_1] [12LL]) == (((max((((/* implicit */int) (signed char)39)), (arr_19 [i_0] [i_0] [i_0] [i_0]))) >> (((((arr_7 [i_0] [i_9 + 1] [i_0]) - (1392957156))) - (449295045)))))));
                }
            }
        }
        var_21 += ((/* implicit */signed char) var_3);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_11 = 1; i_11 < 17; i_11 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_12 = 2; i_12 < 15; i_12 += 1) 
                {
                    arr_40 [5LL] [5LL] [i_0] [i_12] = ((/* implicit */long long int) ((arr_15 [i_11 + 1] [i_11 + 1]) % (((((/* implicit */_Bool) arr_8 [i_0])) ? (var_3) : (((/* implicit */int) arr_21 [i_0]))))));
                    arr_41 [i_0] [12] [i_11 + 1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [(signed char)11]))))) <= ((-(28U)))));
                    arr_42 [i_10] [i_10] [i_10] [i_12] [i_0] &= (signed char)5;
                    var_22 = ((/* implicit */unsigned char) var_2);
                }
                /* LoopSeq 3 */
                for (long long int i_13 = 3; i_13 < 17; i_13 += 2) 
                {
                    arr_45 [i_0] = var_9;
                    arr_46 [i_0] [13] [i_10] [i_11] [i_0] [i_13] = ((/* implicit */_Bool) ((var_3) + (var_4)));
                    arr_47 [(unsigned char)13] [(unsigned char)13] [i_0] [i_10] [i_0] = ((/* implicit */long long int) arr_12 [i_11]);
                }
                for (int i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    arr_51 [i_0] = (+(((((/* implicit */_Bool) var_0)) ? (var_4) : (var_9))));
                    var_23 = ((/* implicit */int) var_7);
                }
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    arr_54 [i_0] [i_0] [i_11 - 1] [i_11 - 1] [i_15] = ((/* implicit */unsigned char) ((arr_0 [i_11 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0])))));
                    /* LoopSeq 1 */
                    for (int i_16 = 0; i_16 < 18; i_16 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) var_3);
                        var_25 = arr_57 [2] [2] [i_10] [i_10] [i_11 + 1] [i_15 - 1];
                        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [5U] [i_11])))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_17 = 4; i_17 < 15; i_17 += 3) 
                    {
                        arr_62 [i_0] [i_0] [i_10] [i_0] [i_17] [i_15] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                        var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */int) (signed char)-62)) / (((/* implicit */int) (signed char)48))))));
                        var_28 = ((/* implicit */unsigned char) var_0);
                        var_29 -= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)132))))) ^ (((/* implicit */int) var_0))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 18; i_18 += 4) 
                    {
                        var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_30 [i_15 - 1] [i_15] [i_15 - 1] [i_15] [i_15] [6U]))));
                        arr_67 [i_0] [i_0] [4] [i_0] [(signed char)2] [i_0] [4] = ((/* implicit */_Bool) (~(((-1624172061) ^ (var_4)))));
                    }
                    for (unsigned char i_19 = 2; i_19 < 17; i_19 += 1) 
                    {
                        arr_70 [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_59 [i_10] [i_10] [i_11 - 1] [i_10] [i_15 - 1] [i_10] [i_19 - 1]));
                        arr_71 [i_19] [i_19] [i_11] [i_0] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */int) var_7)))))));
                        arr_72 [16U] [i_10] [i_10] [i_15] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)160)) ^ (arr_50 [3LL] [3LL] [7U] [(_Bool)1]))) < (((((/* implicit */_Bool) -1667527205)) ? (((/* implicit */int) arr_58 [15U] [15U] [i_11] [15U] [i_15] [i_19] [i_19])) : (var_4)))));
                    }
                }
            }
            for (int i_20 = 3; i_20 < 15; i_20 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_21 = 1; i_21 < 16; i_21 += 1) 
                {
                    var_31 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_10] [i_10] [i_10] [i_21])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)71))))) ? (((var_9) * (((/* implicit */int) arr_1 [i_10])))) : (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */int) arr_1 [i_10])))));
                    /* LoopSeq 1 */
                    for (int i_22 = 0; i_22 < 18; i_22 += 2) 
                    {
                        arr_79 [i_0] [i_21] [i_20] [i_20] [i_10] [i_0] [i_0] = ((/* implicit */unsigned char) ((var_4) << (((((((/* implicit */_Bool) arr_43 [i_0] [17] [i_20])) ? (var_4) : (arr_53 [i_0] [8] [8] [i_21] [i_22]))) - (5214472)))));
                        arr_80 [i_0] [i_10] [i_20] [i_21] [15LL] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)69))));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_21 + 1] [i_20 + 1] [i_20])) && (((var_5) < (var_4)))));
                    }
                    arr_81 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_0))));
                }
                var_33 = ((/* implicit */int) arr_24 [i_20] [i_10] [8] [i_0]);
                arr_82 [i_0] [i_0] [i_20 - 2] [i_20] = arr_60 [i_0] [0] [i_0] [0] [i_0];
            }
            for (int i_23 = 1; i_23 < 17; i_23 += 1) 
            {
                arr_87 [i_23] [i_0] [i_23] = ((/* implicit */_Bool) ((((/* implicit */int) arr_76 [i_23 - 1] [i_0] [i_10] [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_76 [i_23] [i_23] [(unsigned char)16] [(unsigned char)16] [i_0] [i_23]))));
                arr_88 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_23 + 1] [i_23] [i_23])) ? (arr_85 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_23 - 1] [i_23] [(unsigned char)3] [i_10])))));
                arr_89 [7LL] [12] [12] [i_0] = ((/* implicit */unsigned char) ((arr_24 [i_23 - 1] [i_23 + 1] [i_23 - 1] [i_23 - 1]) - (arr_24 [i_23 + 1] [i_23 + 1] [i_23 - 1] [i_23 - 1])));
            }
            var_34 = ((/* implicit */_Bool) (~(arr_66 [i_0] [i_0] [i_0] [i_0] [i_0])));
            var_35 = ((/* implicit */long long int) (~(arr_38 [i_0] [i_10] [i_0] [i_10] [i_0])));
            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)228))) - (6847692271287744424LL))))));
        }
        for (unsigned int i_24 = 2; i_24 < 17; i_24 += 4) 
        {
            var_37 = ((/* implicit */_Bool) var_2);
            var_38 = ((/* implicit */signed char) min((max((arr_73 [i_0] [i_24] [i_24 - 1] [i_24 - 1]), (arr_73 [i_0] [i_0] [i_24 - 2] [i_0]))), (((/* implicit */unsigned int) arr_27 [i_0] [i_0] [i_0] [0] [14LL]))));
        }
        for (int i_25 = 1; i_25 < 15; i_25 += 1) 
        {
            var_39 *= ((/* implicit */_Bool) arr_63 [i_0] [i_25] [i_0]);
            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_25] [i_0] [i_0] [i_25 - 1])) ? (arr_44 [i_25] [i_0] [i_0] [i_25 - 1]) : (arr_44 [i_25] [i_0] [i_0] [i_25 + 1])))) || ((!(((/* implicit */_Bool) var_1))))));
            var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) min((max(((unsigned char)122), ((unsigned char)60))), (var_7)))) << (((/* implicit */int) min((var_8), (min(((unsigned char)211), (((/* implicit */unsigned char) arr_26 [3U] [i_0] [(unsigned char)2] [i_0] [i_0])))))))));
        }
        var_42 -= max((arr_8 [4]), (((/* implicit */unsigned char) arr_34 [(_Bool)1] [i_0])));
        var_43 = ((/* implicit */int) max((arr_58 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [11] [i_0]), (max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)39)))));
    }
    for (unsigned char i_26 = 1; i_26 < 15; i_26 += 4) 
    {
        var_44 = ((/* implicit */signed char) ((((-1624172063) + (2147483647))) << (((min((2438063508U), (((/* implicit */unsigned int) 1624172054)))) - (1624172054U)))));
        var_45 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_35 [i_26] [i_26])) ? (arr_93 [i_26]) : (((/* implicit */int) var_8)))))) < (((/* implicit */int) min((((var_5) <= (((/* implicit */int) var_0)))), ((!(((/* implicit */_Bool) var_8)))))))));
    }
    var_46 -= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)178))));
    var_47 &= ((int) ((((/* implicit */int) ((((/* implicit */int) var_0)) <= (var_9)))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (var_5)))));
    var_48 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
}
