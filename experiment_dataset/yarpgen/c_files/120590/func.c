/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120590
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [(_Bool)1] [i_2] = ((/* implicit */_Bool) max((max(((unsigned char)178), ((unsigned char)90))), (((/* implicit */unsigned char) min((arr_3 [i_0] [i_0 + 4] [i_1]), ((_Bool)1))))));
                    var_14 = min((max((((/* implicit */unsigned char) arr_4 [i_0 + 2])), (var_9))), (min((max(((unsigned char)122), (((/* implicit */unsigned char) arr_3 [i_0] [(_Bool)1] [i_1])))), (var_5))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_15 *= ((/* implicit */_Bool) min((max((var_3), (var_10))), (max(((unsigned char)73), ((unsigned char)96)))));
                            arr_14 [(_Bool)1] [i_2] [i_1] [i_4] = max((min((arr_13 [i_0 + 4] [i_3 + 2] [i_3 + 1] [i_4 + 1] [i_1]), (((/* implicit */unsigned char) (_Bool)0)))), (min((var_4), (min((arr_5 [i_0] [i_1] [(unsigned char)5]), (((/* implicit */unsigned char) arr_3 [i_1] [i_2] [i_1])))))));
                            arr_15 [i_1] = min((((/* implicit */unsigned char) min((arr_4 [i_0 - 1]), ((_Bool)1)))), (max((((/* implicit */unsigned char) arr_4 [i_0])), ((unsigned char)183))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            arr_18 [i_0] [(unsigned char)0] [(unsigned char)2] [i_1] = min((min((var_7), (arr_16 [i_0 + 3] [(unsigned char)11] [i_0] [i_3 + 2] [i_1] [(unsigned char)5]))), (min((arr_9 [i_0] [i_0] [i_2] [i_3] [i_5] [i_5]), (var_8))));
                            var_16 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned char) var_13)), (var_7))), (((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)1))))));
                            var_17 += min((max(((unsigned char)169), (arr_12 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 2]))), (max(((unsigned char)220), (var_6))));
                            var_18 ^= min(((unsigned char)44), ((unsigned char)82));
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_19 = max((max((min((var_7), (var_10))), (min((arr_5 [i_0 + 4] [i_1] [i_6]), (((/* implicit */unsigned char) var_13)))))), (max((((/* implicit */unsigned char) (_Bool)0)), (var_12))));
                            var_20 = min((max((((/* implicit */unsigned char) (_Bool)1)), (arr_10 [i_1] [i_0] [i_0 + 1] [i_1]))), (max((arr_10 [i_1] [i_3] [i_1] [i_1]), (var_10))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_0] [i_7] [i_1] = min((max((var_9), (((/* implicit */unsigned char) arr_8 [i_0] [(unsigned char)7] [i_2] [i_3] [i_7])))), (min((var_10), (((/* implicit */unsigned char) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3] [i_0 + 1])))));
                            var_21 = max((min((var_7), ((unsigned char)100))), (max((((/* implicit */unsigned char) (_Bool)0)), (var_8))));
                            arr_25 [i_0] [i_1] [i_1] [(unsigned char)2] [i_7] = max((max((arr_10 [i_0 - 1] [i_0] [i_0 + 2] [i_1]), (var_6))), (((/* implicit */unsigned char) max((var_13), ((_Bool)1)))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_22 = min((min((max((arr_13 [i_1] [i_3] [i_2] [i_1] [i_1]), ((unsigned char)220))), (max(((unsigned char)64), (((/* implicit */unsigned char) (_Bool)1)))))), (max((((/* implicit */unsigned char) (_Bool)1)), (arr_10 [i_0] [i_0 + 3] [i_0] [i_1]))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (min((min((var_7), (arr_27 [i_0 - 1] [i_0] [(unsigned char)10] [i_1] [i_2] [i_3 + 2] [i_8]))), (max((arr_27 [i_0 + 4] [i_0 + 4] [(unsigned char)14] [i_0] [i_0 + 4] [i_0 + 1] [i_0]), (arr_27 [i_0 + 4] [i_1] [(unsigned char)10] [i_8] [i_8] [i_8] [i_2])))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_24 *= min((max((arr_27 [i_0] [i_0 + 4] [(_Bool)1] [i_3 - 3] [i_3] [i_3] [i_3]), (var_6))), (((/* implicit */unsigned char) min((var_2), ((_Bool)1)))));
                            var_25 = min((max((arr_26 [i_0 + 1] [i_1] [i_2] [i_3] [i_2] [i_3]), (arr_26 [i_0 + 1] [i_1] [i_2] [(_Bool)0] [i_0 + 2] [(unsigned char)6]))), (min(((unsigned char)245), (arr_26 [i_0 + 4] [i_1] [i_0] [i_3 - 3] [i_3 - 3] [i_3 - 3]))));
                            arr_30 [i_0 + 4] [i_1] [i_1] [i_3] [i_1] [i_1] = max((max((var_10), (arr_16 [i_3 - 2] [i_3] [i_3] [i_3] [i_1] [(unsigned char)7]))), (max((((/* implicit */unsigned char) (_Bool)1)), (var_9))));
                            var_26 = max((min(((unsigned char)44), ((unsigned char)198))), (max((var_6), ((unsigned char)47))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            arr_34 [i_1] [i_1] [i_1] = min((max((((/* implicit */unsigned char) arr_3 [i_0 + 1] [i_1] [i_1])), (var_5))), (((/* implicit */unsigned char) min((var_13), ((_Bool)1)))));
                            var_27 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)0))), (min((min((arr_17 [i_3]), (var_5))), (max((arr_10 [i_0] [i_2] [i_3] [i_1]), (var_12)))))));
                            arr_35 [i_1] [(unsigned char)14] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)1)))), (min((arr_9 [i_0] [i_0] [i_0 + 2] [i_0 + 3] [i_3 - 3] [i_3 - 2]), (((/* implicit */unsigned char) var_13))))));
                        }
                        for (unsigned char i_11 = 3; i_11 < 14; i_11 += 1) 
                        {
                            var_28 -= ((/* implicit */_Bool) max((max((var_7), (arr_13 [i_0 + 1] [i_3 + 1] [i_3 - 2] [i_11 - 3] [(unsigned char)2]))), (min((((/* implicit */unsigned char) var_2)), (arr_13 [i_0 + 3] [i_3 + 2] [i_3 - 2] [i_11 + 1] [(_Bool)1])))));
                            arr_38 [i_0] [i_1] [i_0] [(unsigned char)6] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned char) (_Bool)0)), (var_0))), (max((min(((unsigned char)0), (arr_9 [i_0] [(unsigned char)15] [i_0] [i_0 + 3] [i_0] [(_Bool)1]))), (arr_13 [i_1] [(unsigned char)11] [i_0 + 1] [(unsigned char)4] [i_1])))));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_12 = 1; i_12 < 15; i_12 += 2) 
                        {
                            arr_43 [(unsigned char)1] [i_1] [(_Bool)1] [i_2] [(_Bool)1] [i_12] [i_1] = (unsigned char)139;
                            var_29 *= (unsigned char)15;
                            var_30 = ((/* implicit */_Bool) (unsigned char)231);
                        }
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) /* same iter space */
                        {
                            var_31 ^= (unsigned char)2;
                            var_32 = (unsigned char)124;
                            arr_47 [i_13] [i_13] |= (unsigned char)20;
                            arr_48 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) (unsigned char)222);
                            arr_49 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (unsigned char)24;
                        }
                        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 2) /* same iter space */
                        {
                            arr_52 [i_1] [i_1] [i_2] [i_2] [i_14] = max((min(((unsigned char)29), (((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)1)))))), (min((var_10), ((unsigned char)63))));
                            arr_53 [i_14] [i_1] [i_3] [(_Bool)1] |= max((max(((unsigned char)176), ((unsigned char)216))), (max((((/* implicit */unsigned char) (_Bool)1)), (arr_19 [i_14] [i_1]))));
                        }
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned char) min((var_33), (min((max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)100))), (min(((unsigned char)36), (((/* implicit */unsigned char) (_Bool)1))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_34 = ((/* implicit */_Bool) (unsigned char)166);
                            arr_60 [i_0] [i_1] [i_2] [i_1] [i_16] [(_Bool)1] = (_Bool)1;
                        }
                        for (unsigned char i_17 = 2; i_17 < 14; i_17 += 3) 
                        {
                            var_35 = ((/* implicit */_Bool) max((min(((unsigned char)25), ((unsigned char)230))), (max((var_7), (((/* implicit */unsigned char) (_Bool)1))))));
                            var_36 = ((/* implicit */_Bool) min((max(((unsigned char)47), (((/* implicit */unsigned char) (_Bool)1)))), ((unsigned char)161)));
                            arr_63 [(unsigned char)0] [i_1] [i_1] [(_Bool)1] [i_1] = max((min((var_8), ((unsigned char)140))), (min(((unsigned char)82), (((/* implicit */unsigned char) var_13)))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 4; i_18 < 14; i_18 += 4) 
                        {
                            arr_67 [i_0] [i_1] [i_1] [i_2] [i_1] [i_0] [i_0] = min((((/* implicit */unsigned char) max((var_2), ((_Bool)1)))), (min((max(((unsigned char)24), (arr_22 [i_0] [i_0] [i_1] [i_18 - 2]))), (max((((/* implicit */unsigned char) var_2)), ((unsigned char)143))))));
                            var_37 = ((/* implicit */unsigned char) min((var_37), (max((min((((/* implicit */unsigned char) (_Bool)1)), (min((var_7), (((/* implicit */unsigned char) var_2)))))), (max((min(((unsigned char)255), ((unsigned char)74))), (arr_64 [i_0] [i_0 + 1] [i_18])))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */_Bool) var_3);
}
