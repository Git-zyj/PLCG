/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144756
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
    var_10 = ((/* implicit */_Bool) var_1);
    var_11 = ((/* implicit */_Bool) (+(-1259218849)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_12 *= ((/* implicit */unsigned short) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                                arr_15 [i_0] [i_2] [i_3] [(short)15] [9LL] [i_0] = ((/* implicit */unsigned short) ((((max((var_2), (((/* implicit */unsigned long long int) 1685597115)))) - (((/* implicit */unsigned long long int) arr_1 [i_0] [14U])))) ^ ((+(var_4)))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_1))));
            }
        } 
    } 
}
