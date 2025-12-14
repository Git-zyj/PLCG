/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179716
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
    var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (0U))) : (max((((/* implicit */unsigned int) (unsigned short)61297)), (390705565U))))), (((/* implicit */unsigned int) var_12))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 4; i_2 < 6; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 7; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] = ((/* implicit */int) arr_12 [i_0] [i_2 - 2] [i_3 - 2] [i_0] [i_2 - 2] [i_4]);
                                var_16 = ((/* implicit */unsigned char) ((_Bool) arr_2 [i_0] [i_1]));
                                var_17 = max((((/* implicit */long long int) arr_0 [i_0])), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_11 [i_0] [i_0] [i_2 + 3] [i_3] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) % (((1LL) ^ (((/* implicit */long long int) var_12)))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [4ULL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)30591), ((unsigned short)30588)))) ? ((+((~(var_8))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))));
            }
        } 
    } 
}
