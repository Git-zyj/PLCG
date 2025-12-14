/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147359
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
    var_19 ^= ((/* implicit */_Bool) var_11);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] = ((/* implicit */short) arr_3 [i_1]);
                                arr_14 [i_0] [(unsigned short)6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10)))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (short)-24313);
                    arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (signed char)-31)))), ((-(((/* implicit */int) min(((signed char)27), (arr_1 [i_0]))))))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((signed char) min((min(((unsigned short)504), (((/* implicit */unsigned short) var_16)))), (((/* implicit */unsigned short) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (short)-1)))))))));
    var_22 = ((/* implicit */_Bool) (short)-7);
}
