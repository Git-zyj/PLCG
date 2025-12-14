/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138105
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
    var_16 = ((/* implicit */long long int) (((+(161875819U))) != (((/* implicit */unsigned int) ((/* implicit */int) (short)26649)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */long long int) 1030578339);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-((-(((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3])))))))));
                                arr_16 [i_0] [i_0] [7] [i_0] [i_0] = ((/* implicit */unsigned short) 4133091476U);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) ((arr_2 [i_0 + 1]) ? (-7876517947798661130LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [3LL])))));
                    arr_17 [i_0] = ((((/* implicit */_Bool) (~(var_9)))) ? (var_9) : (((/* implicit */unsigned int) (~((~(arr_9 [i_0] [i_0] [i_0] [i_0])))))));
                    var_18 -= ((/* implicit */unsigned short) 3436615906U);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */int) var_2)) << (((((((/* implicit */_Bool) (~(var_15)))) ? (((var_2) ? (var_8) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((var_2) ? (-7876517947798661145LL) : (((/* implicit */long long int) var_11))))))) - (8478304899800385631ULL)))))));
}
