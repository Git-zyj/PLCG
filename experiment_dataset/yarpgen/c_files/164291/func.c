/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164291
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) max(((short)-32767), (arr_1 [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_2] [i_3]);
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) 8922511945949323791ULL))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_15);
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
    var_25 = ((/* implicit */int) var_17);
}
