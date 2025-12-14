/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135990
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
    var_12 = (~(((/* implicit */int) var_9)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (-(1077543703))))));
        var_14 = ((/* implicit */int) min((-9105667718339366482LL), ((~(3068114942573489273LL)))));
        var_15 = ((/* implicit */signed char) ((-3068114942573489273LL) / (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (4949795017050179697LL) : (((/* implicit */long long int) 1803556305)))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
        var_16 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) (+(-4949795017050179703LL)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */int) var_10);
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5807429208698602883LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-45))) : (3068114942573489273LL))))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_2] [i_2] [i_0] |= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1069547520)));
                            var_19 &= ((/* implicit */signed char) ((arr_4 [11LL]) ^ (((((/* implicit */long long int) arr_0 [i_0])) | (arr_12 [i_0] [i_1] [16] [i_2] [i_3] [i_4])))));
                            arr_14 [i_0] [i_1] [i_0] [18LL] [i_1] = ((/* implicit */unsigned char) (-(arr_9 [i_3] [i_3] [i_4 - 1] [i_4] [i_4 - 1])));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [18] = ((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1] [i_0])) ? (arr_4 [i_5 - 1]) : (((/* implicit */long long int) 1117976180)));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5])) || (((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5]))));
                            arr_20 [i_0] [i_1] [11LL] [i_2] [i_3] [i_3] [i_0] = ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_3] [i_5 - 1])) ? (arr_12 [i_1] [i_0] [i_2] [i_3] [i_5 - 1] [i_0]) : (arr_18 [(_Bool)1] [14LL] [14LL] [i_3] [i_5 - 1] [i_0]));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            var_21 = ((((/* implicit */_Bool) ((((arr_5 [i_0] [i_2] [i_6]) + (9223372036854775807LL))) >> (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3])) ? (var_6) : (570351023)))) : (((-3068114942573489273LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))))));
                            var_22 ^= ((/* implicit */long long int) (+(((((/* implicit */_Bool) 118195820)) ? (34735648) : (((/* implicit */int) var_7))))));
                            var_23 = ((/* implicit */_Bool) min((var_23), ((!(((/* implicit */_Bool) ((((arr_5 [i_0] [i_1] [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) var_9)) - (12))))))))));
                        }
                        for (int i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [i_0] [3] [i_0] = ((/* implicit */_Bool) (~(arr_22 [i_3] [i_2])));
                            var_24 = (~(((((/* implicit */_Bool) arr_22 [i_0] [i_0])) ? (1744581917) : (((/* implicit */int) var_7)))));
                            var_25 = ((_Bool) arr_23 [i_0] [i_3] [i_0]);
                            var_26 = ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0]);
                            var_27 |= (_Bool)0;
                        }
                        for (int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (570648728)))) || (((/* implicit */_Bool) ((var_10) ? (arr_23 [(_Bool)0] [i_2] [(unsigned char)13]) : (((/* implicit */int) arr_28 [(signed char)3] [(signed char)23] [i_2] [i_2] [13LL])))))));
                            var_28 ^= ((var_0) ? (((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */int) var_7)))) : (arr_25 [i_0] [i_0] [(_Bool)1] [i_2] [i_8] [i_2] [4]));
                            var_29 |= ((/* implicit */int) ((((((/* implicit */int) arr_24 [i_0] [i_1] [i_0] [i_3] [i_8])) % (arr_6 [(_Bool)0] [i_0] [i_1]))) >= (-2147483638)));
                        }
                        arr_31 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((var_11) + (2147483647))) >> (((/* implicit */int) arr_3 [i_0]))))));
                        var_30 ^= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_2] [14LL] [i_0] [i_1] [i_3]))))) : (((var_5) ? (var_6) : (((/* implicit */int) (signed char)-1)))));
                    }
                } 
            } 
        }
        for (int i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
        {
            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) min((arr_27 [i_0] [i_9] [i_9]), (arr_17 [i_9] [i_9] [i_9] [20] [i_0]))))));
            var_32 ^= ((/* implicit */int) max((-8828206213268384093LL), (((/* implicit */long long int) 131071))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
        {
            arr_36 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_35 [i_0] [(signed char)21]) : (((/* implicit */long long int) 0))))) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_10])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (1206522725) : (arr_2 [i_10])))) + ((~(arr_12 [(unsigned char)16] [i_10] [(unsigned char)22] [i_10] [(unsigned char)2] [i_0]))))))));
            /* LoopSeq 4 */
            for (unsigned char i_11 = 0; i_11 < 25; i_11 += 2) 
            {
                var_34 |= ((/* implicit */long long int) ((arr_2 [i_11]) | (((0) << (((((/* implicit */int) arr_21 [10] [i_10] [i_10] [i_10] [i_11] [10LL])) - (181)))))));
                /* LoopSeq 1 */
                for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        arr_44 [i_0] = ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_0] [i_10]))))) : (((/* implicit */int) arr_10 [i_0])));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) -266974667)) ? (1436752012) : (arr_17 [i_13] [i_13 + 1] [22] [i_13] [i_13])));
                    }
                    for (long long int i_14 = 2; i_14 < 22; i_14 += 3) 
                    {
                        var_36 = (!(((/* implicit */_Bool) arr_28 [i_12] [i_14] [i_14] [i_14] [i_14 + 3])));
                        arr_48 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_14 + 1] [i_14] [i_14] [i_14] [i_14] [i_14] [10])) ? ((~(arr_29 [20] [i_10] [14LL] [14] [i_12] [14] [i_14]))) : (((((/* implicit */_Bool) 1041177155)) ? (((/* implicit */int) arr_34 [i_11])) : (((/* implicit */int) (_Bool)1))))));
                        var_37 = (+(arr_5 [i_10] [i_10] [i_14 - 1]));
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((arr_25 [i_0] [i_0] [i_11] [i_14 + 1] [i_0] [i_12] [2]) & (((((/* implicit */int) (_Bool)1)) | (1646845584))))))));
                    }
                    var_39 = arr_8 [21] [(unsigned char)15] [i_11];
                    arr_49 [i_12] [4] [24] [i_12] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_41 [i_0] [(signed char)1] [(signed char)1] [i_10] [i_11] [(signed char)16])))) ? (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (0LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_0] [i_10] [i_11])) : (((/* implicit */int) var_10)))))));
                    var_40 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [19] [19] [i_11])) ? (arr_39 [i_12]) : (((/* implicit */int) arr_11 [i_0] [i_10] [i_10] [i_0] [i_10]))))) ? (arr_40 [i_11] [8LL] [21LL] [i_11] [(_Bool)1] [i_11]) : ((~(((/* implicit */int) var_2)))));
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    for (int i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) (-(-101773430))))));
                            var_42 = ((/* implicit */int) min((var_42), (((((/* implicit */int) (_Bool)1)) ^ (-969093761)))));
                        }
                    } 
                } 
            }
            for (long long int i_17 = 0; i_17 < 25; i_17 += 1) 
            {
                var_43 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -914493688)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (signed char)60))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))) : (arr_56 [i_17] [i_10] [i_0])));
                /* LoopSeq 1 */
                for (int i_18 = 2; i_18 < 24; i_18 += 3) 
                {
                    arr_61 [i_0] [19LL] [19LL] [10] = (-(((((/* implicit */_Bool) 1744581917)) ? (1431345407) : (var_8))));
                    arr_62 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -770751529)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139))) : (9223372036854775807LL)))) || (((/* implicit */_Bool) arr_33 [i_0] [i_18 - 2]))));
                }
                arr_63 [i_0] [i_0] [i_17] = ((/* implicit */long long int) (-(((/* implicit */int) ((1363411508) >= (((/* implicit */int) arr_60 [i_17] [i_0] [i_10] [i_0])))))));
            }
            for (int i_19 = 1; i_19 < 22; i_19 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_20 = 0; i_20 < 25; i_20 += 2) /* same iter space */
                {
                    var_44 ^= ((/* implicit */long long int) (!(((((/* implicit */_Bool) 1984)) && (((/* implicit */_Bool) arr_15 [i_20] [i_10] [i_0]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_72 [i_21] [i_10] [17LL] [i_20] [i_20] [i_0] = (!(((/* implicit */_Bool) 4949795017050179697LL)));
                        var_45 &= ((/* implicit */int) (-9223372036854775807LL - 1LL));
                        var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_20] [i_21] [i_21] [2LL] [i_10])) || (((/* implicit */_Bool) arr_40 [i_19 + 3] [i_19] [i_19] [i_19 + 1] [22] [i_19])))))));
                        arr_73 [i_0] [i_0] [i_10] [i_19] [i_20] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_57 [i_0] [(_Bool)1]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_53 [16] [i_19] [(unsigned char)8] [i_20] [i_21])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) - (-410396400)))) : (arr_53 [i_19] [i_19 + 1] [i_19 + 1] [i_19] [i_19])));
                    }
                }
                for (unsigned char i_22 = 0; i_22 < 25; i_22 += 2) /* same iter space */
                {
                    var_47 = ((/* implicit */long long int) ((((/* implicit */long long int) (+(-2046350547)))) >= ((-(-2097434194590837500LL)))));
                    var_48 = ((/* implicit */int) -9223372036854775797LL);
                    /* LoopSeq 3 */
                    for (int i_23 = 2; i_23 < 24; i_23 += 3) 
                    {
                        arr_80 [i_0] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_8)))) ? (-1405328619) : ((-(((/* implicit */int) var_2))))));
                        arr_81 [i_0] [i_10] [i_0] [i_22] = ((/* implicit */int) ((arr_41 [i_0] [i_10] [i_19] [i_10] [14] [i_22]) ^ (arr_41 [11LL] [i_10] [i_10] [11LL] [i_22] [i_10])));
                    }
                    for (long long int i_24 = 0; i_24 < 25; i_24 += 2) 
                    {
                        var_49 = ((arr_12 [i_19] [i_0] [i_19 + 2] [(unsigned char)23] [i_24] [i_19]) ^ (arr_12 [i_24] [i_0] [i_19 + 1] [(_Bool)0] [i_24] [i_22]));
                        var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_51 [i_19 + 1] [i_19] [i_19 + 3])))))));
                        var_51 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) -4949795017050179703LL)))))) != (arr_76 [i_19 + 3] [16LL] [i_19 + 3] [i_19 + 1] [i_19 + 3] [i_19 + 2])));
                    }
                    for (long long int i_25 = 1; i_25 < 22; i_25 += 2) 
                    {
                        arr_86 [i_10] [i_10] [i_19] [(signed char)12] [i_25] [i_10] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_83 [i_22] [i_19 + 3] [i_25] [i_25 + 3] [i_25 + 3]))));
                        arr_87 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_19 - 1] [i_25 + 2] [i_25 + 2] [i_25 + 3] [i_25 + 1]))) < (((((/* implicit */_Bool) -8559935204722836188LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-821815126853908833LL)))));
                        var_52 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_3 [i_19]))))) > ((-(var_3)))));
                    }
                    var_53 = ((/* implicit */long long int) (~(((/* implicit */int) arr_28 [i_22] [i_19] [i_19 + 1] [(_Bool)1] [i_19 + 2]))));
                }
                var_54 *= ((/* implicit */int) ((arr_57 [i_0] [i_10]) ? (((/* implicit */long long int) 0)) : (1399070691417897286LL)));
                var_55 = ((/* implicit */long long int) min((var_55), (((/* implicit */long long int) (-(((arr_77 [i_0] [i_0] [i_10] [i_19]) ? (((/* implicit */int) var_2)) : (arr_46 [i_0] [(signed char)18] [i_10] [18LL] [i_0] [i_10]))))))));
            }
            for (signed char i_26 = 3; i_26 < 24; i_26 += 3) 
            {
                var_56 = ((/* implicit */_Bool) (((~(var_11))) ^ (arr_42 [i_26] [i_26 - 3] [i_26] [i_26] [i_26 - 3] [i_26 - 3])));
                var_57 = ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)2)) || (((/* implicit */_Bool) -1))))) & (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)-108)))));
                var_58 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_53 [i_0] [i_26 - 1] [i_0] [i_10] [1]))));
                var_59 = ((((/* implicit */_Bool) arr_76 [i_26] [i_26 - 1] [i_26] [i_26] [i_26] [i_26 - 3])) ? (((/* implicit */int) arr_34 [i_26 - 1])) : ((+(var_1))));
            }
            var_60 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) 1)))) ? (((/* implicit */long long int) (+(var_4)))) : (arr_4 [4])));
            var_61 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_10] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-79))) : (arr_18 [9LL] [i_10] [9LL] [i_10] [i_10] [i_0])));
        }
    }
    /* vectorizable */
    for (int i_27 = 0; i_27 < 25; i_27 += 3) /* same iter space */
    {
        arr_94 [i_27] = ((/* implicit */long long int) (-(((/* implicit */int) arr_77 [i_27] [15] [i_27] [22]))));
        arr_95 [i_27] = (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))) | (821815126853908839LL))));
        var_62 = ((/* implicit */_Bool) var_4);
        /* LoopSeq 1 */
        for (int i_28 = 0; i_28 < 25; i_28 += 4) 
        {
            arr_99 [i_27] [i_28] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 72559528)) ? (((/* implicit */int) arr_57 [i_27] [i_27])) : (((/* implicit */int) arr_21 [i_28] [i_27] [i_28] [i_28] [i_28] [i_28]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [(signed char)8] [i_27] [0] [20LL] [(signed char)13])) || (((/* implicit */_Bool) arr_17 [i_27] [i_27] [i_27] [i_27] [i_28]))))) : (((((/* implicit */_Bool) -72559528)) ? (var_8) : (var_6)))));
            var_63 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (arr_52 [i_28] [21] [10LL] [i_27] [i_27] [21])));
        }
        var_64 = (~(-15193527));
    }
}
