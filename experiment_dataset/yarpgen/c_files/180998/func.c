/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180998
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) max(((_Bool)1), ((_Bool)0))))))) : (((/* implicit */int) var_1))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_15 [i_0 - 1] [i_1 - 1] [i_2] [(_Bool)1] [i_4] [i_2] [i_3] = var_2;
                                var_11 = ((_Bool) arr_5 [i_1 - 1] [i_1] [i_2]);
                                var_12 = ((/* implicit */_Bool) (+((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                            {
                                arr_18 [i_0] [i_1] [i_3] [i_3] [(_Bool)1] = ((/* implicit */_Bool) max((min((((arr_4 [i_0] [i_0 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((arr_14 [i_0 - 1] [i_5] [i_5] [i_5] [i_5 + 1]), (((_Bool) arr_0 [i_0])))))));
                                arr_19 [i_5] [i_3] [i_2] [i_1 - 1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]))))), ((+(((/* implicit */int) arr_13 [i_1 - 1] [i_1] [i_1] [i_1 - 1]))))));
                                var_13 = (!(var_5));
                            }
                            var_14 &= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                            var_15 = arr_8 [i_0] [i_0] [i_0];
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_16 = ((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    var_17 = ((/* implicit */_Bool) (+(max((((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1])), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_4))))))));
                    var_18 = min((max((arr_11 [i_0] [i_1] [i_1] [i_1] [i_6] [i_6 + 1]), (min((arr_8 [i_0] [i_1 - 1] [(_Bool)1]), (var_3))))), ((!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 1])) * (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1]))))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_6] [i_1])), ((+(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_28 [i_7 - 1] [i_7 - 1] [i_7] = min((((_Bool) max((arr_27 [i_0] [i_0 - 1] [i_0]), (var_4)))), (((((/* implicit */int) arr_9 [i_7 - 1] [i_7 - 1] [i_7] [i_7])) != ((+(((/* implicit */int) (_Bool)1)))))));
                            var_20 *= ((/* implicit */_Bool) max((((/* implicit */int) arr_17 [i_0] [i_0 - 1])), ((((_Bool)1) ? (((((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_7])) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_6))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 &= ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
}
