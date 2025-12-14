/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151408
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
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_3] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((unsigned short) ((_Bool) ((short) (_Bool)1))));
                            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((short) ((_Bool) ((unsigned long long int) var_12)))))));
                            arr_14 [i_0] [i_0] [(unsigned short)0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((long long int) ((_Bool) ((long long int) (unsigned short)37092))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 4; i_4 < 10; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((unsigned int) ((unsigned short) ((signed char) arr_0 [i_4])))))));
                                arr_24 [i_0] [i_1] [i_0] [i_0] [i_5 + 1] [i_4] = ((/* implicit */unsigned int) ((short) ((unsigned long long int) ((signed char) (unsigned short)20957))));
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((unsigned short) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 ^= ((/* implicit */short) ((unsigned int) ((unsigned int) 2339078608503622116ULL)));
    var_17 = ((/* implicit */long long int) ((_Bool) (unsigned short)44579));
    var_18 += ((/* implicit */unsigned short) ((short) ((_Bool) ((unsigned long long int) var_12))));
    var_19 ^= ((/* implicit */short) ((unsigned long long int) ((unsigned long long int) ((unsigned int) (-9223372036854775807LL - 1LL)))));
}
