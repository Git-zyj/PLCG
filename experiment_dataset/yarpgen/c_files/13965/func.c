/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13965
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
    var_10 = ((/* implicit */short) (unsigned short)65067);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((-7902002074613121399LL), (7902002074613121399LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((unsigned int) -7902002074613121399LL))) : (((arr_0 [i_0]) ? (-7902002074613121399LL) : (562949936644096LL))))) : (min((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))), (((long long int) arr_0 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_3 = 1; i_3 < 18; i_3 += 2) 
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_3 + 1])) ? (arr_3 [i_0] [i_1] [i_2 - 4]) : (arr_3 [i_3] [i_2] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (_Bool)1))))) ^ (((long long int) (-(arr_5 [i_2] [i_0]))))));
                    var_13 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0] [i_1]))) ? (max((((/* implicit */unsigned int) arr_0 [i_3 + 1])), (4294967295U))) : ((-(arr_3 [i_0] [i_1] [i_3])))))));
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        var_14 = ((((/* implicit */_Bool) (-((~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */long long int) (+(min((arr_9 [i_4] [i_2 + 1] [i_2] [i_1] [i_1] [i_4] [i_1]), (((/* implicit */unsigned int) (short)-12953))))))) : ((~(arr_5 [i_3 + 2] [i_2 - 1]))));
                        var_15 = ((unsigned int) 4294967264LL);
                    }
                }
                arr_13 [i_0] [i_1] [i_2 - 4] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((_Bool) arr_1 [i_0] [i_0])))))));
            }
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_12 [i_0] [i_0]))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12953)) ? (((/* implicit */long long int) ((/* implicit */int) (short)26666))) : (-2980119185330970345LL)));
                var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_5])) ? ((((!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_5] [i_5])))) ? (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_1] [i_1] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) (short)12953)))))))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_6 = 2; i_6 < 18; i_6 += 2) 
            {
                var_19 = ((-2980119185330970345LL) | (arr_14 [i_6 + 2] [i_6 - 1] [i_6 - 1]));
                var_20 = ((/* implicit */long long int) (+(((arr_10 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_1] [i_1] [i_0]) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_6])) : (((/* implicit */int) arr_4 [i_1] [i_0]))))));
                var_21 += ((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_6 - 1] [i_6 - 2] [i_6 - 2] [i_6 - 1]))));
            }
        }
        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 2) 
        {
            var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~((+(arr_5 [i_0] [i_7])))))) ? ((((!(((/* implicit */_Bool) arr_18 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)17294)) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_7 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_7] [i_0] [i_0] [i_7 - 1])) ? (((/* implicit */long long int) 4294967281U)) : (arr_19 [i_7]))))))));
            /* LoopSeq 1 */
            for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        {
                            var_23 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_14 [i_0] [i_7] [i_10])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_0] [i_9] [i_7 + 2] [i_9]))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_7 + 2] [i_8])) ? (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])) : (7902002074613121398LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(arr_12 [i_7 + 2] [i_8]))))))) : (arr_19 [i_0]));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) arr_12 [i_0] [i_0]))));
                        }
                    } 
                } 
                arr_28 [i_0] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967264LL)) ? (16U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12953)))));
            }
            var_25 = ((((/* implicit */long long int) min((arr_3 [i_0] [i_7 + 2] [i_7 + 1]), (arr_25 [i_7 + 2] [i_7] [i_7 + 2] [i_7 - 1] [i_7] [i_7])))) / (((((/* implicit */_Bool) arr_18 [i_0] [i_7])) ? (((/* implicit */long long int) arr_3 [i_7] [i_7 + 1] [i_7 + 2])) : (((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7]))) : (arr_18 [i_7] [i_0]))))));
            var_26 = ((/* implicit */long long int) ((unsigned int) (+((+(arr_6 [i_7]))))));
            arr_29 [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2980119185330970344LL)) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_11 [i_7])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (4503599627370495LL)));
        }
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_12 = 1; i_12 < 12; i_12 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 13; i_14 += 2) 
                {
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_8 [i_11] [i_12] [i_13] [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_11] [i_11]))) : (arr_40 [i_11] [i_12 - 1] [i_13]))))))));
                    var_28 = ((/* implicit */_Bool) arr_2 [i_12 - 1]);
                    arr_41 [i_11] [i_12] [i_13] [i_13] [i_14] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_18 [i_12 - 1] [i_11]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)8556))))) : (((arr_9 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) >> (((arr_31 [i_13]) + (9022775081477175986LL)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_12 - 1] [i_12 + 1] [i_12 - 1])) ? (((/* implicit */int) arr_10 [i_15] [i_15] [i_14] [i_13] [i_12 - 1] [i_11])) : (((/* implicit */int) arr_24 [i_11] [i_12 + 1] [i_12] [i_12 - 1] [i_12 - 1]))));
                        arr_45 [i_15] [i_12] [i_14] [i_13] [i_13] [i_12] [i_11] = ((/* implicit */unsigned int) (+(arr_30 [i_11])));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_12 + 1] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_14]))) : (arr_5 [i_14] [i_15])))) ? (((((/* implicit */_Bool) arr_33 [i_15])) ? (-7902002074613121398LL) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_15] [i_15] [i_15] [i_15] [i_15])))));
                    }
                }
                var_31 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_11] [i_12] [i_13] [i_13])) ? (arr_9 [i_11] [i_12] [i_13] [i_13] [i_12 - 1] [i_11] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_12 + 1])))));
            }
            for (unsigned short i_16 = 2; i_16 < 12; i_16 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                {
                    arr_52 [i_11] [i_12] [i_12] [i_12] [i_16] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_46 [i_16 + 1] [i_12]))))) ? (((/* implicit */int) arr_36 [i_12] [i_12 + 1])) : (((/* implicit */int) arr_46 [i_17] [i_16 - 1]))));
                    var_32 += ((/* implicit */_Bool) arr_38 [i_11] [i_16] [i_16] [i_17]);
                    var_33 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_16 - 1] [i_16] [i_16] [i_16] [i_16] [i_16 - 1])) ? (((/* implicit */int) arr_16 [i_17] [i_17] [i_17] [i_16 + 1])) : (((/* implicit */int) arr_16 [i_17] [i_16] [i_16] [i_16 + 1]))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                {
                    var_34 = ((long long int) (!(((/* implicit */_Bool) arr_42 [i_11] [i_12 - 1] [i_16 - 1] [i_18]))));
                    var_35 += ((/* implicit */short) ((_Bool) (-(arr_20 [i_11] [i_12] [i_16 - 1] [i_18]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_19 = 0; i_19 < 13; i_19 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned short) ((short) ((short) arr_44 [i_19] [i_12] [i_16 + 1] [i_12 - 1] [i_12] [i_11])));
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_11] [i_16 + 1] [i_16 - 2] [i_18] [i_11])) ? ((-(((/* implicit */int) arr_56 [i_11] [i_11] [i_16 - 1] [i_16 - 2] [i_19] [i_11])))) : (((/* implicit */int) arr_37 [i_11] [i_11] [i_11] [i_11]))));
                    }
                    var_38 = ((/* implicit */unsigned int) arr_16 [i_12] [i_16 + 1] [i_16 + 1] [i_18]);
                }
                var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_40 [i_11] [i_11] [i_11])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_11] [i_16] [i_12] [i_16 - 1]))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (-2980119185330970345LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-12949))))))))));
            }
            /* LoopNest 2 */
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                for (unsigned short i_21 = 2; i_21 < 11; i_21 += 2) 
                {
                    {
                        var_40 = ((/* implicit */long long int) arr_63 [i_11] [i_12] [i_21]);
                        arr_65 [i_11] [i_11] [i_12 - 1] [i_21] [i_20] [i_21 - 1] &= ((/* implicit */unsigned short) ((long long int) arr_8 [i_20] [i_12 - 1] [i_12] [i_21 + 1] [i_20 - 1]));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_22 = 0; i_22 < 13; i_22 += 2) 
            {
                arr_70 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_11] [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_12 - 1])) || (((/* implicit */_Bool) arr_44 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12] [i_12] [i_12 - 1]))));
                arr_71 [i_12] [i_12 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_39 [i_11] [i_11] [i_11] [i_12 + 1] [i_12] [i_22]))));
                arr_72 [i_11] [i_12] [i_22] [i_11] = ((/* implicit */long long int) arr_64 [i_12]);
            }
        }
        var_41 ^= ((/* implicit */unsigned short) (((~(4294967264LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_11] [i_11])) && (arr_61 [i_11] [i_11] [i_11] [i_11])))))));
        /* LoopNest 2 */
        for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
        {
            for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
            {
                {
                    var_42 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_76 [i_24 + 1])))))));
                    var_43 &= ((/* implicit */short) (~(((/* implicit */int) arr_37 [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_24 + 1]))));
                }
            } 
        } 
        var_44 -= ((/* implicit */unsigned int) arr_34 [i_11] [i_11]);
        /* LoopSeq 1 */
        for (long long int i_25 = 0; i_25 < 13; i_25 += 2) 
        {
            var_45 = arr_24 [i_11] [i_11] [i_11] [i_11] [i_11];
            /* LoopNest 3 */
            for (long long int i_26 = 0; i_26 < 13; i_26 += 2) 
            {
                for (long long int i_27 = 3; i_27 < 12; i_27 += 2) 
                {
                    for (long long int i_28 = 0; i_28 < 13; i_28 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */short) (!((!(((/* implicit */_Bool) 4U))))));
                            var_47 = (+(((((/* implicit */_Bool) arr_82 [i_25] [i_26] [i_27] [i_28])) ? (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]))) : (arr_79 [i_25]))));
                        }
                    } 
                } 
            } 
            var_48 &= ((/* implicit */unsigned int) arr_56 [i_11] [i_11] [i_11] [i_25] [i_25] [i_25]);
        }
    }
}
