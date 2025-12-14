/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183608
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
    var_11 = ((/* implicit */long long int) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 4; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_12 -= ((/* implicit */signed char) ((max((arr_7 [i_4 - 1] [i_4 - 1] [i_1 - 2] [(signed char)12] [i_4]), (arr_7 [i_4 - 3] [i_1] [i_1 - 2] [i_1] [i_1]))) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                var_13 = ((/* implicit */unsigned int) (+((~((~(((/* implicit */int) arr_3 [i_0] [(unsigned short)12]))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) (~(var_9)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (((~(((((/* implicit */int) var_3)) | (((/* implicit */int) (_Bool)1)))))) > (((/* implicit */int) (_Bool)1))));
    var_16 = ((/* implicit */unsigned int) ((unsigned short) ((_Bool) ((_Bool) var_5))));
}
