/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162778
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) & (((/* implicit */int) ((unsigned short) ((var_3) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [(signed char)0] = ((/* implicit */signed char) (+(var_4)));
                                arr_14 [i_2] [i_1] [i_1] [i_3] [i_4] = (~(((/* implicit */int) (unsigned short)48822)));
                                var_16 ^= ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_10 [i_0]))));
            }
        } 
    } 
    var_18 |= ((/* implicit */short) ((((var_4) / (((/* implicit */int) var_7)))) % (var_1)));
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                {
                    var_19 ^= (_Bool)1;
                    arr_23 [(_Bool)1] [i_6] [i_7] = ((/* implicit */signed char) arr_11 [i_5] [i_5] [i_6] [i_5] [i_5]);
                }
            } 
        } 
    } 
}
