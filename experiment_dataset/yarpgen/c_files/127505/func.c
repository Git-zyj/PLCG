/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127505
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
    var_18 |= min((var_15), (var_5));
    var_19 = var_8;
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((var_14) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_3 [(_Bool)0] [(_Bool)0]))))) ? (((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))) ? (((var_11) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_0] [(_Bool)1])))) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
                arr_6 [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_17) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))) << (((/* implicit */int) (_Bool)1))))) ? (min((((((/* implicit */int) arr_0 [i_0 - 1])) | (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((arr_4 [i_1] [i_1] [i_1]), ((_Bool)1)))))) : (((/* implicit */int) var_1))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] = ((/* implicit */_Bool) (((((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))) & ((~(((/* implicit */int) (_Bool)1)))))) >> (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) >= (((/* implicit */int) (_Bool)0)))))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (max((min(((_Bool)1), ((_Bool)1))), (max((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [(_Bool)1]), ((_Bool)0)))))));
                            var_22 = max(((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))))), (min((var_0), (max(((_Bool)1), ((_Bool)1))))));
                            arr_14 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_22 [i_4] [i_4] [(_Bool)1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_4] [i_6 - 1])) | (((/* implicit */int) arr_16 [i_4 - 1] [i_5 + 1]))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((arr_18 [i_4] [i_5] [i_4]) ? (((/* implicit */int) arr_16 [i_4] [i_4])) : (((/* implicit */int) (_Bool)1)))), (((arr_19 [i_4] [(_Bool)1]) ? (((/* implicit */int) arr_20 [i_4])) : (((/* implicit */int) var_0))))))) ? (((/* implicit */int) min((min(((_Bool)1), (var_3))), ((_Bool)1)))) : (((/* implicit */int) min((min(((_Bool)1), ((_Bool)1))), (((_Bool) arr_21 [i_4] [i_4])))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_28 [i_4] [i_5] [i_6 - 1] [(_Bool)1] [i_5] [(_Bool)1] [(_Bool)1] = min(((!(max(((_Bool)1), ((_Bool)1))))), ((_Bool)1));
                                arr_29 [i_7] [i_4] [i_7] = var_14;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            {
                                arr_35 [i_4] [i_4] [i_4] [i_9 + 1] [i_10 + 1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (_Bool)0))))))));
                                arr_36 [i_4] [(_Bool)1] [i_6 - 1] [i_4] = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) arr_23 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_4])) : (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) min((max((arr_30 [i_4 - 1] [(_Bool)1] [i_4] [i_10]), ((_Bool)1))), (max((var_7), ((_Bool)1))))))));
                                arr_37 [i_4] [i_10 + 1] [i_10 + 1] [i_4] [i_10 + 1] = arr_17 [i_4];
                                arr_38 [(_Bool)1] [i_5 + 1] [i_5] [i_6] [i_5 + 1] [(_Bool)1] [i_4] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
