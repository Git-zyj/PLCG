/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157643
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
    var_15 = ((/* implicit */short) var_5);
    var_16 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) (~(var_14)))) % (((16087765103377591096ULL) | (var_5))))), ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_12))) << (((var_7) + (1120468116)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(arr_4 [i_0] [i_1 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [(unsigned char)3] [8U] [i_0] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_6 [i_0] [i_1 + 1] [i_3] [i_4])), (((994853830U) | (1015500405U))))), (((/* implicit */unsigned int) 1764876508))));
                                var_17 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) var_2)), ((~(3300113465U))))), (max((arr_3 [i_0] [i_1 + 1]), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_3 + 1] [i_1 + 2]))))));
                                var_18 ^= ((/* implicit */int) (+((~(arr_3 [(unsigned char)12] [i_0])))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 1] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2 + 1] [i_1 + 2]))) : (((unsigned long long int) arr_6 [i_1 + 2] [i_1 - 1] [i_2 - 2] [i_1 - 1]))));
                }
            } 
        } 
    } 
}
