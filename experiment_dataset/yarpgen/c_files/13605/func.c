/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13605
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
    for (unsigned short i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_19 += ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)191))));
                var_20 *= ((/* implicit */short) (+(max((8155018753627559568LL), (((/* implicit */long long int) (unsigned char)108))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_8), (var_16))))))) : ((-((~(var_14)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 23; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 22; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (unsigned short i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_22 = (+(((/* implicit */int) (unsigned char)148)));
                            var_23 = ((/* implicit */long long int) -1434571539);
                            arr_18 [7] [i_3] [i_4] [i_5] [i_6] |= ((/* implicit */short) ((((/* implicit */int) arr_8 [i_2 - 2] [i_3])) != (((/* implicit */int) arr_8 [i_2] [i_3 - 2]))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (-(((/* implicit */int) arr_15 [i_3] [i_6 + 1])))))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */int) ((((/* implicit */int) ((short) arr_11 [(unsigned short)9]))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_7 = 2; i_7 < 22; i_7 += 3) 
        {
            for (int i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                for (long long int i_9 = 1; i_9 < 21; i_9 += 2) 
                {
                    {
                        var_26 *= ((/* implicit */short) (+(68719476735LL)));
                        var_27 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2539))) / (-8733968864614146660LL))) >= (((/* implicit */long long int) arr_17 [i_2 - 2] [i_7 - 2] [i_8] [i_9]))));
                        var_28 *= ((/* implicit */unsigned char) arr_7 [i_2] [i_7] [i_9 + 3]);
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_7] [i_7 + 2] [i_7])) ? (-18575233501614877LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)191)))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        for (short i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            for (int i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                {
                    arr_34 [i_10] [i_12] = min((min((-18575233501614877LL), (68719476755LL))), (((/* implicit */long long int) -2096102954)));
                    var_30 = (unsigned short)59763;
                    var_31 -= ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) (short)3584)) || (((/* implicit */_Bool) -1383545091)))) ? (min((((/* implicit */long long int) var_0)), (-18575233501614894LL))) : (((/* implicit */long long int) 803914834)))), (((/* implicit */long long int) ((int) var_8)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_14 = 3; i_14 < 23; i_14 += 1) 
        {
            for (unsigned char i_15 = 0; i_15 < 24; i_15 += 3) 
            {
                for (unsigned short i_16 = 1; i_16 < 21; i_16 += 3) 
                {
                    {
                        arr_43 [i_13] [i_15] [i_15] [i_15] [i_16 - 1] = ((unsigned short) arr_16 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
                        arr_44 [i_13] [i_15] = ((/* implicit */unsigned short) ((arr_14 [(unsigned short)16] [i_14 - 2] [i_15]) >= (65970697666560LL)));
                    }
                } 
            } 
        } 
        var_32 ^= arr_35 [i_13];
    }
    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_18 = 0; i_18 < 24; i_18 += 4) 
        {
            for (short i_19 = 1; i_19 < 23; i_19 += 1) 
            {
                for (unsigned short i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    {
                        arr_57 [i_17] [i_18] [i_19] [i_20] [i_20] = ((/* implicit */long long int) (!(((((/* implicit */int) max((((/* implicit */unsigned short) arr_42 [21LL] [i_19] [i_19] [i_17])), ((unsigned short)8581)))) != (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (short)13934)))))))));
                        var_33 *= ((/* implicit */short) max(((~(((((/* implicit */_Bool) -2096102942)) ? (1481823146) : (((/* implicit */int) var_8)))))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)248)) || (((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) ^ (68719476750LL)))))))));
                        var_34 = ((/* implicit */unsigned short) max((var_34), ((unsigned short)25792)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_21 = 0; i_21 < 24; i_21 += 2) 
        {
            for (long long int i_22 = 0; i_22 < 24; i_22 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_23 = 2; i_23 < 21; i_23 += 2) 
                    {
                        for (short i_24 = 0; i_24 < 24; i_24 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((unsigned char) arr_19 [i_24] [i_24] [i_22])))))), (((144115188075855871LL) / (-18575233501614872LL)))));
                                var_36 = ((/* implicit */short) (-(-173604570388916761LL)));
                                var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)48540))));
                                arr_70 [i_17] [i_17] [i_17] [16LL] [i_17] = ((/* implicit */unsigned short) ((((var_18) >= (-2024887399))) ? (min((-4888740173004270660LL), (arr_62 [i_17] [i_21]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_62 [i_23 - 2] [i_24]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39723)))))))));
                            }
                        } 
                    } 
                    var_38 = ((unsigned short) ((arr_10 [i_17] [i_17] [i_17]) == (arr_10 [i_17] [i_21] [i_22])));
                }
            } 
        } 
    }
}
