/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172604
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
    var_19 = ((/* implicit */unsigned char) max((var_6), (((/* implicit */unsigned short) var_17))));
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned char) var_9)))))));
    var_21 = ((/* implicit */signed char) var_15);
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_0) : (((var_0) + (var_0))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) arr_3 [i_1 + 1]));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_12 [12ULL] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) arr_0 [i_0])) * (((((/* implicit */int) (unsigned char)243)) / (1891569403))))));
                                var_23 = ((/* implicit */unsigned char) arr_1 [i_3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
