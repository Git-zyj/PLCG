/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129069
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
    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((var_1) >= (var_3)))), ((unsigned char)251)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_12 *= ((/* implicit */short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_3 [i_0]))))), (var_6))), (((/* implicit */unsigned long long int) (_Bool)1))));
                    var_13 = ((/* implicit */signed char) min((((/* implicit */long long int) var_1)), (max(((+(-4952284911873440001LL))), (((/* implicit */long long int) min(((short)-14790), ((short)-9137))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [(unsigned short)2] [i_0] [(_Bool)1] [i_3] [i_4] [(_Bool)1] = ((/* implicit */int) arr_0 [i_0]);
                                arr_16 [i_0] [i_0] [10ULL] [i_0] [i_0] [i_0] = ((/* implicit */int) (~(((unsigned long long int) arr_0 [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
