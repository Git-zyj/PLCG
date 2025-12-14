/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11323
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_17 *= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 17592186044415LL)))))) % (((((/* implicit */_Bool) ((long long int) (short)15343))) ? (((/* implicit */int) (short)6369)) : (arr_1 [i_0 - 2] [i_0 - 2])))));
                    var_18 = ((/* implicit */long long int) 1424246525U);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_0] [i_0] [i_2] [i_3] [i_4 + 1]))) ? (max((2574452548U), (((/* implicit */unsigned int) (unsigned short)14390)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6620)))))));
                                var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) * (max((((/* implicit */long long int) 1424246525U)), (-1LL)))));
                                var_21 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) (unsigned short)37425))))))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_13 [i_4 - 3] [i_4] [i_3 - 1] [i_3 - 1] [i_1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) (~(var_13)));
}
