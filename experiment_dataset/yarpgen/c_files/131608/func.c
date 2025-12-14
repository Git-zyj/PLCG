/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131608
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
    var_17 = max((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_5))))) ? ((+(var_11))) : ((+(var_0))))), (((((/* implicit */_Bool) (-(var_9)))) ? ((+(-352150090791077435LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                for (long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_18 += ((/* implicit */short) (~(((arr_9 [i_3 + 3] [i_0 + 1]) - (arr_9 [i_3 + 1] [i_0 + 2])))));
                        arr_10 [i_2] [10U] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) min((arr_8 [i_1] [i_1]), (((/* implicit */long long int) arr_5 [i_0])))))) ? ((~((~(var_10))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    {
                        var_19 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_11 [i_0 + 1])) ? (arr_11 [i_0 + 2]) : (arr_11 [i_0 - 1])))));
                        var_20 = ((/* implicit */unsigned char) ((((arr_17 [i_0 + 1]) <= (arr_17 [i_0 + 1]))) ? (((((((/* implicit */_Bool) arr_9 [i_6] [i_0 - 1])) ? (((/* implicit */int) arr_15 [1U])) : (((/* implicit */int) var_4)))) | (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 2])))) : ((+((-(((/* implicit */int) var_14))))))));
                    }
                } 
            } 
        } 
        arr_18 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_15 [i_0]), (var_4)))) ? (min((((/* implicit */long long int) arr_15 [i_0])), (arr_6 [i_0] [i_0 + 1]))) : (((-5875397241949830008LL) - (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            for (long long int i_8 = 2; i_8 < 16; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 2; i_10 < 15; i_10 += 2) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                                arr_29 [(short)10] [i_7] [i_7] [i_9] [i_10 + 1] = ((/* implicit */long long int) arr_25 [i_0 - 1] [i_0] [i_0 + 2] [i_7]);
                            }
                        } 
                    } 
                    var_22 = (~(((((/* implicit */_Bool) arr_16 [i_7] [i_7])) ? (arr_14 [i_7] [i_7] [i_0 + 2] [17U]) : (arr_12 [i_0] [i_7] [i_0 + 2]))));
                    var_23 = (-((+(((/* implicit */int) (unsigned char)16)))));
                }
            } 
        } 
        var_24 += ((/* implicit */int) ((((/* implicit */_Bool) min((arr_28 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2] [(unsigned char)10]), (arr_28 [i_0 - 1] [2U] [i_0 + 2] [2U] [i_0 + 2] [8LL])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [16LL] [i_0]))) : (((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0] [i_0])))))));
    }
    for (unsigned char i_11 = 1; i_11 < 16; i_11 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) max((-3388264245158604610LL), (((/* implicit */long long int) (unsigned char)144))));
        arr_33 [i_11] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_17 [i_11 + 2])) ? (((/* implicit */int) arr_27 [i_11 + 2] [i_11 + 1] [i_11 - 1] [5LL] [i_11])) : (((/* implicit */int) arr_27 [i_11 + 2] [i_11 + 2] [i_11 + 2] [i_11] [i_11]))))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 1; i_12 < 17; i_12 += 1) 
        {
            for (long long int i_13 = 4; i_13 < 15; i_13 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        arr_40 [i_11] [i_11] [i_12] [i_12] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_12 + 1] [i_13 - 4] [i_11 + 1] [i_14] [i_11 + 2])) ? (((/* implicit */int) arr_27 [i_12 + 1] [i_13 - 4] [i_11 + 1] [i_13 - 4] [14U])) : (((/* implicit */int) arr_27 [i_12 + 1] [i_13 - 4] [i_11 + 1] [i_14] [i_14]))));
                        arr_41 [i_11 + 2] [i_11] [i_13] [i_13] = -5576596411095340288LL;
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        for (long long int i_16 = 0; i_16 < 18; i_16 += 3) 
                        {
                            {
                                arr_49 [i_11] [(_Bool)1] [i_16] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)212))) * (0LL)))) ? (((/* implicit */int) (unsigned short)9967)) : (((/* implicit */int) (unsigned char)173))))));
                                var_26 = (((-(((/* implicit */int) (unsigned char)83)))) & (((arr_22 [i_11] [i_11]) ? (((/* implicit */int) arr_1 [i_16] [i_12 - 1])) : (((/* implicit */int) arr_31 [i_12 - 1] [i_12 - 1])))));
                                var_27 += ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ (((((/* implicit */_Bool) 4323503785285918841LL)) ? (arr_48 [i_11] [i_12] [i_13 - 2] [13U] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [(unsigned char)10])))))))));
                                var_28 = ((/* implicit */unsigned int) ((arr_9 [i_13] [i_16]) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_11 - 1] [i_11 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_12] [i_12] [i_15] [i_16]))) : (arr_16 [i_11] [i_12 + 1]))))))))));
                            }
                        } 
                    } 
                    var_29 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [4LL] [i_11 + 2] [i_12 - 1] [i_13])) || (((/* implicit */_Bool) var_2)))))) ^ ((+(((arr_36 [i_13] [i_12] [(unsigned char)13] [i_11]) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_9 [i_11 + 1] [i_12])))))));
                }
            } 
        } 
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (+(((/* implicit */int) (unsigned char)173)))))));
        arr_50 [i_11] = ((/* implicit */unsigned char) min(((~(arr_20 [i_11] [i_11 + 2]))), (((((/* implicit */_Bool) arr_20 [i_11] [i_11 - 1])) ? (arr_20 [i_11] [i_11 - 1]) : (arr_20 [i_11] [i_11 + 2])))));
    }
    for (unsigned char i_17 = 1; i_17 < 16; i_17 += 1) /* same iter space */
    {
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_31 [i_17 - 1] [i_17 + 1]))))) ? (min((((((/* implicit */_Bool) arr_24 [(short)12] [8LL] [i_17] [i_17])) ? (((/* implicit */int) arr_19 [i_17 + 2] [0U])) : (((/* implicit */int) var_8)))), ((+(((/* implicit */int) var_12)))))) : ((+(((/* implicit */int) var_12)))))))));
        /* LoopSeq 4 */
        for (unsigned short i_18 = 1; i_18 < 16; i_18 += 2) 
        {
            arr_56 [5U] [i_18] [i_18 - 1] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_22 [i_18] [i_18]))))));
            arr_57 [i_18] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_17 + 2]))) | (arr_26 [i_17] [i_18 + 2] [i_17 - 1] [i_18])))) ? ((-(arr_0 [i_18 - 1] [i_17]))) : (arr_0 [i_17 + 1] [i_17]));
            arr_58 [i_18] = ((/* implicit */long long int) arr_4 [i_17] [i_17]);
            arr_59 [i_18] [i_18] [1LL] = ((/* implicit */int) min((((arr_28 [i_17] [i_18 + 2] [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_18]) | (arr_28 [i_18] [i_18 - 1] [i_17 + 2] [i_17 + 2] [i_17] [i_18]))), (arr_0 [8U] [i_17 + 2])));
        }
        for (unsigned short i_19 = 2; i_19 < 16; i_19 += 2) 
        {
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-32753)))))))) % (arr_12 [i_17] [i_19] [i_17])));
            var_33 = ((/* implicit */long long int) ((((/* implicit */long long int) (+((+(((/* implicit */int) arr_36 [7LL] [i_19] [i_17 + 2] [i_17]))))))) != ((+(arr_0 [i_17 + 2] [i_19 + 2])))));
            var_34 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_19 + 2] [i_17 + 1]) % (var_11)))) ? ((-(arr_0 [i_19 - 1] [i_17 - 1]))) : (((((/* implicit */_Bool) arr_0 [i_19 + 1] [i_17 + 2])) ? (arr_0 [i_19 + 1] [i_17 - 1]) : (arr_0 [i_19 + 2] [i_17 + 1])))));
        }
        for (int i_20 = 0; i_20 < 18; i_20 += 1) 
        {
            var_35 += (!(((/* implicit */_Bool) 678859056)));
            var_36 = ((/* implicit */unsigned int) arr_43 [i_17] [i_17] [(_Bool)1] [(short)11] [i_17 + 2] [(unsigned short)9]);
        }
        for (long long int i_21 = 0; i_21 < 18; i_21 += 1) 
        {
            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((long long int) ((long long int) arr_44 [(_Bool)1] [8LL] [i_17 - 1]))))));
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 18; i_22 += 1) 
            {
                for (unsigned char i_23 = 4; i_23 < 16; i_23 += 2) 
                {
                    {
                        arr_76 [10U] [i_21] = ((/* implicit */unsigned char) (-(((max((((/* implicit */long long int) (_Bool)1)), (var_10))) % (((/* implicit */long long int) max((((/* implicit */unsigned int) var_14)), (arr_67 [i_21]))))))));
                        var_38 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)173)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_17] [i_17])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_55 [i_17] [i_23])))))))) : (arr_28 [i_17] [i_21] [4U] [i_17] [i_23] [i_23])));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_24 = 0; i_24 < 18; i_24 += 2) 
                        {
                            var_39 = ((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_21] [i_17 + 1]))));
                            arr_81 [i_17] [i_21] [i_21] [i_23 - 2] [i_24] [i_23] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_74 [14LL] [i_24] [i_21] [i_23] [i_21])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_23] [i_23]))) & (arr_75 [i_21] [i_21] [i_22]))) : (((/* implicit */unsigned int) -216154528))));
                            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_36 [i_22] [i_21] [i_23 - 4] [(_Bool)1])))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_25 = 0; i_25 < 18; i_25 += 1) 
                        {
                            var_41 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_25 [i_17] [i_17] [i_23 - 2] [i_21])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_72 [2LL] [2LL] [i_22] [i_23]))))));
                            arr_84 [i_21] [i_21] [i_22] [i_21] [i_21] = ((/* implicit */short) ((long long int) 8279233249435966976LL));
                            var_42 = (!(arr_71 [i_17] [i_17 - 1] [i_23 - 3] [i_21]));
                        }
                    }
                } 
            } 
        }
    }
    var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14))))))) && (((/* implicit */_Bool) var_12))));
    var_44 = max((((/* implicit */long long int) var_12)), (((min((((/* implicit */long long int) var_5)), (var_11))) | (((/* implicit */long long int) ((/* implicit */int) var_4))))));
}
