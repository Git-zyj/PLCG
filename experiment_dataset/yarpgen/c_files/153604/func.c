/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153604
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1])) ? (max((10791001203904663084ULL), (((/* implicit */unsigned long long int) -1041965320974408086LL)))) : (0ULL)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_16 [10LL] [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) var_17);
                                var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_12 [i_0] [0LL] [i_1] [i_2] [i_3] [i_3]), (((/* implicit */short) ((arr_1 [(signed char)6]) >= (((/* implicit */unsigned int) var_14))))))))));
                                arr_17 [i_1] = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_1] [i_2] [(unsigned short)15] [i_4]);
                                arr_18 [(unsigned char)7] [i_1] [i_1 + 3] [i_1] [i_1] [i_1 + 1] [i_1 + 2] = ((/* implicit */unsigned char) arr_7 [(short)19] [i_1] [i_3]);
                                arr_19 [i_1] = (_Bool)1;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((((/* implicit */_Bool) min((((long long int) var_0)), (((/* implicit */long long int) var_8))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
}
