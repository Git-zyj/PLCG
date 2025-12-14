/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180286
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1] [i_2] [i_3])) ^ (((/* implicit */int) (!(((((/* implicit */int) var_7)) >= (((/* implicit */int) var_8)))))))));
                                var_12 = ((((var_11) ? (((((/* implicit */int) arr_4 [i_0])) ^ (((/* implicit */int) var_11)))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))) == (((/* implicit */int) arr_1 [i_0])));
                                var_13 = (((-(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_11 [(_Bool)1] [i_1] [i_2] [i_2] [(_Bool)1] [i_4])))))) != (((max((arr_8 [i_0] [i_1]), (var_7))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) min((arr_1 [i_0]), (arr_3 [i_2] [i_0] [i_4])))))));
                                arr_15 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = arr_11 [i_0] [i_1] [i_2] [(_Bool)1] [i_3 - 1] [i_4];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_14 = (_Bool)1;
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((var_11) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((_Bool)1), (var_11))))))));
                                var_16 = arr_19 [i_0] [i_1 - 1];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_33 [(_Bool)1] [i_8] [i_9] [i_8] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((arr_25 [i_8] [i_11] [i_9] [i_10]) ? (((/* implicit */int) arr_25 [i_8] [i_9] [i_10] [i_11])) : (((/* implicit */int) arr_25 [i_8] [i_8] [i_10] [i_11]))))));
                                var_17 = ((/* implicit */_Bool) max((((var_4) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                                arr_34 [i_7] [i_11] [(_Bool)1] [i_8] [(_Bool)1] = ((/* implicit */_Bool) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                                arr_35 [i_8] [i_8] [i_9] [i_8] [(_Bool)1] = max((((_Bool) (_Bool)1)), (((((/* implicit */int) arr_32 [i_7] [i_10])) != (((/* implicit */int) (_Bool)1)))));
                                arr_36 [i_8] [i_9] [i_11] = ((max((((/* implicit */int) arr_28 [i_8])), (((arr_20 [i_7]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))) == (((((((/* implicit */int) var_5)) == (((/* implicit */int) var_9)))) ? (((/* implicit */int) max((var_8), (var_8)))) : (((/* implicit */int) ((_Bool) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_45 [i_7] [(_Bool)0] [i_12] [i_8] = var_2;
                            arr_46 [i_8] [(_Bool)1] [i_12 + 1] [i_13] = ((/* implicit */_Bool) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                            var_18 = ((/* implicit */_Bool) ((arr_27 [i_8] [i_8] [i_12]) ? (((/* implicit */int) var_7)) : (max(((((_Bool)1) ? (((/* implicit */int) arr_30 [(_Bool)1] [(_Bool)1] [i_12 + 1] [(_Bool)1])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_1))))));
                            arr_47 [(_Bool)1] [(_Bool)0] [i_12] [(_Bool)1] &= ((/* implicit */_Bool) ((((((/* implicit */int) (((_Bool)1) || (var_2)))) >= (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))) ? ((-(((/* implicit */int) ((_Bool) var_7))))) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                        {
                            {
                                var_19 = ((var_10) && (var_6));
                                var_20 = (((!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))) && (min(((((_Bool)1) || ((_Bool)1))), (((arr_32 [i_7] [i_16]) || (var_10))))));
                                var_21 += max((arr_41 [(_Bool)1] [i_16 + 1] [i_16 + 1] [i_16 + 1]), (max((arr_41 [i_14] [i_16 + 1] [i_16 + 1] [i_16 + 1]), ((_Bool)1))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) (((_Bool)1) ? (max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) var_11)))))) : (((/* implicit */int) ((max(((_Bool)1), ((_Bool)1))) || ((!(arr_59 [(_Bool)1] [i_8] [i_17] [i_18 - 1]))))))));
                            arr_62 [i_7] [i_7] [i_8] [i_7] = ((/* implicit */_Bool) (~(max((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))))));
                            arr_63 [i_8] [i_8] [i_8] = ((((/* implicit */int) arr_24 [i_17])) >= (((/* implicit */int) ((_Bool) max(((_Bool)1), (arr_44 [i_7] [i_8] [i_7] [(_Bool)1]))))));
                            arr_64 [(_Bool)1] [i_8] [i_8] [i_18] = ((_Bool) min((var_0), (arr_41 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1])));
                        }
                    } 
                } 
            }
        } 
    } 
}
