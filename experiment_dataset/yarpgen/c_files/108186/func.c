/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108186
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
    var_10 = var_5;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                            {
                                var_11 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [(_Bool)1] [i_4] [i_2] [i_3] [(_Bool)1]))));
                                var_12 *= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))));
                                arr_11 [i_0] [i_1] [i_1] [i_1] [i_4] = (_Bool)1;
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                var_13 = (_Bool)1;
                                arr_14 [i_2] [i_5] [i_5] = var_1;
                                arr_15 [(_Bool)1] [i_1] [i_2] [i_3] [i_5] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)1))));
                                var_14 &= (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))));
                            }
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                            {
                                var_15 = ((/* implicit */_Bool) ((arr_9 [i_0] [i_1] [i_2] [i_3] [i_6 - 1] [i_6 - 1] [i_2]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0)))) > (((/* implicit */int) min((var_9), (var_0)))))))));
                                var_16 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_13 [i_6 - 1] [i_6 - 1] [i_3] [i_2] [i_1] [i_0])))) ^ (((/* implicit */int) (!(arr_13 [i_6 - 1] [(_Bool)1] [i_1] [i_1] [i_1] [i_0]))))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [(_Bool)1] &= var_5;
                            }
                            var_17 -= arr_0 [i_0];
                        }
                    } 
                } 
                var_18 = arr_2 [i_0] [i_0] [i_0];
                arr_21 [i_1] [i_0] [i_0] = arr_1 [(_Bool)1];
                var_19 = ((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1])), (((arr_8 [i_0] [(_Bool)1] [i_0] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_1] [(_Bool)0] [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    var_20 = (_Bool)1;
    var_21 = (!((_Bool)1));
    var_22 += var_1;
}
