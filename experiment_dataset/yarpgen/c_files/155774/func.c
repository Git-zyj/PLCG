/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155774
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            var_12 ^= ((-1612591869) | (arr_2 [i_1 - 1] [i_0]));
            var_13 = ((((/* implicit */_Bool) -1093590955)) ? (((1844835920) ^ (-1033532790))) : (var_10));
        }
        var_14 = ((int) ((((/* implicit */_Bool) 1605850733)) ? (-792135669) : (-880434770)));
        var_15 = ((int) ((16383) | (1927359787)));
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_16 = var_2;
        var_17 = ((((int) var_6)) & (((((/* implicit */_Bool) 1844835920)) ? (1901025501) : (-1154328191))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            var_18 = arr_2 [2] [i_3];
            var_19 = var_5;
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                var_20 = ((((/* implicit */_Bool) -1033532800)) ? (arr_13 [i_2] [3] [i_2] [i_2]) : (74399183));
                var_21 = 1605850741;
            }
            for (int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                var_22 = (+((-(792135668))));
                /* LoopSeq 2 */
                for (int i_6 = 4; i_6 < 8; i_6 += 4) 
                {
                    var_23 = ((((((/* implicit */_Bool) -591236905)) ? (-781368285) : ((-2147483647 - 1)))) - (((arr_7 [i_3]) ^ (-1892883163))));
                    arr_21 [i_6 - 1] [i_2] [i_2] = ((((/* implicit */_Bool) -13)) ? (-1605850749) : (-1033532827));
                }
                for (int i_7 = 3; i_7 < 8; i_7 += 2) 
                {
                    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) -1))));
                    var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-1154328178) : (var_0)))) ? (((/* implicit */int) ((var_10) >= (1350989239)))) : (-1758875335)))));
                    var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483635)) ? (arr_16 [i_5] [i_7]) : (arr_24 [i_2])))) ? ((-(-1139908487))) : (((1605850763) ^ (var_9))));
                }
                var_27 = var_0;
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            var_28 = (-(((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_8])) ? (arr_25 [6] [6] [i_8]) : (897282510))));
            var_29 = (+(1927359786));
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        {
                            arr_34 [i_2] = (((~(arr_19 [i_2] [7] [8] [8]))) + (((int) arr_17 [i_2] [i_9] [i_2])));
                            var_30 &= (~(-1195483077));
                            var_31 = ((int) ((int) 1756748626));
                        }
                    } 
                } 
                var_32 |= ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (arr_4 [i_2] [i_8] [i_9]) : (var_4));
                arr_35 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) arr_23 [i_2])) ? (arr_3 [i_8] [i_2]) : (((int) -1781099267)));
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    var_33 = ((int) (!(((/* implicit */_Bool) -1769321675))));
                    arr_38 [i_2] [i_2] [9] [i_2] [3] = arr_25 [i_2] [i_8] [i_12];
                    var_34 = (-(-1927359763));
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        arr_41 [i_2] [i_8] [i_8] [i_2] [i_13] = ((/* implicit */int) ((arr_5 [i_2]) >= (var_2)));
                        var_35 = ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2])) ? (((((/* implicit */_Bool) var_7)) ? (-1614862) : ((-2147483647 - 1)))) : ((+(arr_20 [i_2] [i_9] [3] [i_13]))));
                        var_36 = ((/* implicit */int) min((var_36), ((-(((((/* implicit */_Bool) arr_36 [i_9])) ? (var_1) : (-1152864559)))))));
                        var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (var_8) : (1941222426)))) ? (var_6) : (((/* implicit */int) ((arr_4 [i_12] [i_8] [i_8]) >= (arr_16 [i_2] [6])))));
                    }
                }
            }
            arr_42 [i_2] [i_2] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 268367948)) ? (-2147483638) : (1154328189)))) ? (((((/* implicit */_Bool) var_11)) ? (arr_33 [i_2] [i_8] [i_2] [i_8] [i_8]) : (arr_11 [i_2] [i_8] [i_2] [i_2]))) : (((/* implicit */int) ((((/* implicit */_Bool) 31698132)) || (((/* implicit */_Bool) var_8))))));
            var_38 = ((((/* implicit */_Bool) 847383418)) ? (1927359777) : ((-2147483647 - 1)));
        }
    }
    var_39 = ((int) 1154328192);
}
