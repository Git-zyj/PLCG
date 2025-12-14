/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100421
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
    var_15 = ((/* implicit */unsigned int) min((max((var_8), (var_4))), (((/* implicit */long long int) 1957703942U))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_16 -= ((/* implicit */unsigned char) (unsigned short)36734);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)21726);
                            arr_12 [i_0] [i_1] [i_1] [i_1] = min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)80)), (arr_8 [i_0] [i_1] [i_0])))) ? (((/* implicit */long long int) ((unsigned int) var_4))) : (max((((/* implicit */long long int) arr_1 [i_0])), (arr_3 [i_0] [(signed char)6] [i_3]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [11U] [i_3] [i_3])) && (((/* implicit */_Bool) (unsigned short)39999))))));
                            var_17 = ((/* implicit */unsigned char) arr_6 [i_1] [i_2] [i_3 + 3]);
                        }
                    } 
                } 
                var_18 |= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))))));
            }
        } 
    } 
}
