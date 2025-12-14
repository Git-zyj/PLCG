/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148779
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
    var_11 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 *= (!(min((((var_4) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))), (max((var_0), (var_7))))));
        var_13 = ((/* implicit */unsigned char) (((~(arr_0 [i_0] [i_0]))) >> (((((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3))) | (((/* implicit */unsigned long long int) 324571160U)))) - (324571157ULL)))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) * (arr_0 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))) : (arr_0 [i_0] [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))) : (15210277307840999182ULL)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_1])))) % (((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_2)))) % (((((/* implicit */_Bool) 10685763037128373270ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
            {
                for (unsigned char i_4 = 4; i_4 < 21; i_4 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) (((!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_7 [i_1])))))) ? (((/* implicit */int) (!(((var_7) && (((/* implicit */_Bool) (unsigned char)251))))))) : (((/* implicit */int) ((((/* implicit */_Bool) 3236466765868552433ULL)) || (((/* implicit */_Bool) (unsigned char)4)))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (arr_11 [i_1] [i_1] [i_1])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_3])), ((unsigned short)36755)))))))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_14 [(_Bool)1]))));
                            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 + 3] [i_3 + 2] [i_3 + 3])) ? (((/* implicit */int) arr_9 [i_3 + 2] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) var_4)))))));
                            var_19 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_8 [i_1] [i_3 + 2])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [(_Bool)1])) << (((((/* implicit */int) arr_14 [i_2])) - (233)))))) < ((+(arr_16 [i_1] [i_2] [i_2] [i_3] [i_2] [i_1]))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4))))) << (((/* implicit */int) arr_10 [i_3 + 2] [i_4] [i_4] [i_4 - 2]))));
                            var_21 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (arr_11 [i_4 - 2] [4ULL] [i_1]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10685763037128373270ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) : (6669799793138100972LL))))));
                        }
                        for (unsigned char i_7 = 4; i_7 < 19; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_3 + 2] [i_3] [i_3] [i_3 + 1] [i_3]))));
                            arr_21 [i_1] [i_1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -6669799793138100977LL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)237))))) : (((((/* implicit */_Bool) arr_18 [i_1] [i_2] [i_7 - 2] [i_4 + 1] [19ULL])) ? (arr_18 [i_1] [i_2] [i_7 - 3] [i_4 - 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_3 + 1] [i_4 - 3] [i_7 - 2])))))));
                        }
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((((/* implicit */int) var_5)) | (((((/* implicit */int) arr_7 [i_1])) & (((/* implicit */int) (_Bool)0)))))) % (((/* implicit */int) (unsigned char)7)))))));
                    }
                } 
            } 
        } 
        var_24 ^= ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]))) : (0ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]))) != (10685763037128373270ULL))))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)4))));
                        var_26 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1]))))) <= (((/* implicit */int) var_4)));
                        arr_29 [i_1] [i_1] [i_1] [i_9] [i_10] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)12))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            {
                                arr_37 [i_9] [i_8] [2U] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 88216222U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_28 [i_1] [i_8] [i_1] [i_12]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_35 [i_9] [i_9])))) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_8] [i_9 - 1])) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_9 [i_1] [i_11] [i_11]))))))) : (((/* implicit */unsigned int) (+(((arr_4 [i_11]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_28 [i_1] [i_11] [i_12] [(unsigned char)11])))))))));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_9] [i_9 + 2] [i_9 + 2])) | (((/* implicit */int) arr_31 [i_9] [i_9 + 1] [i_9 + 4]))))) : (min((6669799793138100968LL), (((/* implicit */long long int) 1825374030U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 4) 
    {
        var_28 = ((/* implicit */long long int) 0ULL);
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(3236466765868552418ULL)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_33 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) : (arr_33 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_33 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) <= (arr_33 [i_13] [i_13] [i_13] [(unsigned short)2] [i_13] [i_13])))))));
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (unsigned char i_15 = 0; i_15 < 20; i_15 += 2) 
            {
                {
                    var_30 = arr_47 [i_13] [i_13] [i_14];
                    arr_49 [i_15] [i_15] [i_15] [i_15] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_11 [i_15] [i_14] [i_13]), (arr_11 [i_15] [i_14] [6ULL])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)48)) >> (((/* implicit */int) var_7))))) : (arr_34 [i_13] [i_14] [i_14] [i_15])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) arr_10 [i_13] [i_13] [i_14] [i_15])))) < (((/* implicit */int) (unsigned char)208)))))) : ((((!(arr_13 [i_15] [i_15]))) ? (((((/* implicit */_Bool) 15210277307840999182ULL)) ? (arr_40 [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_13] [i_13] [i_13]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [16LL] [16LL] [16LL] [i_15])))))));
                }
            } 
        } 
        arr_50 [i_13] = ((/* implicit */unsigned char) (-((((+(arr_1 [i_13]))) * (((/* implicit */long long int) (+(((/* implicit */int) arr_46 [i_13] [i_13] [i_13] [i_13])))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 1) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 1; i_19 < 10; i_19 += 1) 
                    {
                        for (unsigned char i_20 = 0; i_20 < 11; i_20 += 2) 
                        {
                            {
                                arr_64 [i_16] [i_17] [i_17] [i_17] [i_17] [i_19] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_56 [i_19 + 1])) <= (((/* implicit */int) arr_56 [i_19 - 1]))))) % ((-(((/* implicit */int) arr_56 [i_19 - 1]))))));
                                var_31 *= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_19]))))), (((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) var_3))) < (((/* implicit */int) arr_41 [i_19 - 1] [i_19 - 1]))))))));
                                var_32 = ((/* implicit */unsigned long long int) arr_51 [i_17]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)208)) ? (-6669799793138100969LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_18])) && (((/* implicit */_Bool) arr_45 [i_16] [i_17] [i_17]))))))));
                        var_34 = ((/* implicit */unsigned char) arr_38 [(unsigned char)2]);
                        var_35 = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_16]))));
                    }
                    var_36 = arr_44 [i_16] [(_Bool)1];
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_8))))) ? ((((-(((/* implicit */int) var_8)))) | (((/* implicit */int) var_7)))) : (((/* implicit */int) var_6))));
}
