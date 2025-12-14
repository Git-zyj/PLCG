/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183563
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
    var_12 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((int) -1553333155))), (var_6))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((16ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((unsigned char) var_2)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [(signed char)10] [i_2] = ((/* implicit */signed char) (_Bool)1);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) == (2147483634)))))) / (min((((/* implicit */unsigned long long int) arr_1 [i_0])), ((-(var_0)))))));
                                arr_14 [i_4] [(unsigned char)0] [i_2] [i_3] [i_3] = arr_2 [i_4] [i_1] [i_1];
                                arr_15 [i_0] [i_4] = ((/* implicit */_Bool) ((int) ((8LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_0] = ((/* implicit */int) arr_5 [i_0] [(unsigned char)6] [i_2] [i_2]);
                }
            } 
        } 
    } 
}
