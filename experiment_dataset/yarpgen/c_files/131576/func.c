/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131576
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
    var_16 = ((long long int) (~(((/* implicit */int) var_9))));
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4566))) >= (-1218864391990779470LL))))));
    var_18 = ((/* implicit */long long int) ((var_11) >= (((/* implicit */long long int) ((/* implicit */int) ((var_7) < (var_13)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_19 -= ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_10));
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                var_20 = ((/* implicit */long long int) min((var_20), (1218864391990779470LL)));
                arr_11 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned short)0))))));
            }
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_21 = ((((/* implicit */_Bool) -1218864391990779468LL)) ? (((((/* implicit */_Bool) var_10)) ? (1218864391990779470LL) : (arr_15 [11LL] [i_3] [i_3] [i_4] [i_4] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))));
                        arr_18 [11LL] = ((/* implicit */unsigned short) ((1218864391990779471LL) * (((arr_15 [i_0] [i_1] [i_4 + 2] [i_4] [i_0] [i_0]) / (arr_8 [i_0] [i_1] [12LL])))));
                    }
                } 
            } 
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_5 [i_1] [i_1 - 1]) >> (((1218864391990779470LL) - (1218864391990779425LL)))));
        }
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
        {
            arr_23 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_5]))));
            var_22 = (unsigned short)37359;
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_9 [i_0]);
        }
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 1; i_7 < 21; i_7 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    arr_34 [i_0] [6LL] [i_7] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)56298))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)9970)) ? (arr_12 [i_7 + 1]) : (arr_12 [i_7 - 1])));
                    arr_35 [i_6] [19LL] [i_7 - 1] [i_6] [i_6] [i_0] = 9079256848778919936LL;
                }
                for (unsigned short i_9 = 2; i_9 < 20; i_9 += 3) 
                {
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (~(((((/* implicit */_Bool) -5655854459659000027LL)) ? (((/* implicit */int) (unsigned short)33146)) : (((/* implicit */int) (unsigned short)21026)))))))));
                    var_25 = ((((/* implicit */_Bool) -1218864391990779454LL)) ? (-1218864391990779471LL) : (-1218864391990779468LL));
                }
                for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
                {
                    arr_40 [i_0] [i_6] [i_0] [i_7] [i_0] [i_10] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)9267)))) ? (arr_22 [i_0] [i_7 + 1]) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_6] [i_7]))) : (-8889421796985625053LL)))));
                    arr_41 [i_0] = var_0;
                }
                for (long long int i_11 = 3; i_11 < 19; i_11 += 4) 
                {
                    var_26 ^= ((/* implicit */unsigned short) ((((arr_42 [i_7]) + (9223372036854775807LL))) << (((((((arr_38 [i_11] [i_6] [i_6] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22632))))) + (2713187032902393770LL))) - (58LL)))));
                    var_27 = ((/* implicit */unsigned short) (-(-3749885633688728484LL)));
                }
                /* LoopSeq 1 */
                for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    var_28 = arr_9 [i_7 + 1];
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (-(((/* implicit */int) arr_39 [i_0] [i_6] [i_7] [i_12] [i_0])))))));
                    arr_46 [i_0] [i_12] [i_7] [i_0] [i_7] [i_12] |= ((((/* implicit */_Bool) arr_8 [i_7 + 1] [i_7 + 1] [i_7])) ? (arr_8 [i_7 - 1] [i_7 - 1] [i_12]) : (arr_8 [i_7 - 1] [i_7 - 1] [i_7]));
                    var_30 ^= ((/* implicit */long long int) ((unsigned short) arr_31 [i_7 + 1] [i_7 + 1] [i_7 + 1]));
                }
            }
            /* LoopNest 2 */
            for (unsigned short i_13 = 2; i_13 < 20; i_13 += 4) 
            {
                for (long long int i_14 = 4; i_14 < 18; i_14 += 1) 
                {
                    {
                        var_31 = (~(((arr_38 [i_0] [i_0] [i_0] [i_0]) & (-1218864391990779468LL))));
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) var_8))))))));
                    }
                } 
            } 
            arr_51 [i_0] = 8193854216485061003LL;
        }
        var_33 = -7007940460749874091LL;
        var_34 += ((((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_2))) | (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (long long int i_15 = 3; i_15 < 9; i_15 += 1) 
    {
        arr_56 [i_15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) max((var_15), ((unsigned short)29065)))), (max((4843113558685531874LL), (-1218864391990779462LL))))))));
        var_35 = min((arr_8 [i_15] [i_15] [i_15]), (((long long int) (unsigned short)2542)));
        var_36 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65535))));
    }
}
