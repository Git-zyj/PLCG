/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159101
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
    var_14 = ((/* implicit */int) 1119874444U);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), (min((((int) max((arr_3 [i_0] [i_1]), (-1)))), (736262320)))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    arr_9 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967281U)) ? (1148577761) : (1148577761)))) / (1980065343U)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0 + 1] [i_3] [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned int) 4193280);
                                var_16 = ((int) ((int) 4294967278U));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_17 = ((((/* implicit */_Bool) min(((+(1196349533))), (-228459121)))) ? (((/* implicit */unsigned int) ((((0) << (((arr_13 [i_0] [i_1] [i_2] [i_5] [i_6]) + (732638407))))) | (((-1192759733) | (524287)))))) : ((-(min((0U), (((/* implicit */unsigned int) -1693082974)))))));
                                arr_22 [i_0] [i_1] [i_0] [i_5] [i_2] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_12 [i_1])) | (4294967276U)))) ? (4294967265U) : (max((((((/* implicit */unsigned int) arr_10 [16U] [i_1] [i_6] [i_5 - 1] [i_1] [16U])) ^ (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 27U)) || (((/* implicit */_Bool) var_12)))))))));
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) 1636938062)) ? (4294967284U) : (arr_5 [i_2] [i_1] [i_2] [i_5])))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                {
                    var_19 = 4294967257U;
                    var_20 = var_13;
                }
                for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                {
                    arr_29 [i_0] [i_0] [i_1] [i_1] |= ((/* implicit */int) 4294967265U);
                    arr_30 [i_8] = ((unsigned int) 2047787217);
                    arr_31 [i_0] [i_1] [i_8] = ((/* implicit */int) ((unsigned int) ((((((/* implicit */_Bool) 3199787732U)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (4294967278U))) * (max((arr_8 [i_8] [i_1] [i_0]), (((/* implicit */unsigned int) -967893473)))))));
                }
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 23; i_10 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_11 = 2; i_11 < 21; i_11 += 2) 
                        {
                            arr_42 [i_0] [i_9] [i_0 - 1] [i_0] [i_9] = ((unsigned int) arr_3 [i_11 - 1] [i_0 + 1]);
                            arr_43 [i_9] = ((/* implicit */int) 3199787732U);
                            var_21 ^= 351041389;
                        }
                        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            var_22 ^= -39514729;
                            arr_46 [i_0] [i_0] [i_1] [i_9] [i_10 - 3] [i_12] |= ((/* implicit */unsigned int) 736894824);
                        }
                        arr_47 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) -211814808)) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])))) ? (((((/* implicit */_Bool) 1924591911)) ? (4294967262U) : (var_12))) : (((/* implicit */unsigned int) -1))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        for (unsigned int i_14 = 1; i_14 < 20; i_14 += 2) 
                        {
                            {
                                arr_53 [i_0] [i_9] = ((unsigned int) -285029885);
                                var_23 = min((((((/* implicit */_Bool) ((int) 3199787732U))) ? (((((/* implicit */_Bool) 991231617U)) ? (2097144975U) : (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) arr_50 [i_0] [i_0 - 2] [i_0 + 1])))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) 4193280)) : (var_4))) >= (1217225865U)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_24 = ((/* implicit */int) min((((unsigned int) ((1072490705U) ^ (4294967276U)))), (((/* implicit */unsigned int) ((((4294967295U) >= (((/* implicit */unsigned int) var_10)))) ? (var_11) : (((((/* implicit */_Bool) var_11)) ? (var_5) : (0))))))));
    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((var_0) | (4294967295U)))) ? (((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) 351041389)) : (234881024U)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 1217225865U)) ? (4294967276U) : (((/* implicit */unsigned int) var_7)))) != (((unsigned int) var_12)))))))))));
}
