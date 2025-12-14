/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177204
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_10);
                    arr_8 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 - 4])))))));
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (signed char)0);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0]);
                        arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (!((!(((/* implicit */_Bool) arr_6 [i_0])))));
                    }
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_3);
}
