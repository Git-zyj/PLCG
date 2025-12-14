/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165442
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
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) var_15)))));
    var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)61464))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) ((unsigned int) arr_1 [i_0] [i_0]));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_2) : (var_9)))) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-103))))) ? (((/* implicit */int) (unsigned short)43246)) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(861985741)))))))));
        arr_5 [i_1] = (~(2924140062U));
        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_1] [i_1]) % (arr_0 [i_1] [i_1]))))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                arr_12 [(unsigned short)8] [i_2] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) || (((/* implicit */_Bool) ((unsigned short) 490257075))))))));
                arr_13 [(_Bool)1] [i_1] [i_3] = max((((var_17) + (arr_6 [(_Bool)1] [i_3]))), (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */unsigned int) var_2)) : (arr_6 [i_1] [i_2]))));
                /* LoopSeq 3 */
                for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) /* same iter space */
                {
                    arr_16 [i_1] [i_1] [i_1] [i_3] [(signed char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) (unsigned short)14738))), (((((/* implicit */_Bool) (signed char)82)) ? (var_4) : (((/* implicit */int) (unsigned char)161))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-116)) % (((/* implicit */int) (signed char)-103))))) : (max((((/* implicit */unsigned int) var_11)), (arr_10 [12] [i_2] [i_1] [9U])))));
                    var_27 = ((((/* implicit */_Bool) ((int) (unsigned short)0))) ? (((/* implicit */int) var_12)) : (var_4));
                    var_28 &= ((/* implicit */signed char) ((unsigned short) ((arr_8 [i_1] [i_4 + 3] [i_4]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_13))))));
                    var_29 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned short)24576)) ? (611513779) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24576)) || (((/* implicit */_Bool) var_15))))))));
                }
                for (unsigned short i_5 = 1; i_5 < 22; i_5 += 3) /* same iter space */
                {
                    var_30 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((65535U), (((/* implicit */unsigned int) (unsigned short)9)))))));
                    arr_19 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (arr_11 [i_1] [22U] [i_3] [i_1])))))));
                    var_31 = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-117))))), (((arr_10 [i_1] [i_1] [i_1] [i_1]) & (((/* implicit */unsigned int) var_4)))))));
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_22 [i_1] [i_2] [i_2] [i_6] = ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [20])) ? (arr_8 [i_1] [i_2] [i_3]) : (arr_8 [i_6] [(unsigned short)19] [i_2]));
                    arr_23 [i_1] [i_1] [i_1] [i_6] [i_3] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [i_1] [i_2] [i_1] [i_6] [i_1] [i_6]))));
                }
            }
            for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                arr_27 [i_1] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_13), (((/* implicit */unsigned short) (signed char)-116)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(1987373224U)))) ? (((/* implicit */int) max(((unsigned short)32752), ((unsigned short)59625)))) : ((-(1148201981)))))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_2] [i_2] [i_2]))) + (arr_6 [i_2] [5U])))))));
                arr_28 [i_1] = ((/* implicit */unsigned int) arr_2 [i_1]);
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    arr_31 [i_1] [i_2] [i_7] [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)102))));
                    var_32 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_8 [i_1] [i_2] [i_7]))))));
                    arr_32 [i_1] = ((/* implicit */unsigned short) (~(321141703U)));
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        arr_36 [i_1] [i_2] [i_7] [i_9] = (~(max((((/* implicit */int) arr_4 [i_1])), ((~(var_6))))));
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (-(arr_6 [i_1] [i_1]))))));
                        var_34 = ((/* implicit */unsigned int) var_14);
                        arr_37 [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (unsigned short)48526)), (3450901988U))), (((/* implicit */unsigned int) ((unsigned short) 1660569960U))))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        var_35 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_15))))))));
                        var_36 = ((/* implicit */signed char) min(((unsigned short)50817), (((/* implicit */unsigned short) (signed char)102))));
                        var_37 += ((/* implicit */int) ((((/* implicit */_Bool) max((arr_7 [i_10 + 1] [i_10 + 1]), (arr_7 [i_10 + 1] [i_10])))) ? ((~(arr_15 [i_2] [i_10 + 1] [i_10 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_14))))));
                        var_38 = (-(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (unsigned short)24569)))))));
                    }
                }
                for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    var_39 = max(((unsigned short)65529), (((/* implicit */unsigned short) (_Bool)1)));
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)4084)) / (((/* implicit */int) (unsigned short)50821)))) + (((/* implicit */int) arr_24 [i_1] [i_1]))))) + ((-(3832539601U)))));
                    arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = max(((~(arr_10 [i_1] [i_2] [i_7] [i_11]))), (((/* implicit */unsigned int) ((signed char) arr_10 [i_1] [i_2] [21] [i_11]))));
                }
            }
            arr_43 [i_1] [i_2] = ((/* implicit */int) (-((+((+(arr_6 [i_1] [i_2])))))));
            arr_44 [i_1] [i_2] [i_2] = (-(((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_2] [(signed char)17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73))) : (max((((/* implicit */unsigned int) -879529338)), (512U))))));
            var_41 = ((/* implicit */_Bool) max((min((2147483647), (((/* implicit */int) (unsigned short)8191)))), (((((/* implicit */_Bool) 4294901741U)) ? (((/* implicit */int) (unsigned char)5)) : (-2147483632)))));
        }
        for (int i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            arr_47 [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned short) ((arr_24 [i_1] [i_1]) ? (462427684U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_12] [i_12]))))));
            arr_48 [i_1] [i_1] = ((/* implicit */signed char) min(((unsigned short)50808), (((/* implicit */unsigned short) (unsigned char)23))));
            arr_49 [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (4128124774U) : (((/* implicit */unsigned int) 2147483647))))) ? (max((3431710326U), (((/* implicit */unsigned int) (signed char)25)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4))))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)63356)), (var_9))))));
            var_42 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)53898)) ? (-2147483638) : (((/* implicit */int) (signed char)25))));
            /* LoopSeq 2 */
            for (unsigned char i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                var_43 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) max((arr_8 [i_1] [i_1] [i_13]), (((/* implicit */unsigned int) arr_26 [i_1] [i_1] [i_1] [i_1])))))) - (((arr_41 [i_12]) ? (var_4) : (((/* implicit */int) arr_41 [i_1]))))));
                var_44 = min((-18), (-506001089));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_14 = 0; i_14 < 25; i_14 += 1) 
                {
                    arr_54 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) arr_4 [i_1])) : (arr_50 [i_14] [i_13] [i_12] [i_1])));
                    arr_55 [15] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(462427694U)))) ? ((-(-1003593091))) : (((/* implicit */int) ((arr_34 [i_1] [13] [5] [i_14] [9] [i_12] [i_13]) < (((/* implicit */unsigned int) var_9)))))));
                    var_45 ^= (~(((/* implicit */int) ((unsigned char) var_8))));
                    arr_56 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3636519639U)) ? (arr_15 [i_1] [i_12] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)22)))))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) -1637134409)) : (arr_9 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37346)))));
                    arr_57 [i_1] [i_12] [i_1] [i_1] = ((unsigned short) ((2256048755U) + (((/* implicit */unsigned int) 874933694))));
                }
            }
            for (unsigned char i_15 = 1; i_15 < 22; i_15 += 2) 
            {
                var_46 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 462427694U)) ? (((/* implicit */int) (unsigned char)3)) : (1945528464)))), (min((((/* implicit */unsigned int) ((unsigned char) var_3))), (min((var_7), (((/* implicit */unsigned int) (unsigned char)103))))))));
                var_47 = ((/* implicit */unsigned short) (((-(462427695U))) * (((unsigned int) arr_6 [i_15 + 2] [i_15 - 1]))));
                var_48 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((int) var_6)), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) && ((!(((/* implicit */_Bool) arr_52 [i_1] [i_12] [i_15 + 1] [i_15 - 1]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_16 = 1; i_16 < 24; i_16 += 2) 
                {
                    var_49 = ((/* implicit */unsigned int) arr_2 [i_1]);
                    arr_64 [i_1] [i_12] [(unsigned char)10] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)46)) ? (var_6) : (((/* implicit */int) arr_38 [i_1] [i_12] [i_15] [i_16] [i_15]))))) ? (((/* implicit */int) arr_39 [i_15 - 1] [i_12] [i_15 - 1] [i_16] [(unsigned short)8])) : (((((/* implicit */_Bool) (unsigned char)108)) ? (619989317) : (((/* implicit */int) (unsigned short)65523))))));
                    var_50 = ((/* implicit */unsigned int) var_16);
                }
                for (unsigned short i_17 = 0; i_17 < 25; i_17 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_51 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1])) != (((/* implicit */int) arr_4 [i_1]))));
                        arr_71 [i_17] [(unsigned short)12] [i_17] [i_1] [i_17] = ((((/* implicit */_Bool) arr_29 [i_15] [i_1] [i_1] [i_15])) ? (3832539602U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))));
                        var_52 = ((/* implicit */int) (-((~(var_19)))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 25; i_19 += 1) 
                    {
                        arr_74 [i_1] [10U] [i_15 - 1] [(signed char)10] [(unsigned short)12] [i_17] &= (~(((int) ((((/* implicit */_Bool) arr_4 [i_12])) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))));
                        arr_75 [i_17] [i_1] = ((/* implicit */int) 0U);
                    }
                    var_53 = ((/* implicit */signed char) 462427694U);
                }
                /* LoopSeq 1 */
                for (int i_20 = 2; i_20 < 24; i_20 += 3) 
                {
                    var_54 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((int) arr_0 [i_12] [i_15])))) ? (max(((+(2346532852U))), (((/* implicit */unsigned int) ((unsigned char) (unsigned char)235))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_1] [i_12] [i_15] [i_20] [i_12] [i_15] [i_12])) ? (((/* implicit */unsigned int) arr_60 [i_12] [i_12] [22])) : (arr_61 [i_1] [(unsigned short)13] [3U] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned int) (-(1152352854)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (arr_30 [i_1] [i_12] [i_15] [i_20 - 2] [(unsigned char)19])))))));
                    var_55 = ((/* implicit */_Bool) max((var_11), (((unsigned short) max(((unsigned short)65528), (((/* implicit */unsigned short) (unsigned char)107)))))));
                    var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) ((int) ((arr_0 [i_1] [i_1]) - (arr_0 [i_1] [11])))))));
                    arr_78 [i_1] [8] [i_15] [i_15] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_38 [7U] [i_15 + 1] [8U] [i_15 - 1] [i_15 - 1])) != (arr_7 [(unsigned short)3] [i_1])))), (((unsigned short) 3521673922U))));
                    arr_79 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_76 [(_Bool)0] [i_12] [i_12] [i_12] [i_12] [i_12]))) ? ((~(arr_66 [i_12] [i_15 + 1]))) : (max((((/* implicit */unsigned int) arr_24 [i_15] [i_12])), (3750237526U)))));
                }
            }
        }
    }
    for (unsigned int i_21 = 1; i_21 < 16; i_21 += 2) 
    {
        var_57 ^= ((/* implicit */signed char) 619989326);
        arr_82 [i_21] = ((/* implicit */int) max((((unsigned int) max((619989325), (((/* implicit */int) arr_39 [i_21 + 1] [11U] [i_21 + 1] [i_21 + 1] [i_21]))))), (((/* implicit */unsigned int) (~(((int) 3832539584U)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_22 = 1; i_22 < 13; i_22 += 3) 
        {
            var_58 = ((/* implicit */unsigned int) max((var_58), (((((4001853536U) != (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) ? ((~(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49400)))))));
            arr_85 [i_21] [i_21] [i_21] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_81 [i_22 - 1]))))));
        }
    }
}
