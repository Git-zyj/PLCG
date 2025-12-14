/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170659
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
    var_20 |= ((unsigned long long int) (-(((/* implicit */int) (!((_Bool)1))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */short) arr_5 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_21 |= ((/* implicit */_Bool) arr_4 [i_4] [i_1]);
                                arr_14 [i_3] [i_1] [i_2] [i_2] [i_0] [(signed char)2] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((short) var_14))) ? (arr_9 [i_0] [(short)16] [i_0] [i_0]) : (((/* implicit */int) max((var_17), ((short)-32758))))))));
                                arr_15 [i_2] [(short)1] [i_2] [i_2] [i_4 - 1] = ((/* implicit */short) 11820803412319484922ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((unsigned short) var_15));
    var_23 = ((/* implicit */unsigned char) var_5);
}
