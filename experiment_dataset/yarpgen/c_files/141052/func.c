/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141052
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
    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
    var_15 = max((var_4), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) * (1058508713)))));
    var_16 = ((/* implicit */unsigned long long int) ((_Bool) (-((+(var_9))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_17 &= ((/* implicit */long long int) -1058508727);
                var_18 = ((/* implicit */short) (+((-(((/* implicit */int) arr_1 [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_10 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) var_2);
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) | (max((-1058508701), (1058508715))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) - (((18ULL) >> (((/* implicit */int) (unsigned char)7))))))));
}
