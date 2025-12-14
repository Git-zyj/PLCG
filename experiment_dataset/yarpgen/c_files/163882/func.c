/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163882
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
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned int) ((short) ((long long int) var_11)))), (((((((/* implicit */_Bool) var_9)) ? (var_7) : (var_9))) * (((/* implicit */unsigned int) ((((/* implicit */int) (short)-282)) / (var_12))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        var_14 = ((((/* implicit */unsigned long long int) ((((var_0) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))) - (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))))) & (arr_3 [i_2]));
                        var_15 *= ((/* implicit */short) (-((~(max((var_8), (((/* implicit */unsigned int) arr_0 [i_3] [18LL]))))))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_0] [7] [i_2] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 - 1] [i_4] [(short)18] [i_2 - 3] [i_0])) ? ((~(var_9))) : (var_7)))), (((((/* implicit */_Bool) max((287309533U), (((/* implicit */unsigned int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((4007657762U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [18ULL])))))) : (min((arr_3 [(signed char)9]), (((/* implicit */unsigned long long int) var_12))))))));
                        var_16 = ((/* implicit */unsigned int) ((arr_10 [i_2 - 3] [i_2 + 1] [i_4 - 1]) << (((((/* implicit */int) ((((/* implicit */_Bool) 5565917229571448697LL)) || (((/* implicit */_Bool) 0U))))) - (1)))));
                    }
                    arr_16 [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */int) var_11)), ((~(((/* implicit */int) arr_6 [i_2] [i_2 - 2] [i_2]))))));
                    arr_17 [i_0] [i_2] [i_0] = ((/* implicit */int) ((signed char) ((unsigned short) arr_14 [i_1] [i_2 - 2] [(signed char)7] [i_2] [i_1] [i_2])));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        arr_20 [i_0] [i_1] [0ULL] [i_2] = ((/* implicit */signed char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_2] [i_0] [i_5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)10256))))), (((arr_13 [i_2] [i_2] [i_5]) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_2] [i_1] [i_5]))))))) / (((/* implicit */long long int) (-(((/* implicit */int) (short)-10250)))))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_2 + 1] [i_2 - 2]))) ? (((((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 3])) ^ (((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 2])))) : (((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 3]))));
                        var_19 = ((/* implicit */long long int) arr_1 [i_0]);
                        /* LoopSeq 2 */
                        for (short i_6 = 1; i_6 < 17; i_6 += 1) 
                        {
                            var_20 = ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_2 [i_0] [i_5])), (9223372036854775807LL))), ((~(arr_13 [i_2] [i_1] [3U])))))) ? (((max((var_4), (((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_2])))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 - 1] [i_6 + 4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18314))));
                            arr_23 [i_0] [i_1] [i_1] [i_1] [(unsigned short)14] [i_2] [i_6 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) : (var_9)))) ? (min((((/* implicit */long long int) arr_22 [i_6] [i_6 + 3] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 4] [i_6 + 3])), (max((((/* implicit */long long int) arr_4 [i_2 - 1] [i_6 + 2])), (var_0))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2 - 2] [i_6 + 4] [i_2])) * (((/* implicit */int) arr_1 [i_6 + 4])))))));
                            arr_24 [i_2] [i_5] [(short)12] [i_2] = ((/* implicit */unsigned short) ((unsigned int) (short)10242));
                            arr_25 [i_0] [i_1] [i_1] [i_2] [i_5] [i_1] [i_1] = ((/* implicit */short) 12018482670316623269ULL);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (((((~(arr_19 [2U] [i_2 - 3] [(signed char)6] [i_2 + 1]))) + (9223372036854775807LL))) >> (((/* implicit */int) ((arr_19 [i_2] [i_2 - 2] [(_Bool)1] [i_2 + 1]) != (arr_19 [i_1] [i_2 - 2] [14] [i_2 - 1])))))))));
                            arr_28 [i_0] [i_2] [20LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [7ULL] [i_0])) ? (((/* implicit */int) (!(arr_1 [i_0])))) : (((/* implicit */int) (((~(6428261403392928346ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_5]))))))));
                        }
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (12868106048237211430ULL) : (((/* implicit */unsigned long long int) arr_21 [i_0]))))))))) ^ (var_10)));
        arr_29 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [(unsigned char)8] [i_0] [i_0])) && (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) ((short) (~(((/* implicit */int) var_6)))))) : (((/* implicit */int) var_6))));
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                {
                    var_23 = ((/* implicit */long long int) var_8);
                    arr_37 [i_9] [(short)8] [i_8] [(signed char)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_8])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_8] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (6428261403392928347ULL)))) ? (((int) var_11)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((arr_33 [i_0] [i_0] [i_9]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0] [i_8] [i_0]))))))));
                }
            } 
        } 
    }
    for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        arr_41 [i_10] = ((/* implicit */signed char) var_6);
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)11071)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_10] [i_10] [(short)15] [i_10] [i_10] [(unsigned short)20] [i_10]))) : (var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5193512858931355686LL)) ? (((/* implicit */int) arr_14 [i_10] [i_10] [i_10] [(unsigned char)6] [i_10] [i_10])) : (((/* implicit */int) arr_14 [i_10] [i_10] [i_10] [4] [i_10] [i_10]))))) : (((min((var_8), (var_9))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_10] [i_10])))))));
    }
    for (signed char i_11 = 1; i_11 < 18; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_49 [i_12] [i_11] [i_12] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_11] [i_13])) ? (((/* implicit */int) ((signed char) 7054270678463203740LL))) : ((+(((/* implicit */int) arr_48 [i_11 + 4] [i_12]))))));
                    /* LoopNest 2 */
                    for (short i_14 = 3; i_14 < 21; i_14 += 3) 
                    {
                        for (short i_15 = 1; i_15 < 20; i_15 += 1) 
                        {
                            {
                                arr_55 [i_12] [i_12] [i_13] [i_13] [i_14] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) -7952794000888563471LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_12] [i_12]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_12] [i_12])))))));
                                var_25 = ((_Bool) min((arr_47 [i_15] [i_15 + 2]), (((/* implicit */int) (_Bool)1))));
                                var_26 = ((/* implicit */long long int) ((arr_54 [i_12] [i_12] [i_12] [i_14] [i_15] [i_15]) >> (max((var_12), (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (arr_42 [i_13]))))))));
                                arr_56 [i_11] [i_11] [0ULL] [i_14 - 3] [i_12] = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_44 [i_12] [i_14 - 1] [i_12])) < (((/* implicit */unsigned long long int) arr_44 [i_11] [i_13] [i_12]))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */long long int) arr_47 [i_11] [i_11 + 4])) - (((((/* implicit */_Bool) arr_44 [i_11] [i_12] [8])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_50 [i_11] [i_11] [i_11] [i_13]))) & (-653331045574639725LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_12]))))))))));
                    var_28 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_51 [i_11 + 2] [i_12] [(_Bool)1] [(short)14] [i_13])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_13] [i_13] [4U] [(short)8] [4U]))))), (((/* implicit */unsigned int) min((arr_51 [i_11] [i_11] [18LL] [i_12] [i_13]), (arr_51 [i_11] [i_13] [6ULL] [i_11] [i_13]))))));
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) 3064265171U)) : (3325864589506890978LL)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_16 = 1; i_16 < 21; i_16 += 1) 
        {
            arr_59 [i_11] [i_11 - 1] [(unsigned short)18] &= ((/* implicit */unsigned long long int) var_9);
            var_30 = var_6;
        }
    }
    for (long long int i_17 = 1; i_17 < 21; i_17 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_18 = 0; i_18 < 25; i_18 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_19 = 0; i_19 < 25; i_19 += 4) 
            {
                for (signed char i_20 = 4; i_20 < 21; i_20 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_21 = 1; i_21 < 23; i_21 += 3) /* same iter space */
                        {
                            var_31 ^= ((/* implicit */int) ((short) min((arr_69 [i_20 - 2] [i_20] [i_21] [(signed char)8] [i_21] [i_21 - 1]), (arr_69 [i_20 + 2] [i_20 + 2] [i_20 + 2] [i_20] [i_21] [i_20 + 2]))));
                            arr_74 [i_17] [i_17] [i_18] [i_17] [i_20] [i_21] [i_21 + 1] = ((signed char) (+((~(((/* implicit */int) var_6))))));
                            var_32 = (i_17 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */int) arr_71 [i_17] [i_18] [i_18] [i_20] [i_20])) >> (((arr_68 [i_20 + 1] [i_17]) - (17400184452532177735ULL))))) << (((var_8) - (571504055U)))))) | (((((/* implicit */_Bool) arr_72 [i_17 + 4] [i_17 + 4] [i_17 - 1] [i_17 + 2] [i_17 - 1])) ? (((long long int) arr_72 [i_17] [i_18] [i_19] [i_20] [i_21 + 2])) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-10251)))))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */int) arr_71 [i_17] [i_18] [i_18] [i_20] [i_20])) >> (((((arr_68 [i_20 + 1] [i_17]) - (17400184452532177735ULL))) - (14435534906989359731ULL))))) << (((var_8) - (571504055U)))))) | (((((/* implicit */_Bool) arr_72 [i_17 + 4] [i_17 + 4] [i_17 - 1] [i_17 + 2] [i_17 - 1])) ? (((long long int) arr_72 [i_17] [i_18] [i_19] [i_20] [i_21 + 2])) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-10251))))))))));
                            arr_75 [i_17] [i_18] [i_17] [i_20 + 3] [i_21] = ((/* implicit */short) (-(((/* implicit */int) (short)-10251))));
                            var_33 -= ((/* implicit */long long int) arr_70 [i_17] [i_17] [i_17 + 2] [(unsigned char)23] [i_17]);
                        }
                        for (unsigned short i_22 = 1; i_22 < 23; i_22 += 3) /* same iter space */
                        {
                            arr_80 [i_22] [i_22 + 1] [i_22] [i_22] [i_22] [i_19] [i_22] &= ((/* implicit */unsigned short) arr_68 [i_17] [i_20]);
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) arr_72 [i_22] [i_20] [i_17] [i_17] [i_17]))));
                        }
                        var_35 = ((/* implicit */unsigned long long int) arr_66 [i_20] [i_17] [i_17] [i_17]);
                    }
                } 
            } 
            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (~(min((((((/* implicit */_Bool) 16607590118933397978ULL)) ? (((/* implicit */int) (short)-32763)) : ((-2147483647 - 1)))), (((/* implicit */int) min((arr_64 [i_17] [i_17] [(unsigned short)9]), (((/* implicit */unsigned short) (short)32763))))))))))));
        }
        arr_81 [i_17 + 3] [i_17] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_72 [i_17 + 1] [i_17] [i_17 + 1] [i_17] [(_Bool)1])))))));
        var_37 = ((/* implicit */long long int) max((((/* implicit */unsigned short) (short)32763)), (var_6)));
    }
    /* LoopSeq 1 */
    for (unsigned short i_23 = 0; i_23 < 17; i_23 += 3) 
    {
        var_38 = ((/* implicit */int) ((short) arr_72 [i_23] [i_23] [i_23] [i_23] [i_23]));
        arr_85 [i_23] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_1 [3LL]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_23] [i_23])) ? (((/* implicit */int) arr_42 [i_23])) : (((/* implicit */int) (signed char)-109))))) : (((((/* implicit */_Bool) arr_12 [i_23] [i_23])) ? (arr_33 [i_23] [i_23] [i_23]) : (arr_21 [i_23]))))))));
        var_39 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_21 [i_23])) ? (((/* implicit */int) arr_30 [i_23] [i_23] [i_23])) : (((/* implicit */int) arr_22 [5ULL] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]))))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_23] [i_23]))) : (arr_46 [i_23])))), (max((9223372036854775807LL), (((/* implicit */long long int) arr_6 [20U] [i_23] [20U]))))))));
        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((var_8) * (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -5193512858931355686LL)) ? (((/* implicit */int) arr_50 [i_23] [(unsigned short)11] [i_23] [i_23])) : (((/* implicit */int) arr_42 [(unsigned char)14]))))))))))));
    }
    var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((long long int) ((unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)65535)), (var_10))))))));
}
