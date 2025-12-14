/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187799
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
    var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_9))))))) ^ (var_0)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_2] [i_2] [(unsigned short)6] [i_0] |= ((/* implicit */unsigned char) ((int) arr_6 [10U]));
                            arr_11 [i_1] [i_1] = ((/* implicit */int) (+(1720910896U)));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_12);
            }
        } 
    } 
}
