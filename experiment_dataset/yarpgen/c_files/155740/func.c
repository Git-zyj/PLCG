/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155740
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
    for (short i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-1139))));
                arr_6 [i_1 - 1] = ((/* implicit */_Bool) var_3);
                arr_7 [i_1 - 1] [i_1] = ((/* implicit */unsigned char) var_6);
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_17 [4LL] [i_1] [i_2 + 1] [i_3] [i_3] [i_2 + 1] [i_4] = ((/* implicit */unsigned int) (~((~((~(var_5)))))));
                                var_11 = ((/* implicit */int) var_6);
                                arr_18 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0 - 2] = ((/* implicit */short) (~(var_2)));
                                var_12 |= ((/* implicit */unsigned char) var_3);
                            }
                        } 
                    } 
                } 
                var_13 = var_4;
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_2))));
    var_15 -= ((/* implicit */_Bool) (~((~((-(((/* implicit */int) var_9))))))));
}
