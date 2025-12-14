/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171080
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (-(var_6)))) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        arr_9 [i_0] = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_2 [i_2]))))));
                        var_14 += (short)0;
                    }
                    var_15 = ((/* implicit */_Bool) 1956731140);
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) 0U);
                    var_16 = ((/* implicit */unsigned char) 1956731140);
                }
            } 
        } 
    } 
}
