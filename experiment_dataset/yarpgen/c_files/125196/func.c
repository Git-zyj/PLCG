/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125196
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
    var_10 = ((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-25026))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_10 [i_1] [i_2] [i_3] = ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)4))))) ? (((/* implicit */int) arr_9 [(short)9] [i_1 + 3] [(_Bool)1] [i_3])) : (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))));
                            var_11 = ((/* implicit */short) (((-(((/* implicit */int) (_Bool)0)))) - (((((/* implicit */int) arr_3 [i_1 + 2])) & (((/* implicit */int) var_2))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_3 [i_0 - 1]), (arr_0 [i_1 + 3])))) ? ((+(((/* implicit */int) var_9)))) : (((((/* implicit */int) var_6)) - ((+(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_13 &= ((/* implicit */_Bool) (((~(((/* implicit */int) (short)0)))) / ((-(((/* implicit */int) ((short) (_Bool)1)))))));
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_14 = ((((/* implicit */int) arr_12 [i_4])) < (max((((/* implicit */int) ((short) arr_13 [(_Bool)1]))), (((var_1) ? (((/* implicit */int) arr_15 [i_4] [i_5])) : (((/* implicit */int) arr_12 [i_4])))))));
                arr_16 [i_4] [i_5] = ((/* implicit */short) var_6);
                var_15 ^= arr_14 [i_4] [i_4] [i_5];
            }
        } 
    } 
}
