/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120302
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
    var_10 += ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */int) var_6)) | (((/* implicit */int) var_0)))) > (((/* implicit */int) var_6)))))));
    var_11 = ((/* implicit */short) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))), (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_12 = arr_9 [i_0] [i_0] [i_0];
                                arr_12 [i_2] [i_2] [i_0] [i_2] [i_2] [i_2] [(short)5] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1] [i_1 - 1] [(short)12])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)22821))))) : (((/* implicit */int) arr_1 [i_1]))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1 + 2] [i_0]))))) ? ((((-(((/* implicit */int) arr_1 [i_0])))) / (((/* implicit */int) max((var_3), (arr_7 [i_0] [i_1 + 2])))))) : (((/* implicit */int) (short)(-32767 - 1)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_5)))))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_0))))) : (((/* implicit */int) (short)32640)))))));
    var_15 = var_6;
}
