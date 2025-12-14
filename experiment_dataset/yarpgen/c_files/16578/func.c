/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16578
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
            {
                arr_6 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0])) ? (arr_5 [i_0 - 3] [i_0 + 3] [i_0 + 3] [i_0]) : (arr_5 [i_0 - 3] [i_0 + 3] [i_0 - 4] [i_0]));
                var_18 = ((/* implicit */unsigned int) max((var_18), ((~((+(2953932033U)))))));
                arr_7 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) var_3)) ? (2421302391U) : (arr_3 [i_0 + 1] [i_0 - 4]));
            }
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
            {
                var_19 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_3]))));
                var_20 = (~(arr_0 [i_0 + 1]));
                arr_11 [i_0 + 1] [6U] [i_0 + 1] = var_6;
                arr_12 [i_0 - 4] [i_0 - 4] [i_1] [i_0 - 4] |= var_4;
            }
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
            {
                arr_15 [i_4] [i_4] [i_4] [i_4] = (~(var_1));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            arr_22 [i_0] [i_4] [i_4] [i_5] [i_6] = (+(1773148964U));
                            arr_23 [i_0] [i_0] [i_4] [i_5] [i_5] [i_1] [i_6] |= arr_21 [i_0] [i_1] [i_1] [i_1] [8U];
                            arr_24 [i_0] [i_0] [i_0] [5U] [i_4] [i_6] [i_6] = var_16;
                        }
                    } 
                } 
            }
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                arr_27 [i_0] [i_1] [i_7] [2U] = ((unsigned int) 35538022U);
                arr_28 [i_7] [i_0] [i_0] = ((/* implicit */unsigned int) (((-(arr_18 [i_1]))) > (arr_4 [i_1] [i_1] [i_0 - 1])));
                var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_0 + 4] [i_0 + 1] [i_0] [i_0 + 3]))));
            }
            arr_29 [i_0] [i_1] [i_1] = var_11;
            arr_30 [11U] [i_1] = arr_13 [i_0 - 3];
            arr_31 [i_1] = ((((/* implicit */_Bool) arr_16 [i_0] [5U] [i_1] [i_1] [i_1])) ? (var_17) : (arr_16 [i_1] [i_1] [i_0] [8U] [i_0]));
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                for (unsigned int i_9 = 2; i_9 < 10; i_9 += 2) 
                {
                    {
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((unsigned int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_11))));
                        arr_38 [5U] [i_1] [i_8] [i_1] = var_4;
                    }
                } 
            } 
        }
        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) max((var_22), (((((/* implicit */_Bool) min((arr_41 [5U] [i_0]), (var_9)))) ? (((((/* implicit */_Bool) 3075690521U)) ? (arr_14 [i_0 - 1] [i_0 - 2] [i_10]) : (((unsigned int) arr_41 [i_0] [i_10])))) : (arr_41 [i_0] [i_10])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                arr_44 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_10] [i_11] [i_0 + 1])) || (((/* implicit */_Bool) arr_5 [i_10] [i_10] [i_11] [i_0 + 1]))));
                var_23 = ((((/* implicit */_Bool) 315551306U)) ? (3335938604U) : (390152019U));
            }
            /* vectorizable */
            for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                arr_48 [i_0] [i_10] [i_12] = ((2756305868U) - (arr_4 [i_0 + 2] [i_0 - 3] [i_0 - 1]));
                arr_49 [i_0] [i_10] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                arr_50 [7U] [i_0] = ((unsigned int) (-(arr_17 [i_12] [i_12] [8U] [i_12] [i_12] [i_0])));
            }
        }
        arr_51 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0 + 4])) ? (0U) : (arr_0 [i_0 + 3]))) != (max((var_7), (var_11)))));
        var_24 ^= arr_43 [i_0] [i_0] [i_0];
        arr_52 [11U] = ((/* implicit */unsigned int) ((((unsigned int) arr_43 [i_0] [i_0] [i_0])) <= (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_15)) ? (var_0) : (arr_39 [i_0]))) : (((var_10) >> (((var_15) - (1124962392U)))))))));
    }
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) min((var_13), (var_6))))));
    /* LoopSeq 2 */
    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 4) 
    {
        arr_55 [i_13] = max((((((3904815277U) == (2931999691U))) ? (((((/* implicit */_Bool) 2600772705U)) ? (var_7) : (var_10))) : (var_9))), (max((((unsigned int) 2521818331U)), (1208367929U))));
        var_26 = ((/* implicit */unsigned int) min((var_26), (((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_53 [i_13]), (arr_54 [i_13] [i_13])))) ? (max((arr_54 [i_13] [i_13]), (471723356U))) : (((arr_54 [i_13] [i_13]) + (var_3)))))) ? (((((/* implicit */_Bool) 1925503228U)) ? (0U) : (3054711634U))) : (arr_54 [i_13] [i_13])))));
    }
    /* vectorizable */
    for (unsigned int i_14 = 3; i_14 < 22; i_14 += 1) 
    {
        var_27 ^= 820153540U;
        var_28 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 3823243912U))))));
        var_29 = ((((/* implicit */_Bool) 2147418112U)) ? (1531788546U) : (812044108U));
        arr_58 [i_14 + 1] = ((/* implicit */unsigned int) ((arr_57 [i_14]) == (var_1)));
    }
}
