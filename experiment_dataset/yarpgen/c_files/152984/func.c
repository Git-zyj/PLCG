/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152984
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_13 *= ((/* implicit */short) (~((~(var_1)))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) var_3));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                arr_22 [(short)1] [i_5 - 2] [16U] [15LL] [i_2] [(unsigned char)22] = ((unsigned long long int) var_4);
                                var_14 = (~((+(((/* implicit */int) var_5)))));
                            }
                        } 
                    } 
                    arr_23 [i_3] = ((/* implicit */signed char) var_5);
                    var_15 = ((/* implicit */_Bool) ((long long int) var_4));
                }
                arr_24 [i_2] [(unsigned short)4] [i_3] = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_3)))));
                var_16 -= ((/* implicit */unsigned long long int) ((signed char) ((_Bool) ((unsigned long long int) var_5))));
            }
        } 
    } 
    var_17 *= ((/* implicit */unsigned long long int) ((unsigned short) var_11));
    var_18 = ((/* implicit */short) var_6);
}
