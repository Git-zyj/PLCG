/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137293
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_1] = arr_3 [i_1] [i_1] [i_1];
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_3] [i_2] = ((/* implicit */unsigned char) arr_7 [i_0] [0] [i_0 - 1] [i_3]);
                            arr_12 [i_3] = ((/* implicit */unsigned long long int) var_3);
                            arr_13 [2ULL] [i_1] [i_2] [2ULL] = ((/* implicit */unsigned short) var_12);
                            var_15 = ((/* implicit */unsigned char) arr_4 [i_3] [i_0] [i_2]);
                            var_16 = ((/* implicit */unsigned int) var_0);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */int) ((var_12) != (((/* implicit */unsigned int) var_7))))))) != (((/* implicit */int) var_14)))))));
    var_18 = ((/* implicit */_Bool) ((short) var_7));
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((long long int) var_13));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                arr_28 [i_4] = ((signed char) ((1770146803) != (((/* implicit */int) (unsigned short)38731))));
                                arr_29 [i_8] [i_8] [i_8] [i_8] [i_4] [i_4] [i_8] = ((/* implicit */signed char) ((_Bool) var_8));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) arr_31 [i_4] [i_5] [i_6] [i_6] [i_4] [i_10]);
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */long long int) var_12)) != (var_4))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
