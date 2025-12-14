/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150726
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
    var_16 = ((/* implicit */short) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_5))));
    var_17 ^= ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) 1733831187);
                    arr_7 [i_0] = ((/* implicit */unsigned char) (unsigned short)24443);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) ((unsigned short) var_4))) : (((/* implicit */int) min((arr_10 [i_3] [i_3 - 1] [i_3 - 1] [i_1] [i_1 - 1] [i_1]), (var_13))))));
                                var_20 = ((/* implicit */int) var_10);
                                var_21 = ((/* implicit */signed char) (short)16233);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
