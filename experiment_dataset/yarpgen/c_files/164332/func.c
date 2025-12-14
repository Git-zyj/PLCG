/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164332
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((unsigned short) ((unsigned long long int) ((_Bool) (unsigned short)40893))));
                                var_19 = (+(max((arr_2 [i_0 + 2] [i_0 - 1] [i_0 + 1]), (((((/* implicit */_Bool) 7LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                } 
                arr_10 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (!((_Bool)1)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((short) var_15));
    var_21 = ((/* implicit */unsigned long long int) var_4);
}
