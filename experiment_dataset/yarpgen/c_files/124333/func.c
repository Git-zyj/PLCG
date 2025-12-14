/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124333
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
    var_13 = min((((int) ((var_3) ? (((/* implicit */int) var_6)) : (var_4)))), (var_1));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = var_10;
        arr_3 [i_0] = (_Bool)1;
    }
    for (int i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        arr_8 [i_1] = (((((_Bool)1) && (arr_2 [i_1 - 1]))) || (arr_2 [i_1 + 2]));
        var_15 = ((min(((~(var_2))), (((/* implicit */int) var_12)))) <= (((max((arr_7 [i_1]), (var_1))) * (((/* implicit */int) var_11)))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_12)) / (arr_22 [i_3 + 1] [i_3 + 1] [i_3] [i_3])))));
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))))));
                                arr_23 [i_3] [i_5] [i_5] [i_4] [i_3] [i_3] = ((/* implicit */int) arr_12 [i_2] [i_3]);
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_14 [i_3 + 1] [i_3] [i_3 + 1]), (arr_14 [i_2] [i_3 + 1] [i_3 + 1])))) || (((/* implicit */_Bool) ((var_12) ? (arr_14 [i_3] [i_3] [i_3 + 1]) : (arr_14 [i_3] [i_3 + 1] [i_3 + 1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    for (int i_8 = 4; i_8 < 15; i_8 += 1) 
                    {
                        {
                            arr_28 [i_3] [i_3] [i_7] [i_8 + 1] = (~(((int) (-(var_0)))));
                            var_19 = ((((/* implicit */int) var_10)) - (var_8));
                            var_20 = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_24 [i_8 + 3] [i_3] [i_3 + 1]))))));
                            arr_29 [i_2] [i_2] [i_3] [i_8] = ((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2]);
                            var_21 = ((/* implicit */_Bool) var_7);
                        }
                    } 
                } 
                var_22 = ((((int) arr_4 [i_3 + 1] [i_3])) * (((/* implicit */int) min((arr_4 [i_3 + 1] [i_3 + 1]), (arr_4 [i_3 + 1] [i_3])))));
                arr_30 [i_3] [i_3] = ((/* implicit */int) (!((_Bool)1)));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        {
                            arr_37 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1872529611))) : (min((((/* implicit */int) arr_24 [i_2] [i_2] [i_9])), (arr_14 [i_2] [i_3] [i_3])))));
                            /* LoopSeq 1 */
                            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                            {
                                var_23 &= ((/* implicit */int) ((min((var_4), (min((var_4), (var_8))))) > (arr_32 [i_2] [i_3 + 1] [i_10])));
                                var_24 += ((/* implicit */int) var_3);
                            }
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) min((min((min((((/* implicit */int) var_3)), (arr_14 [i_2] [i_3 + 1] [i_9]))), (((/* implicit */int) (_Bool)1)))), (-2033078730))))));
                            var_26 = ((/* implicit */int) min((((((_Bool) var_3)) || (min((arr_34 [i_3] [i_9] [i_3 + 1] [i_3]), ((_Bool)1))))), (((((var_6) && (((/* implicit */_Bool) arr_32 [i_2] [i_3] [i_3])))) && (((/* implicit */_Bool) max((var_8), (-1872529612))))))));
                            var_27 = (~((-(max((arr_1 [i_2]), (((/* implicit */int) var_3)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_12 = 4; i_12 < 12; i_12 += 1) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (int i_16 = 1; i_16 < 10; i_16 += 4) 
                        {
                            {
                                var_28 = ((var_0) > (((/* implicit */int) var_3)));
                                var_29 = ((int) ((((/* implicit */_Bool) arr_25 [i_12 + 1])) ? (arr_5 [i_12 - 2]) : (((/* implicit */int) arr_46 [i_12 - 4] [i_13] [i_16 + 1]))));
                                arr_56 [i_12 + 1] [i_13] [i_14] [i_15] [i_16] [i_12 - 1] = max((((arr_18 [i_16] [i_16 - 1] [i_14] [i_12 - 3]) ? (var_7) : (((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) ((_Bool) (_Bool)1))), (min((((/* implicit */int) var_12)), (var_5))))));
                                var_30 = ((((/* implicit */_Bool) ((((arr_51 [i_12 - 1] [i_13] [i_12 - 1] [i_12]) == (142922179))) ? (((/* implicit */int) var_11)) : (((arr_13 [i_13] [i_15]) & (var_8)))))) ? (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) arr_41 [i_12 - 1])))))) : (((/* implicit */int) ((arr_12 [i_16 + 3] [i_12 - 4]) && (arr_12 [i_16 + 2] [i_12 - 4])))));
                                arr_57 [i_13] [i_13] [i_14] [i_15] [i_16] = (+(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_16 - 1])) || (((/* implicit */_Bool) var_8))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */int) var_6);
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        var_32 = (!(((/* implicit */_Bool) min((arr_38 [i_12 - 4] [i_14] [i_17 - 1] [i_17 - 1] [i_17]), (arr_35 [i_17 - 1] [i_17] [i_13] [i_17 - 1])))));
                        arr_60 [i_17 - 1] [i_13] [i_13] [i_12 - 3] = ((((/* implicit */_Bool) min((arr_13 [i_17 - 1] [i_13]), (arr_13 [i_17 - 1] [i_13])))) ? (((/* implicit */int) ((var_6) && (((/* implicit */_Bool) arr_13 [i_17 - 1] [i_13]))))) : (((/* implicit */int) ((((/* implicit */int) arr_59 [i_17 - 1] [i_13] [i_12 - 1] [i_13])) < (((/* implicit */int) arr_59 [i_17 - 1] [i_13] [i_12 - 4] [i_17]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 4; i_18 < 12; i_18 += 2) 
                    {
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) max(((+(((/* implicit */int) var_12)))), (var_8))))));
                                var_34 ^= (~(((/* implicit */int) ((((/* implicit */int) arr_41 [i_12 + 1])) >= (((/* implicit */int) arr_41 [i_12 - 4]))))));
                                arr_65 [i_13] [i_19] [i_18 + 1] [i_13] [i_14] [i_13] [i_13] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_46 [i_12 - 3] [i_13] [i_18 - 4]))))) ? (((/* implicit */int) (!(arr_10 [i_12 - 4])))) : (var_2));
                                var_35 += ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((int) var_1))))) ? (var_0) : (max((min((var_4), (((/* implicit */int) arr_24 [i_12 - 1] [i_13] [i_14])))), (((/* implicit */int) arr_12 [i_12 - 1] [i_12 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */int) ((_Bool) var_4));
}
