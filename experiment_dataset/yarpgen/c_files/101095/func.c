/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101095
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 175219568)) ? (((/* implicit */int) (signed char)7)) : (536870912))), (var_3)))) ? (((((/* implicit */_Bool) var_8)) ? (max((536870930), (-536870912))) : (((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) var_6)) : (-7))))) : (var_3)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) -175219569);
                    var_13 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)-19133)) & (-175219556)))) ? (((int) var_10)) : (((/* implicit */int) (signed char)-41)))), (((/* implicit */int) (!(((/* implicit */_Bool) 175219574)))))));
                }
            } 
        } 
        arr_9 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (-1527760877) : (arr_3 [i_0])))) ? ((+(min((((/* implicit */int) (signed char)-1)), (-1012182457))))) : (((/* implicit */int) (short)13693)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
        {
            arr_18 [i_3] [i_3] = ((/* implicit */signed char) (!(((536870924) < (-536870924)))));
            /* LoopSeq 1 */
            for (int i_5 = 3; i_5 < 21; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    var_14 += ((/* implicit */signed char) (~(1527760876)));
                    arr_25 [i_6] [i_5] [i_5] [i_5] [(short)6] [(short)6] = ((/* implicit */signed char) ((1835086564) % (arr_10 [i_5 - 1] [i_3])));
                    var_15 = (+(((((/* implicit */int) (signed char)127)) % (-485305371))));
                    arr_26 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_5 + 1] [i_5 - 3] [i_5 - 3])) ? (((/* implicit */int) arr_21 [i_5 - 3] [i_5 - 3] [i_5 + 4])) : (-384602431)));
                    var_16 = ((/* implicit */signed char) (-((~(1835086564)))));
                }
                arr_27 [i_5] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_3] [i_4] [i_5 - 1])) ? (((/* implicit */int) (signed char)-1)) : (-536870923)));
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_5 + 1])) ? (((((/* implicit */_Bool) (signed char)41)) ? (-919474241) : (1824066239))) : (((/* implicit */int) (signed char)-81)))))));
                    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_5] [24] [i_7])))))));
                    arr_31 [i_5] [24] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(384602431))))));
                }
                /* LoopSeq 4 */
                for (short i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                {
                    arr_34 [i_8] [i_5] [i_5] [11] [i_5] [11] = ((/* implicit */short) arr_30 [i_3] [(short)17] [i_5] [3] [i_3]);
                    var_21 += ((/* implicit */int) (signed char)-1);
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) -5))));
                    var_23 = ((/* implicit */int) ((((int) (short)-13601)) != (((/* implicit */int) (short)13229))));
                }
                for (short i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
                {
                    var_24 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_5]))))) ? (((/* implicit */int) arr_28 [i_3])) : (-1680303788));
                    arr_37 [i_3] [(signed char)8] [i_3] [(signed char)8] [i_3] [i_5] = ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)-15)))) ? (((((/* implicit */_Bool) (signed char)-11)) ? (-402419290) : (2147483621))) : (arr_13 [i_5 - 1])));
                    var_25 |= (short)23557;
                    var_26 ^= ((/* implicit */int) ((short) 2147483647));
                    var_27 = arr_16 [i_3];
                }
                for (short i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */short) (signed char)34);
                    arr_41 [i_4] [i_4] [i_4] [i_5] = ((((/* implicit */_Bool) (short)-9881)) ? (((/* implicit */int) arr_21 [i_5] [i_5 - 2] [i_5 + 4])) : (((/* implicit */int) arr_21 [(short)23] [i_5 - 1] [i_5 + 3])));
                }
                for (short i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                {
                    arr_44 [(short)23] [i_3] [4] [i_5] [i_5 - 3] [4] = ((signed char) 329141252);
                    var_29 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-114))));
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) ((-1) * (((/* implicit */int) (short)15236))))) ? (((/* implicit */int) arr_32 [i_5 + 1] [i_3] [i_5 - 2] [i_5])) : (((/* implicit */int) (signed char)-1)))))));
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_5] [i_5 + 2] [(signed char)16])) ? (((((/* implicit */int) (short)7)) | (-1167088676))) : ((~(((/* implicit */int) arr_39 [(short)13] [(short)13] [i_5 - 1] [(short)13] [(short)13] [14]))))));
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((((/* implicit */_Bool) (signed char)104)) || (((/* implicit */_Bool) (signed char)-105)))) ? (((/* implicit */int) (short)7)) : (-1430148561))))));
                }
            }
        }
        for (signed char i_12 = 0; i_12 < 25; i_12 += 4) /* same iter space */
        {
            var_33 = ((/* implicit */signed char) (short)-23558);
            arr_48 [i_3] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) arr_47 [i_3])) > (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)15236))))));
        }
        var_34 = ((/* implicit */short) ((signed char) ((short) (short)-1)));
        arr_49 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) (!(((/* implicit */_Bool) -1486903810)))))));
        arr_50 [i_3] = ((/* implicit */signed char) (+(((((/* implicit */int) (signed char)34)) >> (((-402419283) + (402419289)))))));
    }
    /* vectorizable */
    for (short i_13 = 2; i_13 < 11; i_13 += 4) 
    {
        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_13 - 2] [(short)12] [i_13])) ? (((/* implicit */int) (signed char)56)) : (2147483645)));
        arr_54 [i_13] = ((((((/* implicit */_Bool) arr_7 [i_13] [i_13 - 1] [i_13])) ? (((/* implicit */int) (short)30962)) : (((/* implicit */int) arr_38 [i_13])))) & (((/* implicit */int) (signed char)127)));
        var_36 = 368401296;
    }
    /* LoopSeq 1 */
    for (short i_14 = 0; i_14 < 24; i_14 += 1) 
    {
        var_37 = (-((((!(((/* implicit */_Bool) 643738162)))) ? (((/* implicit */int) arr_40 [i_14] [i_14] [i_14] [i_14] [i_14])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (signed char)-106)))))));
        var_38 += ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)49))))) > (((/* implicit */int) min((arr_47 [i_14]), (arr_47 [i_14]))))));
        var_39 = ((/* implicit */short) (signed char)16);
        arr_57 [(short)23] [(short)23] = ((short) arr_15 [i_14] [21]);
        /* LoopSeq 1 */
        for (short i_15 = 1; i_15 < 21; i_15 += 2) 
        {
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 23; i_16 += 3) 
            {
                for (int i_17 = 4; i_17 < 21; i_17 += 1) 
                {
                    {
                        arr_65 [i_14] [i_15] [23] = ((/* implicit */int) ((((((arr_2 [13] [13]) <= (-2041157702))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_59 [i_15] [i_14] [21])))) == (((((/* implicit */_Bool) (signed char)-9)) ? (arr_4 [i_15 + 1] [i_16 - 1]) : (arr_4 [i_15 + 1] [i_16 + 1])))));
                        arr_66 [i_14] [i_15] = ((/* implicit */signed char) (~((-(((/* implicit */int) (short)8192))))));
                        arr_67 [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) 604520634)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)84)) < (((/* implicit */int) ((368401310) <= (((/* implicit */int) var_7)))))))) : ((-(((/* implicit */int) arr_21 [24] [24] [i_15]))))));
                    }
                } 
            } 
            var_40 = (short)28244;
            var_41 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))) ? (min((-1636560925), (368401296))) : (arr_6 [i_14] [i_14] [i_14]))));
        }
    }
}
