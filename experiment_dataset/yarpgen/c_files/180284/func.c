/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180284
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] = arr_5 [i_0 + 1] [i_1 + 2] [i_2] [i_3];
                                arr_12 [i_0 + 1] [i_0] [i_0] [i_1] [i_4] [i_2] [i_2] = arr_5 [i_0] [i_0 + 1] [i_0 + 1] [i_0];
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) min((arr_0 [i_1]), (arr_8 [(unsigned short)3] [i_1 + 1] [i_0] [i_0] [i_0] [(unsigned short)19])))) : (((/* implicit */int) arr_4 [i_1]))))) ? (((((/* implicit */_Bool) arr_9 [i_1] [(unsigned short)10] [i_0] [i_1] [(unsigned short)14] [(unsigned short)10])) ? ((~(((/* implicit */int) arr_5 [i_0] [(unsigned short)18] [(unsigned short)16] [i_2])))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(unsigned short)13] [i_1 - 2] [i_2] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [(unsigned short)11])))))) : (((((/* implicit */_Bool) arr_8 [(unsigned short)8] [i_0 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1])) ? (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_0] [(unsigned short)18] [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1 - 2] [i_1] [(unsigned short)13])))))))))));
                    arr_13 [i_0] [(unsigned short)7] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [(unsigned short)2] [i_2] [i_2] [i_2] [i_2] [i_2]))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (var_9)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)0), ((unsigned short)54093)))) ? (((/* implicit */int) arr_8 [i_5] [i_6] [i_7] [i_7] [i_7] [i_7])) : (((((/* implicit */int) arr_14 [i_5])) / (((/* implicit */int) arr_9 [i_7] [(unsigned short)6] [i_6] [i_6] [i_7] [i_7]))))))) ? (((/* implicit */int) arr_5 [(unsigned short)12] [(unsigned short)1] [i_5] [(unsigned short)12])) : (min((((/* implicit */int) arr_20 [i_5])), (((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) arr_6 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_19 [i_6] [i_7]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            {
                                arr_25 [i_5] [i_6] [i_7] [i_7] [i_7] [i_7] [(unsigned short)0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_5] [i_5] [i_6] [(unsigned short)14] [i_8] [i_9])) > (((/* implicit */int) arr_0 [i_5]))));
                                arr_26 [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_22 [i_9] [i_6] [i_7] [i_6]), ((unsigned short)32760)))) ? (((((/* implicit */_Bool) (unsigned short)64919)) ? (((/* implicit */int) arr_22 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_0 [i_5])))) : (((/* implicit */int) arr_0 [i_8]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_10 = 1; i_10 < 15; i_10 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64919)) ? (((((/* implicit */_Bool) arr_28 [i_10] [i_10])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_14)))))));
        arr_29 [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [(unsigned short)12])) - (((/* implicit */int) arr_0 [(unsigned short)4]))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 3; i_11 < 14; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                {
                    arr_36 [i_10] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_2 [i_10 - 1]), (arr_2 [i_10 - 1])))) ? (((/* implicit */int) max((arr_2 [i_10 + 1]), (var_16)))) : (((((/* implicit */_Bool) arr_27 [i_10 - 1])) ? (((/* implicit */int) arr_2 [i_10 + 1])) : (((/* implicit */int) arr_2 [i_10 - 1]))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_9 [i_11] [i_12] [i_11] [i_10 + 1] [i_11] [i_10]), (min((arr_4 [i_11]), (arr_28 [i_11 + 1] [i_12])))))) >> (((((/* implicit */int) (unsigned short)6461)) - (6454)))));
                    arr_37 [i_10] [(unsigned short)2] [i_11] [(unsigned short)12] = min(((unsigned short)17827), ((unsigned short)32775));
                    arr_38 [i_10] [(unsigned short)4] [i_11] = arr_9 [i_11] [i_10] [i_10] [i_11] [i_11 + 2] [(unsigned short)16];
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [(unsigned short)14]))))) ? ((+(((/* implicit */int) arr_4 [(unsigned short)10])))) : (((/* implicit */int) min((arr_4 [(unsigned short)14]), (arr_4 [(unsigned short)2]))))));
        /* LoopNest 3 */
        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 4) 
        {
            for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                for (unsigned short i_15 = 0; i_15 < 16; i_15 += 1) 
                {
                    {
                        var_24 ^= ((/* implicit */unsigned short) min((((/* implicit */int) arr_32 [i_10] [i_13] [i_10])), (((((((/* implicit */int) arr_27 [i_13])) ^ (((/* implicit */int) (unsigned short)14336)))) | (((((/* implicit */_Bool) arr_45 [i_10] [i_10] [i_14] [i_15])) ? (((/* implicit */int) arr_32 [i_13] [i_14] [i_15])) : (((/* implicit */int) arr_0 [i_13]))))))));
                        var_25 = ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_10 + 1] [i_10] [i_15] [i_15])) ? (((/* implicit */int) arr_5 [i_10 - 1] [i_15] [i_15] [(unsigned short)7])) : (((/* implicit */int) arr_5 [i_10 - 1] [i_10] [i_14] [(unsigned short)2]))));
                        var_26 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_46 [i_15] [i_14] [i_14] [i_13] [i_10] [i_10])) : (((/* implicit */int) arr_34 [i_10]))))) ? (((((/* implicit */_Bool) arr_6 [(unsigned short)7] [(unsigned short)7] [(unsigned short)7])) ? (((/* implicit */int) arr_2 [i_10 + 1])) : (((/* implicit */int) (unsigned short)21813)))) : (((/* implicit */int) max((arr_6 [(unsigned short)13] [i_10 - 1] [i_10]), (arr_5 [(unsigned short)0] [i_13] [i_14] [i_15])))))) >= ((+(((/* implicit */int) min((arr_41 [(unsigned short)14] [(unsigned short)14] [i_14] [i_13]), (arr_46 [(unsigned short)4] [i_13] [i_14] [i_15] [i_15] [(unsigned short)2]))))))));
                        arr_47 [i_14] [i_13] [i_14] = arr_34 [i_15];
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_16 = 1; i_16 < 11; i_16 += 4) 
    {
        arr_52 [i_16 + 3] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_16 + 1] [i_16 - 1] [i_16 + 3])) ? (((/* implicit */int) (unsigned short)43723)) : (((((/* implicit */_Bool) (unsigned short)13386)) ? (((/* implicit */int) (unsigned short)64919)) : (((/* implicit */int) (unsigned short)29000))))));
        var_27 *= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_44 [i_16] [(unsigned short)10] [(unsigned short)2] [i_16 - 1]))));
        arr_53 [(unsigned short)6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_43 [i_16 + 1] [i_16] [i_16] [i_16] [i_16 + 2]))))) ? (((/* implicit */int) min((max((arr_7 [(unsigned short)11] [i_16] [i_16] [(unsigned short)16] [i_16]), (arr_5 [i_16] [i_16] [i_16] [i_16]))), (arr_39 [i_16 - 1] [i_16 + 1])))) : (((((((/* implicit */int) arr_39 [i_16] [i_16])) >= (((/* implicit */int) arr_30 [i_16] [i_16 + 4] [i_16])))) ? (((/* implicit */int) max(((unsigned short)14340), (arr_33 [(unsigned short)10])))) : (((/* implicit */int) (unsigned short)6469))))));
    }
    for (unsigned short i_17 = 0; i_17 < 25; i_17 += 3) 
    {
        var_28 = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) arr_56 [i_17])) ? (((/* implicit */int) (unsigned short)36535)) : (((/* implicit */int) arr_55 [i_17])))), (((((/* implicit */_Bool) arr_56 [i_17])) ? (((/* implicit */int) arr_54 [i_17] [i_17])) : (((/* implicit */int) arr_55 [i_17])))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_17])) ? (((/* implicit */int) arr_54 [i_17] [i_17])) : (((/* implicit */int) arr_55 [i_17]))))) ? (((((/* implicit */int) arr_55 [i_17])) ^ (((/* implicit */int) arr_55 [(unsigned short)5])))) : (((((/* implicit */_Bool) arr_55 [i_17])) ? (((/* implicit */int) arr_54 [i_17] [i_17])) : (((/* implicit */int) (unsigned short)384))))))));
        /* LoopNest 2 */
        for (unsigned short i_18 = 0; i_18 < 25; i_18 += 1) 
        {
            for (unsigned short i_19 = 0; i_19 < 25; i_19 += 1) 
            {
                {
                    arr_62 [(unsigned short)10] [i_19] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? ((~(((((/* implicit */_Bool) arr_54 [i_18] [i_19])) ? (((/* implicit */int) arr_57 [i_19] [i_17] [i_17])) : (((/* implicit */int) (unsigned short)41653)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_17])))))));
                    arr_63 [i_17] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [(unsigned short)4])) ? (((/* implicit */int) (unsigned short)2821)) : (((/* implicit */int) arr_57 [i_19] [i_19] [i_19]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_59 [i_17] [i_18] [i_19])) <= (((/* implicit */int) arr_54 [i_17] [i_18]))))) : (((/* implicit */int) max((var_7), (arr_61 [i_17] [i_19]))))))) ? (((/* implicit */int) var_5)) : (min((((((/* implicit */_Bool) arr_60 [i_19] [i_17] [i_17])) ? (((/* implicit */int) arr_61 [(unsigned short)10] [i_19])) : (((/* implicit */int) arr_54 [(unsigned short)22] [(unsigned short)22])))), (((((/* implicit */_Bool) arr_57 [(unsigned short)9] [i_18] [(unsigned short)0])) ? (((/* implicit */int) arr_56 [i_17])) : (((/* implicit */int) arr_59 [i_17] [i_17] [i_19]))))))));
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_61 [i_17] [i_19])) >> (((((/* implicit */int) arr_55 [i_18])) - (26263)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_20 = 2; i_20 < 23; i_20 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_66 [i_20] [i_20] [i_20 - 2] [i_20 + 2] [i_20 + 2] [i_20])) ? (((/* implicit */int) arr_54 [i_17] [i_19])) : (((((/* implicit */int) arr_54 [i_20 - 2] [i_18])) >> (((((/* implicit */int) arr_54 [i_18] [i_19])) - (54056))))))))));
                        arr_67 [i_20] [i_18] [i_19] [i_20] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_59 [i_20 + 1] [i_17] [i_19]), (arr_64 [(unsigned short)0] [i_18] [i_20 - 1] [i_17] [i_20])))) ? (((/* implicit */int) max((arr_59 [i_20 + 1] [i_19] [i_19]), (arr_65 [i_17] [i_20 + 1] [(unsigned short)23])))) : (((/* implicit */int) arr_64 [i_17] [i_18] [i_20 + 2] [i_20 + 2] [i_17]))));
                        arr_68 [i_19] [i_18] [i_19] [i_20] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_66 [(unsigned short)8] [(unsigned short)8] [i_17] [i_20] [i_20 - 1] [i_19])) ? (((((/* implicit */_Bool) arr_64 [i_17] [i_17] [i_17] [i_17] [(unsigned short)5])) ? (((/* implicit */int) arr_56 [i_17])) : (((/* implicit */int) arr_59 [(unsigned short)18] [i_18] [(unsigned short)18])))) : (((/* implicit */int) (unsigned short)9)))), (((/* implicit */int) min((arr_66 [i_19] [i_19] [i_17] [i_18] [i_17] [i_19]), (arr_64 [i_17] [i_18] [i_19] [i_20] [i_20]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_21 = 3; i_21 < 22; i_21 += 4) 
                        {
                            var_31 += arr_66 [(unsigned short)12] [(unsigned short)8] [(unsigned short)16] [(unsigned short)24] [i_20] [i_20];
                            var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
                            arr_72 [i_19] [i_18] [i_20] [(unsigned short)13] [i_21 - 1] [i_21] [i_21] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_64 [(unsigned short)18] [i_18] [i_21 - 2] [i_20] [i_20 + 1])) >> (((((/* implicit */int) arr_64 [i_19] [i_18] [i_21 - 3] [i_20] [i_20 + 1])) - (51333))))), (((((/* implicit */_Bool) ((unsigned short) arr_61 [i_19] [i_19]))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max(((unsigned short)51199), (arr_69 [i_18] [i_18] [i_18] [i_18] [i_18] [(unsigned short)10]))))))));
                        }
                    }
                }
            } 
        } 
        arr_73 [i_17] [i_17] |= ((/* implicit */unsigned short) (+(min((((/* implicit */int) (unsigned short)65526)), (((((/* implicit */int) arr_70 [i_17] [(unsigned short)16] [i_17] [i_17] [i_17])) & (((/* implicit */int) arr_71 [(unsigned short)6] [i_17] [i_17]))))))));
    }
}
