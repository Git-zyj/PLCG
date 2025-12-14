/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154029
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
    for (int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_2] [(_Bool)1] [(unsigned short)3] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) (_Bool)0)));
                                var_15 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) ((unsigned char) arr_6 [i_0] [i_1] [i_2]))));
                                var_16 = ((/* implicit */unsigned short) ((int) ((unsigned short) var_1)));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((signed char) ((long long int) var_3))))));
                arr_14 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) ((unsigned short) 8605837672203464414ULL)));
                var_18 = ((/* implicit */unsigned short) ((_Bool) ((_Bool) arr_5 [i_0 - 1] [i_1] [i_1] [i_0])));
            }
        } 
    } 
    var_19 += ((/* implicit */short) var_0);
}
