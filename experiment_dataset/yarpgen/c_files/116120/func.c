/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116120
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_4] &= min((max((((((/* implicit */_Bool) arr_2 [i_4] [i_4])) ? (4030339451U) : (3648275014U))), (arr_13 [i_3 + 2] [i_1] [i_0 - 1] [i_1] [i_0]))), (min((675982527U), (arr_0 [i_0 + 1]))));
                                var_14 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((9U) >= (3484928401U))))) ^ ((~(arr_14 [i_4] [i_3] [i_2] [i_1] [i_0])))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [i_0])) ? (arr_13 [i_0] [i_0] [i_0 + 1] [i_3] [i_0 - 2]) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 2]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_3] [i_3])) ? (var_1) : (1702891253U)))) ? (arr_14 [6U] [i_0] [i_0] [i_0 + 1] [i_0]) : (min((var_8), (arr_1 [i_2]))))));
                                var_15 = arr_3 [i_0] [i_1] [i_3];
                            }
                        } 
                    } 
                    var_16 = var_13;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_17 = ((((/* implicit */_Bool) arr_9 [i_0 + 1])) ? (arr_17 [i_0 - 2] [i_1]) : (3822763582U));
                        arr_18 [i_2] [i_0] = ((arr_13 [i_0 - 1] [i_2] [i_0 - 2] [i_2] [i_0 - 1]) / (4294967291U));
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((arr_19 [i_0] [i_6] [i_6] [i_0 + 1] [i_0 + 1] [i_1]) < (arr_0 [i_0 - 2])));
                            var_19 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3524039904U))));
                            var_20 = ((((((/* implicit */_Bool) var_6)) ? (1029029567U) : (arr_13 [i_0] [i_1] [i_2] [i_6] [i_1]))) - (arr_13 [i_6] [i_6] [i_2] [i_6] [i_0]));
                            arr_22 [i_1] [i_1] [i_1] [8U] [i_2] [i_5] [i_1] &= arr_4 [i_2];
                        }
                        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            var_21 += (-(0U));
                            arr_26 [i_7] [i_1] [i_1] [i_1] [i_2] [i_5] [i_1] = ((unsigned int) arr_2 [i_0] [i_0 - 2]);
                            arr_27 [i_0] [i_7] [i_0 + 1] [i_0] = arr_24 [i_0] [i_7] [i_0 - 2] [i_5] [i_7] [i_1] [i_5];
                        }
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            var_22 = ((((/* implicit */_Bool) ((unsigned int) 472203724U))) ? (arr_25 [i_8]) : (var_9));
                            var_23 *= ((3822763577U) * (((((/* implicit */_Bool) 337233201U)) ? (3957734094U) : (3822763577U))));
                        }
                        var_24 = ((/* implicit */unsigned int) max((var_24), (2988184276U)));
                    }
                    for (unsigned int i_9 = 2; i_9 < 12; i_9 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((unsigned int) ((2315599318U) + (3822763582U)))) != (((((/* implicit */_Bool) var_9)) ? (arr_30 [i_9 + 1] [i_0 - 1]) : (var_5))))))));
                        var_26 = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((arr_30 [i_0] [i_1]) << (((var_7) - (1146798724U)))))) ? (3104373373U) : (var_9))) : (10U));
                        var_27 = 4294967292U;
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_10 = 4; i_10 < 12; i_10 += 1) 
        {
            for (unsigned int i_11 = 3; i_11 < 12; i_11 += 3) 
            {
                {
                    var_28 *= (((+(arr_36 [i_0 + 1]))) ^ (((unsigned int) 3822763571U)));
                    var_29 = arr_37 [i_10] [i_10] [i_0];
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((((1080280386U) | (3957734085U))) % ((-(((var_0) % (arr_24 [i_10] [i_0] [i_10] [i_10] [i_10] [i_10 - 3] [i_10 - 2])))))))));
                }
            } 
        } 
        arr_40 [i_0] = arr_3 [i_0 + 1] [i_0] [i_0];
    }
    var_31 = (-(337233212U));
}
