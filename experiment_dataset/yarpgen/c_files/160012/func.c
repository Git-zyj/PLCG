/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160012
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_16 |= ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */signed char) arr_1 [(unsigned short)12])), ((signed char)127)))) / (((/* implicit */int) (signed char)121))));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
        {
            var_17 -= ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)-121)), (max((((/* implicit */int) var_8)), (((((/* implicit */int) arr_4 [(signed char)4])) + (((/* implicit */int) arr_3 [(_Bool)0] [i_0]))))))));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3 - 1] [i_3 - 1] = ((/* implicit */signed char) max((max(((~(((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_3] [i_0])) < (((/* implicit */int) var_14))))))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((var_5) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (unsigned short)4))))));
                            var_18 = ((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) (unsigned short)56774)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_9)))), ((~(((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1] [i_2] [i_1] [i_0]))))))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (signed char)0))));
            var_20 += ((/* implicit */unsigned short) min(((~(((/* implicit */int) (signed char)-16)))), (((/* implicit */int) (!((_Bool)1))))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max(((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) arr_2 [(unsigned short)10] [i_1])) : (((/* implicit */int) (unsigned short)50003)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_10 [(signed char)2] [i_1] [i_1] [(_Bool)1])))))))))))));
        }
        for (signed char i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        {
                            var_22 ^= ((/* implicit */signed char) (+((-(((/* implicit */int) max((var_3), (arr_8 [i_5] [(_Bool)0] [i_5] [i_5]))))))));
                            arr_24 [(_Bool)1] [i_0] [(unsigned short)6] [i_7] [i_7] [i_8] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_16 [i_0])))) ? (((/* implicit */int) arr_16 [i_0])) : (((/* implicit */int) min((arr_16 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0])))))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_19 [i_5] [i_6] [i_8])))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_17 [(_Bool)1] [(unsigned short)4])), (var_12)))))))));
                            var_24 &= ((/* implicit */_Bool) (unsigned short)37200);
                            arr_25 [i_0] [(unsigned short)4] [i_0] [i_0] [i_0] [i_0] [(signed char)14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) arr_16 [i_0])))))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) max((((/* implicit */signed char) min((arr_7 [i_0] [i_5] [(_Bool)1] [i_0]), ((_Bool)1)))), (var_3))))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned short) arr_8 [i_0] [i_5] [(unsigned short)10] [(signed char)13]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
            {
                var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)67))))) ? ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) var_12))))));
                /* LoopSeq 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_27 = ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (unsigned short)65535)))));
                    var_28 ^= ((/* implicit */signed char) (~(((/* implicit */int) arr_11 [i_9] [i_9] [i_5] [i_5] [i_0] [i_9]))));
                    var_29 *= (signed char)50;
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_37 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */int) arr_12 [i_5])) : (((/* implicit */int) arr_0 [i_0] [i_5])))))));
                    var_30 -= ((/* implicit */signed char) ((((((var_9) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) arr_4 [i_9])))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) arr_29 [i_0] [(signed char)9])) <= (((/* implicit */int) arr_22 [i_0] [i_9] [i_0] [i_9] [i_0]))))) - (1)))));
                    var_31 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)4350)) ? (((/* implicit */int) (unsigned short)54258)) : (((/* implicit */int) (_Bool)1))))));
                    var_32 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5])) - (((/* implicit */int) arr_19 [i_9] [i_5] [i_5]))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_41 [i_0] [i_0] [(unsigned short)13] [(_Bool)1] [i_0] [i_12] = ((/* implicit */unsigned short) var_2);
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_12] [i_9] [i_9] [i_9])) | (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)108)))))))));
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_9] [i_5])) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) arr_20 [i_0] [i_9] [i_12] [i_13]))))) ? (((/* implicit */int) arr_28 [i_0] [i_9] [i_9])) : (((/* implicit */int) (_Bool)0)))))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
                    {
                        arr_47 [i_0] [i_0] [i_0] [i_9] [i_12] [(signed char)14] [i_14] = ((/* implicit */signed char) (!(((((/* implicit */int) var_11)) != (((/* implicit */int) var_11))))));
                        var_35 = ((/* implicit */signed char) (unsigned short)65535);
                    }
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_42 [(signed char)11] [i_5] [i_9] [i_12] [i_0] [i_0] [i_9])) ? (((/* implicit */int) arr_42 [(_Bool)1] [i_0] [i_9] [i_5] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_5]))));
                }
                arr_48 [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (_Bool)1))))));
                var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) var_10)) + (76)))))) ? ((~(((/* implicit */int) (unsigned short)4356)))) : (((/* implicit */int) arr_34 [(_Bool)1] [(_Bool)1] [i_0] [i_0] [(unsigned short)10]))));
            }
            for (signed char i_15 = 0; i_15 < 16; i_15 += 4) /* same iter space */
            {
                var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) min(((~(((/* implicit */int) arr_27 [i_15] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((/* implicit */int) (signed char)-15))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)40132)))) : (((/* implicit */int) arr_35 [i_0] [(_Bool)1] [i_15] [i_15])))))))));
                arr_51 [i_15] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_15])) ? (((/* implicit */int) arr_16 [i_15])) : (((/* implicit */int) arr_16 [i_15]))))) ? (((/* implicit */int) (unsigned short)56774)) : (max(((-(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) arr_12 [i_0]))))));
                arr_52 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)15115))))) ? (((/* implicit */int) min((arr_16 [i_0]), (((/* implicit */unsigned short) arr_38 [i_0] [i_5] [i_15] [i_15] [i_0] [i_0]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_38 [i_15] [i_15] [i_15] [i_15] [i_0] [i_15])), (arr_16 [i_0]))))));
            }
            arr_53 [i_0] [i_5] [i_5] = ((/* implicit */_Bool) arr_12 [i_0]);
        }
        for (signed char i_16 = 0; i_16 < 16; i_16 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (signed char)1)))))));
            arr_57 [i_0] = ((_Bool) (unsigned short)15292);
        }
        /* vectorizable */
        for (signed char i_17 = 0; i_17 < 16; i_17 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_64 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_23 [i_18] [i_17] [i_18] [i_18] [i_17] [i_17] [i_0])) : (((/* implicit */int) (unsigned short)43420))));
                /* LoopSeq 4 */
                for (unsigned short i_19 = 0; i_19 < 16; i_19 += 4) 
                {
                    var_40 = (unsigned short)0;
                    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)45270)))))));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_42 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_34 [i_17] [i_18] [i_17] [i_0] [i_0]))));
                    var_43 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (unsigned short)9377))));
                    arr_69 [i_0] [(signed char)1] [i_18] [(signed char)1] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [(signed char)11] [(signed char)11])) > (((/* implicit */int) arr_0 [i_0] [i_0])))))));
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)96))))) ? (((/* implicit */int) arr_54 [i_0] [i_18] [i_0])) : (((((/* implicit */_Bool) (unsigned short)4350)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-108))))));
                }
                for (unsigned short i_21 = 0; i_21 < 16; i_21 += 1) 
                {
                    var_45 &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_0] [i_17] [i_18] [i_21]))));
                    /* LoopSeq 3 */
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        var_46 -= ((/* implicit */signed char) arr_10 [i_0] [i_17] [i_18] [(signed char)8]);
                        arr_75 [i_0] [i_17] [i_0] [i_21] [i_22] [(unsigned short)4] [i_17] = ((/* implicit */_Bool) arr_70 [i_0]);
                    }
                    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) /* same iter space */
                    {
                        var_47 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39007)) << (((((/* implicit */int) (signed char)63)) - (49)))))) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) arr_30 [i_0] [(signed char)8] [(signed char)12] [(_Bool)1] [(unsigned short)6])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (_Bool)0))))));
                        var_48 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_0])) - (((/* implicit */int) (signed char)68))));
                        arr_78 [i_0] [i_17] [i_17] [i_0] = ((/* implicit */signed char) var_12);
                    }
                    for (signed char i_24 = 1; i_24 < 13; i_24 += 1) 
                    {
                        var_49 -= ((/* implicit */signed char) (-(((var_6) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)0))))));
                        var_50 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_76 [(signed char)8] [i_17] [(signed char)1] [i_21] [i_21] [i_21])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))) < (((/* implicit */int) var_14))));
                    }
                    arr_82 [i_0] [i_0] [i_0] [i_18] [i_18] [i_0] = ((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_7 [i_21] [i_17] [i_18] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                    var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) ((((/* implicit */int) arr_60 [(unsigned short)8] [i_17])) << (((((/* implicit */int) (signed char)-1)) + (16))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_25 = 2; i_25 < 14; i_25 += 1) /* same iter space */
                    {
                        var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65533))))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_27 [i_0] [i_18]))))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_71 [i_17] [i_17] [i_17]))))));
                        arr_85 [i_0] [(signed char)7] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_30 [i_25] [i_0] [i_25 + 2] [i_25 + 2] [i_25 - 2]))));
                        var_53 -= arr_55 [i_17] [(signed char)8] [i_21];
                    }
                    for (unsigned short i_26 = 2; i_26 < 14; i_26 += 1) /* same iter space */
                    {
                        var_54 = ((/* implicit */signed char) max((var_54), (((/* implicit */signed char) (~(((arr_20 [(signed char)2] [i_17] [i_17] [i_21]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))))));
                        var_55 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (_Bool)1)))));
                    }
                }
                for (signed char i_27 = 0; i_27 < 16; i_27 += 3) 
                {
                    var_56 ^= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_89 [(_Bool)1]))))));
                    var_57 = var_6;
                }
            }
            var_58 = ((/* implicit */signed char) max((var_58), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_60 [(_Bool)0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_60 [(unsigned short)6] [(unsigned short)6])))))));
            arr_93 [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_59 [i_17]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((arr_38 [(unsigned short)13] [(unsigned short)6] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (signed char)79))))));
        }
        /* LoopNest 2 */
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                {
                    var_59 -= ((/* implicit */_Bool) ((unsigned short) arr_12 [(_Bool)1]));
                    var_60 = ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_36 [(signed char)11] [i_28] [i_29])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (unsigned short)4350)))) : ((((_Bool)1) ? (((/* implicit */int) arr_54 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_50 [i_0] [(_Bool)1] [i_0]))))));
                }
            } 
        } 
    }
    for (unsigned short i_30 = 0; i_30 < 19; i_30 += 4) 
    {
        var_61 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_101 [i_30] [(signed char)7])) : (((/* implicit */int) arr_102 [(_Bool)1] [i_30]))))) ? (((/* implicit */int) ((_Bool) arr_101 [i_30] [(_Bool)1]))) : (((/* implicit */int) (!(var_11))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_102 [i_30] [i_30])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1)))))));
        var_62 = ((/* implicit */_Bool) max((var_62), (((/* implicit */_Bool) arr_101 [i_30] [i_30]))));
        var_63 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned short) (unsigned short)15))) ? (((arr_100 [i_30]) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (signed char)-111)))) : (((/* implicit */int) (unsigned short)32767)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61189)))))));
        var_64 = ((/* implicit */signed char) max((var_64), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_102 [i_30] [(_Bool)1])) ? (((/* implicit */int) arr_102 [i_30] [i_30])) : (((/* implicit */int) arr_100 [i_30])))) + (((/* implicit */int) (!(arr_100 [i_30])))))))));
    }
    var_65 = ((/* implicit */signed char) min((var_65), (((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))));
    var_66 = var_14;
}
