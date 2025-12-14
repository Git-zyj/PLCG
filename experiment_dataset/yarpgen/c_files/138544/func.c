/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138544
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
    for (short i_0 = 2; i_0 < 8; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0])) ? (((((/* implicit */int) var_18)) & (((/* implicit */int) var_17)))) : (((/* implicit */int) max((((/* implicit */short) (signed char)16)), (arr_3 [i_0 - 1]))))))) ? (((/* implicit */int) ((signed char) ((((((/* implicit */int) (signed char)-85)) + (2147483647))) << (((((/* implicit */int) (signed char)113)) - (113))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_7))))) : (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) arr_1 [(_Bool)1] [i_0]))))))));
        var_20 *= ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) (signed char)-17))), (((((((/* implicit */_Bool) arr_1 [(short)9] [(short)9])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (signed char)-111)))) | (((((/* implicit */int) (signed char)110)) * (((/* implicit */int) (_Bool)1))))))));
        arr_5 [i_0] = ((/* implicit */short) (_Bool)1);
    }
    for (short i_1 = 2; i_1 < 8; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] [(signed char)1] = ((/* implicit */_Bool) ((short) max(((-(((/* implicit */int) arr_7 [i_1])))), (((((/* implicit */_Bool) (short)-21845)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (short)32754)))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (_Bool)1))))) ? ((-((+(((/* implicit */int) (signed char)87)))))) : (((/* implicit */int) var_5))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_12 [i_2] = ((/* implicit */signed char) (_Bool)0);
            var_22 = ((/* implicit */_Bool) (short)32765);
            arr_13 [(short)7] [(short)7] [i_2] = ((/* implicit */_Bool) arr_9 [i_2 - 1]);
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) var_6)) * (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) max(((short)24272), (arr_11 [i_1 + 1])))) : (((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)26949)))))))))));
            var_24 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_3 [i_2 - 1])))), (((/* implicit */int) (signed char)110))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((var_15), (var_9))))));
        }
        for (short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    {
                        arr_23 [i_1] [i_3] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20421)) ? (((((((/* implicit */int) (short)-26588)) + (2147483647))) >> (((/* implicit */int) var_1)))) : (((/* implicit */int) max((((/* implicit */short) (signed char)-106)), (arr_3 [(signed char)6]))))))) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_4])) || (((/* implicit */_Bool) (signed char)30)))))));
                        var_25 = ((/* implicit */_Bool) max((((/* implicit */int) (!(arr_6 [i_1 - 2])))), (((arr_6 [i_1 - 2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_1 - 2]))))));
                        var_26 = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [(signed char)1]))))), (arr_1 [i_1 + 2] [i_1 + 2]))))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
            {
                var_27 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)8851))))) ? (((((/* implicit */_Bool) (short)-17020)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-82)))) : (((/* implicit */int) var_14)))))));
                arr_26 [i_3] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_25 [i_6] [i_6] [i_1 - 2] [i_1 - 2]))))));
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (arr_21 [(_Bool)1] [(_Bool)1] [i_3] [i_6] [i_6])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((_Bool) (short)20778)))))) ? (((((((/* implicit */_Bool) (signed char)97)) && (((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_17)))) : ((+(((/* implicit */int) var_18)))))) : (((/* implicit */int) arr_19 [i_3] [i_3]))));
                var_29 = ((/* implicit */signed char) max((var_29), (min((((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_1] [i_1] [i_3] [i_6])))))))), (((signed char) var_8))))));
                var_30 -= ((/* implicit */short) (signed char)-77);
            }
            for (signed char i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_8 = 1; i_8 < 7; i_8 += 4) 
                {
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (_Bool)1))));
                    var_32 = ((/* implicit */signed char) min((((((/* implicit */int) arr_28 [i_1 - 1] [i_3] [i_7])) / (((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 2])))), (((/* implicit */int) (!(arr_0 [i_1 + 2] [i_1 + 2]))))));
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_25 [i_8 + 2] [i_3] [(_Bool)0] [i_8]) ? (((/* implicit */int) arr_19 [i_3] [i_8 - 1])) : (((/* implicit */int) arr_30 [i_8 - 1] [i_1 - 2] [(_Bool)1] [i_1 + 1] [i_1]))))) ? (((/* implicit */int) arr_18 [i_3] [i_3] [i_7] [i_8])) : (min((((((/* implicit */int) arr_25 [i_1] [(signed char)1] [(short)6] [i_8])) ^ (((/* implicit */int) (signed char)-30)))), (((((/* implicit */_Bool) (short)-25)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)32767))))))));
                    arr_32 [i_8] [i_3] [i_3] [i_1] = (signed char)-107;
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_34 = ((/* implicit */_Bool) max((var_34), (((((/* implicit */int) (signed char)8)) > (((/* implicit */int) (signed char)-4))))));
                    arr_35 [(_Bool)1] [(_Bool)1] [i_3] [i_3] [i_7] [i_9] = ((((((/* implicit */_Bool) arr_15 [i_1] [i_7] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_7])))) >= (((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_31 [i_1 - 1] [i_1 - 1] [i_7] [i_9]))))));
                }
                var_35 -= ((/* implicit */_Bool) min((((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_2 [(signed char)1])))) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) arr_22 [i_1] [i_1 - 1])) ? (((var_17) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) arr_22 [i_1] [(short)0]))))))));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) min((((var_4) ? (((((/* implicit */_Bool) arr_1 [i_3] [i_7])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_6 [i_11])))) : (((/* implicit */int) var_18)))), (min((((/* implicit */int) (!((_Bool)0)))), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_3])))))))))));
                            var_37 &= arr_14 [i_11];
                        }
                    } 
                } 
            }
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                arr_44 [i_12 - 1] [i_3] [i_3] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_3] [(short)3] [i_1] [i_3] [i_12] [(_Bool)1])) ? ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (((-(((/* implicit */int) arr_16 [i_1])))) < (((/* implicit */int) (short)-9321)))))));
                arr_45 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_41 [i_3] [i_3] [i_1 - 2]), (arr_10 [i_12 - 1] [i_1 + 2])))) ? (((/* implicit */int) arr_10 [i_12 - 1] [i_1 - 1])) : (((/* implicit */int) ((_Bool) (short)-6794)))));
                var_38 += ((/* implicit */signed char) ((max((((/* implicit */int) ((_Bool) (signed char)70))), (((((((/* implicit */int) arr_36 [i_1] [i_3] [i_12 - 1] [i_1] [i_1] [i_12 - 1])) + (2147483647))) >> (((/* implicit */int) var_17)))))) & (((((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1 + 2])) ? (((/* implicit */int) ((_Bool) var_19))) : (((/* implicit */int) arr_22 [i_1] [i_12]))))));
                var_39 -= ((/* implicit */short) (-(((((/* implicit */_Bool) max(((signed char)(-127 - 1)), (((/* implicit */signed char) var_1))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) min(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)0)))))))));
            }
            for (signed char i_13 = 1; i_13 < 8; i_13 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    var_40 = arr_36 [(_Bool)1] [(_Bool)1] [i_3] [i_13 + 2] [i_13] [i_14];
                    var_41 = ((/* implicit */_Bool) min((var_41), ((((!(var_7))) || ((((!(((/* implicit */_Bool) (short)3)))) || (((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_28 [i_3] [i_1] [(_Bool)0])))))))))));
                }
                /* vectorizable */
                for (short i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    var_42 = ((/* implicit */_Bool) min((var_42), (((((((/* implicit */_Bool) (short)1654)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_13)))) >= ((((_Bool)0) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_3 [i_1]))))))));
                    arr_52 [i_3] [i_13] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_13 - 1])) ? (((/* implicit */int) arr_14 [i_13 - 1])) : (((/* implicit */int) var_1))));
                }
                var_43 = ((/* implicit */short) max((max((((var_10) ? (((/* implicit */int) arr_0 [i_3] [i_1])) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((_Bool) var_18))))), (((((/* implicit */_Bool) ((arr_25 [i_13 - 1] [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_15))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_1))))));
                var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) ((arr_16 [i_13 + 2]) && (((/* implicit */_Bool) arr_22 [i_1] [i_1]))))) : (((((/* implicit */int) arr_50 [i_1 + 2] [i_3] [i_1] [i_13])) * (((/* implicit */int) arr_47 [i_1] [(_Bool)1] [i_1] [i_1])))))))))));
                var_45 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_18 [i_3] [i_3] [i_1 + 2] [i_13 + 1])) != (((/* implicit */int) arr_18 [i_3] [i_3] [i_1 - 1] [i_3]))))), (((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_1 - 2] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)105))))));
            }
            arr_53 [i_1 - 1] [i_3] = var_18;
        }
        /* LoopNest 3 */
        for (signed char i_16 = 0; i_16 < 10; i_16 += 3) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (short i_18 = 2; i_18 < 8; i_18 += 3) 
                {
                    {
                        var_46 &= ((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_54 [i_1]))));
                        var_47 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_49 [i_1] [i_1 + 1] [i_16])))), (((/* implicit */int) ((short) (_Bool)1)))));
                        var_48 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_18 + 1] [i_18 + 2])) : (((/* implicit */int) arr_20 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_16] [i_1 + 1] [i_18 + 1]))))));
                    }
                } 
            } 
        } 
        var_49 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_60 [i_1 - 1] [i_1] [(_Bool)0] [i_1] [i_1 + 2]))))), ((-(((/* implicit */int) arr_55 [i_1] [i_1] [(signed char)8]))))));
    }
    var_50 = ((/* implicit */short) (-((-(((/* implicit */int) min((((/* implicit */signed char) var_17)), (var_6))))))));
    var_51 = var_19;
    var_52 = var_18;
}
