/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182039
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)19471)) == (((/* implicit */int) (signed char)-61))));
                            var_16 = ((/* implicit */signed char) min((var_16), (((signed char) ((signed char) arr_8 [i_0] [i_2] [i_0] [i_3 - 1])))));
                            arr_10 [i_0] [i_2] [i_1] [(unsigned short)6] [i_2] [i_3] |= ((signed char) ((((/* implicit */int) arr_0 [i_0] [i_2])) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(signed char)4] [i_1] [i_1])))))));
                        }
                    } 
                } 
                var_17 -= ((/* implicit */signed char) max((max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_0] [(signed char)2] [i_0] [i_1])), (arr_0 [i_0] [(signed char)6])))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [(unsigned short)10] [i_0] [i_0] [(unsigned short)10])) : (((((/* implicit */int) (signed char)-1)) % (((/* implicit */int) arr_0 [i_0] [(signed char)8]))))))));
                var_18 = arr_9 [i_1] [i_1] [i_0];
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
    {
        arr_13 [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) arr_5 [(signed char)14] [i_4] [(signed char)12])))))), ((~(((((/* implicit */int) var_3)) & (((/* implicit */int) arr_9 [i_4] [(signed char)8] [(signed char)8]))))))));
        var_19 = ((/* implicit */signed char) var_11);
        arr_14 [(signed char)2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((signed char)-7), ((signed char)-2))))));
    }
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_6 = 3; i_6 < 10; i_6 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                var_21 *= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-4))));
                var_22 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) (signed char)51)) - (50)))));
            }
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_12 [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_7 [i_5] [i_6] [i_5] [i_5])))))) + (((/* implicit */int) arr_15 [i_5])))))));
            var_24 = ((/* implicit */signed char) max((var_24), ((signed char)-6)));
        }
        for (unsigned short i_8 = 1; i_8 < 12; i_8 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) & (((/* implicit */int) arr_19 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1])))) + (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-100)), ((unsigned short)8))))));
            var_26 ^= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_1))) + (((/* implicit */int) arr_18 [i_8]))));
        }
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            var_27 -= ((/* implicit */unsigned short) ((signed char) arr_16 [i_5]));
            arr_25 [i_9] &= arr_15 [i_5];
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_11))));
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                arr_28 [i_5] [i_10] [(signed char)2] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) arr_8 [i_5] [i_9] [i_10] [i_10])) : (((/* implicit */int) (unsigned short)7411))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        {
                            arr_35 [i_11] [i_10] [i_10] [i_9] [i_11] = (signed char)100;
                            arr_36 [i_9] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_11] [i_11] [i_9] [i_11]))))) % (((/* implicit */int) var_5))));
                            var_29 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)55108))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_12 [i_9])))))));
                        }
                    } 
                } 
            }
        }
        var_31 = ((/* implicit */unsigned short) min((((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned short)65535)))), (((((/* implicit */int) var_0)) < (((/* implicit */int) (unsigned short)4810))))))), (((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_1 [i_5] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)70)))))))));
        var_32 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_5] [(signed char)5] [i_5] [(unsigned short)9] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_2 [i_5])))))));
    }
    for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
    {
        var_33 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)2381)) >> (((((/* implicit */int) (signed char)127)) - (110)))));
        /* LoopSeq 2 */
        for (signed char i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            var_34 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_13] [i_13] [(signed char)8])) ? (((/* implicit */int) (signed char)66)) : (((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) arr_40 [i_14] [i_14] [i_14])))))))));
            /* LoopNest 2 */
            for (signed char i_15 = 1; i_15 < 20; i_15 += 3) 
            {
                for (signed char i_16 = 0; i_16 < 21; i_16 += 4) 
                {
                    {
                        var_35 += ((/* implicit */signed char) ((((((/* implicit */int) (signed char)108)) > (((/* implicit */int) (signed char)49)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_16])) ? (((/* implicit */int) arr_45 [i_15 - 1] [(unsigned short)10] [i_15] [i_15] [i_15 - 1] [i_13])) : (((/* implicit */int) var_6)))))));
                        arr_48 [i_13] = arr_46 [i_14] [i_15 - 1] [i_13];
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((unsigned short) (unsigned short)65535))));
                    }
                } 
            } 
        }
        for (signed char i_17 = 4; i_17 < 18; i_17 += 3) 
        {
            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_47 [(signed char)14] [i_17] [i_17] [i_17] [i_17] [i_17])), ((unsigned short)57425)))) : (((/* implicit */int) (signed char)-45))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) (unsigned short)50123)) | (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-101)), (arr_42 [i_17]))))))));
            var_38 |= arr_49 [i_17] [i_17] [(unsigned short)20];
            /* LoopSeq 3 */
            for (unsigned short i_18 = 0; i_18 < 21; i_18 += 3) 
            {
                arr_54 [(signed char)16] [i_17] [(signed char)10] [i_17 + 2] |= ((/* implicit */unsigned short) (-((-((+(((/* implicit */int) arr_47 [i_13] [i_18] [i_18] [i_13] [i_17] [(unsigned short)15]))))))));
                /* LoopSeq 2 */
                for (signed char i_19 = 1; i_19 < 17; i_19 += 4) 
                {
                    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_57 [i_19] [(signed char)2] [(signed char)2] [(signed char)2] [(unsigned short)4] [i_18])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_13] [(signed char)12] [i_19])) ? (((/* implicit */int) arr_56 [(signed char)18] [(signed char)12] [i_18] [i_18] [i_19])) : (((/* implicit */int) arr_40 [i_19] [i_17] [i_18])))))))))))));
                    var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) arr_46 [i_17 - 4] [i_17 + 3] [i_17 + 3])) : (((/* implicit */int) arr_46 [i_17 + 3] [i_17 - 1] [i_17 - 2]))))) ? (((((/* implicit */_Bool) arr_46 [i_17 - 4] [i_17 - 1] [i_17 + 2])) ? (((/* implicit */int) arr_46 [i_17 - 1] [i_17 + 1] [i_17 - 3])) : (((/* implicit */int) (signed char)-4)))) : ((-(((/* implicit */int) (unsigned short)65535)))))))));
                    var_41 += ((/* implicit */unsigned short) max((arr_44 [i_19 - 1] [i_17] [i_17] [i_17 - 3]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_44 [i_19 - 1] [i_18] [i_18] [i_17 - 2])))))));
                    arr_58 [(signed char)14] |= ((/* implicit */unsigned short) arr_44 [i_13] [i_17 - 2] [i_18] [(signed char)4]);
                }
                /* vectorizable */
                for (signed char i_20 = 0; i_20 < 21; i_20 += 3) 
                {
                    var_42 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_59 [(unsigned short)16])) : (((/* implicit */int) arr_59 [(unsigned short)2]))));
                    var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) (+(((/* implicit */int) arr_39 [i_17 - 1] [(unsigned short)14] [i_17 + 1])))))));
                    var_44 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_41 [i_13] [i_17] [i_18]))));
                }
            }
            for (unsigned short i_21 = 0; i_21 < 21; i_21 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_22 = 0; i_22 < 21; i_22 += 3) 
                {
                    arr_67 [(signed char)1] [i_17 - 3] [(signed char)1] [i_17] = ((/* implicit */signed char) (+(((/* implicit */int) arr_59 [i_17]))));
                    arr_68 [i_17] [i_17] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_46 [i_17 - 3] [i_17] [i_17 - 3])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_47 [i_22] [i_21] [i_17] [i_13] [i_13] [i_13])))))));
                    var_45 = (unsigned short)65535;
                }
                var_46 = ((/* implicit */signed char) arr_42 [i_13]);
                /* LoopSeq 1 */
                for (unsigned short i_23 = 1; i_23 < 20; i_23 += 1) 
                {
                    var_47 ^= ((/* implicit */signed char) ((((/* implicit */int) max((min((var_13), (arr_37 [i_13] [i_23]))), ((signed char)-127)))) > (((((/* implicit */int) max((arr_59 [i_21]), (arr_66 [(signed char)18] [i_17] [(signed char)13] [i_23])))) / (((/* implicit */int) (unsigned short)7062))))));
                    var_48 += ((unsigned short) arr_46 [i_17 + 3] [i_17 - 3] [i_17 - 4]);
                }
            }
            for (signed char i_24 = 0; i_24 < 21; i_24 += 3) 
            {
                var_49 = ((/* implicit */signed char) (unsigned short)2692);
                var_50 = ((/* implicit */signed char) max((var_50), (((signed char) ((unsigned short) ((((/* implicit */int) arr_65 [(signed char)12] [i_17])) - (((/* implicit */int) arr_47 [(unsigned short)11] [i_13] [(signed char)19] [(signed char)16] [i_24] [i_24]))))))));
                arr_74 [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_17 + 3] [i_17 - 1] [i_17 - 3] [i_17 - 2])) ? (((/* implicit */int) arr_43 [i_17 - 1] [i_17 - 2] [i_17 - 2])) : (((/* implicit */int) var_14)))))));
                var_51 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_45 [i_13] [i_17] [i_24] [i_13] [i_13] [i_24]))))));
            }
        }
    }
}
