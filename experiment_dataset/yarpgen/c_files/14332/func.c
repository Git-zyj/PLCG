/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14332
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_3))))) >= ((-(((/* implicit */int) (short)-1))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 += ((/* implicit */_Bool) min((((/* implicit */int) max(((_Bool)0), ((!(((/* implicit */_Bool) var_9))))))), ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-28642)) : (((/* implicit */int) (_Bool)1))))))));
                    var_12 = arr_3 [(_Bool)1];
                    arr_7 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))))) ? (min((((((/* implicit */_Bool) (short)32155)) ? (((/* implicit */int) (short)28641)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) (_Bool)0))))) : ((-(((/* implicit */int) arr_3 [i_0]))))));
                    arr_8 [i_2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) & (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) min((arr_5 [i_2]), (((/* implicit */short) arr_2 [i_0] [i_1]))))) : (((/* implicit */int) arr_1 [i_0]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 1; i_3 < 9; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) (_Bool)1);
                                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (short)-10741))));
                                var_15 = ((/* implicit */short) ((_Bool) ((((((/* implicit */int) arr_13 [i_4])) * (((/* implicit */int) (short)-1)))) + (((/* implicit */int) ((short) arr_12 [i_4] [(_Bool)1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (short i_9 = 3; i_9 < 10; i_9 += 4) 
                        {
                            {
                                var_16 -= ((/* implicit */short) ((((((/* implicit */int) arr_19 [i_3 + 1] [(short)2] [i_3 + 1] [i_3 + 3])) & (((/* implicit */int) arr_22 [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 1])))) & (((/* implicit */int) (_Bool)1))));
                                var_17 *= ((_Bool) (+(((/* implicit */int) ((short) arr_25 [i_8])))));
                            }
                        } 
                    } 
                    var_18 *= arr_0 [i_5] [i_3];
                    var_19 = (short)7803;
                }
            } 
        } 
    } 
}
