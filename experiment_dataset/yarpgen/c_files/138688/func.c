/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138688
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
    var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)88)), (1322780837U)));
    var_15 = ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 23; i_2 += 4) 
            {
                {
                    var_16 = var_0;
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_2 - 1] [i_0])) ? (((/* implicit */int) arr_10 [i_2] [i_2 - 1] [i_0])) : (-1510595819))));
                                arr_13 [i_0] [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_0] [i_2] = ((int) min((((/* implicit */long long int) var_13)), (0LL)));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] = ((/* implicit */long long int) var_7);
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 1322780835U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58074))) : (4541510636696929137ULL)));
                    arr_15 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) 4013865557U))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) ? (((var_6) ? (((/* implicit */int) (short)32761)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_10 [i_0 - 1] [i_2] [i_0 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0 + 1] [(unsigned short)12] [i_1 - 1])))))));
                }
            } 
        } 
    } 
}
