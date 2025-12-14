/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150257
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 4320750144764612352ULL))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((unsigned int) 4294967290U));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    arr_11 [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned char) (((_Bool)1) ? (540431955284459520ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4096)))));
                    var_16 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) 4294967290U)) : (9151328763605854621LL)));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((int) (_Bool)1))));
                        var_17 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                        arr_16 [(short)1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)896)) : (((/* implicit */int) (unsigned char)71))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_19 [i_4] = ((/* implicit */short) ((_Bool) (((_Bool)1) ? (12348374839511158043ULL) : (((/* implicit */unsigned long long int) -6652645136759771995LL)))));
                        arr_20 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */long long int) 18446744073709551605ULL);
                    }
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) 6U));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            {
                                var_18 *= ((((/* implicit */_Bool) 98549909U)) ? (((/* implicit */long long int) 4006378915U)) : ((+(-6574728144107753887LL))));
                                arr_31 [i_0] [i_5] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)30))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_35 [i_5] = ((/* implicit */unsigned long long int) ((short) (short)6001));
                        arr_36 [i_0] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) (unsigned char)0)))));
                        arr_37 [i_5] = ((/* implicit */unsigned short) (((_Bool)1) ? (6574728144107753854LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
    {
        var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) (_Bool)1)))))), ((+((+(98549909U)))))));
        var_20 = ((/* implicit */unsigned char) min((((long long int) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */unsigned long long int) 6567410991149399941LL)) : (10267737485408870940ULL)))), (((/* implicit */long long int) ((short) -530200597)))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) ((short) (short)6010))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 2147321407)))) : (((long long int) (unsigned char)143)))), (((/* implicit */long long int) min((13U), (((/* implicit */unsigned int) (-2147483647 - 1))))))));
        var_22 = (+(max((4260607557632LL), (((/* implicit */long long int) (unsigned short)2310)))));
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
    {
        arr_45 [i_12] = ((short) 122880U);
        arr_46 [i_12] [i_12] = ((/* implicit */short) (-(((/* implicit */int) (short)-6001))));
    }
    var_23 = ((/* implicit */unsigned char) (-((-((-(((/* implicit */int) (unsigned short)65532))))))));
    var_24 = ((/* implicit */short) min((((/* implicit */long long int) ((_Bool) (unsigned char)63))), (((((/* implicit */_Bool) (unsigned short)46500)) ? (min((((/* implicit */long long int) (unsigned short)0)), (4260607557632LL))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    var_25 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 1) 
                    {
                        for (long long int i_17 = 0; i_17 < 15; i_17 += 2) 
                        {
                            {
                                arr_58 [i_13] [i_14] [i_15] [(unsigned short)13] [i_17] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)6001))));
                                arr_59 [(unsigned short)4] [(unsigned short)4] [4ULL] [4ULL] [i_17] = ((/* implicit */unsigned int) (-((-((+(((/* implicit */int) (unsigned short)65526))))))));
                            }
                        } 
                    } 
                    arr_60 [i_14] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)255))))));
                    arr_61 [i_13 - 1] [14LL] [14LL] [i_14] = ((/* implicit */_Bool) (-((-(max((((/* implicit */unsigned long long int) (unsigned short)39966)), (18219843212436422554ULL)))))));
                }
            } 
        } 
    } 
}
