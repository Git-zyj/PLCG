/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157337
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
    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)47657))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [(_Bool)1] [i_2] [i_3] [i_3 + 1] [i_3 - 1] [i_2] &= ((((/* implicit */_Bool) ((int) var_14))) ? (min((((/* implicit */unsigned long long int) min((arr_0 [i_1] [i_1]), (arr_0 [i_0] [i_1])))), (((((/* implicit */_Bool) (unsigned short)47651)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [(_Bool)1] [i_0] [(_Bool)1])) : (var_16))))) : (((/* implicit */unsigned long long int) max((((var_14) ? (arr_7 [i_1] [i_4]) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) (unsigned short)47685))))));
                                var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0])), ((unsigned short)17860))))));
                                var_19 -= ((/* implicit */_Bool) var_10);
                                var_20 = ((/* implicit */unsigned short) ((short) ((arr_8 [(unsigned char)3] [i_3 - 1] [i_3 + 2] [i_3 + 2]) ? (((/* implicit */int) (unsigned short)17906)) : (((/* implicit */int) (unsigned char)127)))));
                                var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17885)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((int) var_10))) : (min((var_9), (((/* implicit */unsigned long long int) arr_3 [i_1])))))) : (6285519427898313058ULL)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (17888230096274838075ULL)));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)17885)) ? (max((arr_17 [i_0] [i_1] [i_2] [i_5] [i_6]), (((/* implicit */unsigned long long int) (unsigned char)33)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171)))));
                                arr_18 [i_0] [i_1] [i_1] [i_2] [14ULL] [17ULL] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)17879))))) ? (((/* implicit */int) arr_9 [i_0] [i_6])) : ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= ((~(0ULL))))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9041787530399498993LL)) && (((/* implicit */_Bool) var_10)))))) : (min((var_9), (((/* implicit */unsigned long long int) arr_2 [i_0] [(short)5] [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        var_24 *= (unsigned short)17860;
                        var_25 *= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)34)) ? (var_5) : (((/* implicit */int) arr_5 [i_0]))))), (((((/* implicit */_Bool) (unsigned short)16936)) ? (((/* implicit */unsigned long long int) var_4)) : (13740776128553458533ULL)))))) ? (min((((/* implicit */unsigned long long int) var_1)), (142288452381307742ULL))) : (arr_11 [i_2] [i_0] [i_2] [14ULL] [i_7]));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_12))));
    }
    for (unsigned short i_8 = 1; i_8 < 22; i_8 += 4) 
    {
        var_27 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_23 [i_8])))));
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                for (unsigned char i_11 = 3; i_11 < 20; i_11 += 2) 
                {
                    {
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (unsigned short)17900)) : (((/* implicit */int) var_3)))))))))));
                        arr_32 [i_8] [(_Bool)1] [i_8] [2ULL] = 12222289348182016300ULL;
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
    {
        arr_37 [i_12] [i_12] = ((/* implicit */int) ((_Bool) (unsigned short)65521));
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_16 [i_12] [(unsigned short)16] [i_12] [i_12] [i_12] [14ULL] [(unsigned short)16]))));
        var_30 = ((/* implicit */unsigned short) max((var_30), (min(((unsigned short)65507), (((/* implicit */unsigned short) arr_0 [i_12] [i_12]))))));
        var_31 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_12]))))), (9390871986769730454ULL)));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 25; i_13 += 4) 
    {
        var_32 -= ((var_6) ? (((((/* implicit */_Bool) arr_39 [i_13])) ? (8869364444358835649ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [(unsigned char)4]))))) : (((/* implicit */unsigned long long int) (-(1274693285)))));
        var_33 &= ((((/* implicit */_Bool) ((unsigned char) var_16))) ? (arr_41 [i_13]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_13]))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 2) 
    {
        arr_45 [i_14] [i_14] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)33550))));
        var_34 *= min((13576813573348545161ULL), (((/* implicit */unsigned long long int) (unsigned short)17878)));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) 
    {
        arr_50 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16939))) : (arr_1 [i_15])));
        arr_51 [i_15] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0))));
    }
    for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 1) 
    {
        arr_56 [i_16] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((min((arr_38 [(_Bool)1]), (((/* implicit */unsigned short) (unsigned char)224)))), (((/* implicit */unsigned short) var_8)))))));
        arr_57 [i_16] [i_16] = ((/* implicit */unsigned char) (~(((var_6) ? (((/* implicit */int) arr_39 [i_16])) : (((/* implicit */int) arr_38 [i_16]))))));
    }
    var_35 = (!(((_Bool) (unsigned char)242)));
}
