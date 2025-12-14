/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187514
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min(((+(750799843U))), (((((/* implicit */_Bool) ((arr_4 [i_1] [(signed char)12]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4)))))) ? (750799843U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1] [i_0])))))));
                var_18 = ((/* implicit */int) min((var_18), (((((((/* implicit */int) (signed char)116)) << (((3544167430U) - (3544167422U))))) / (((/* implicit */int) arr_3 [i_0 + 1] [i_0]))))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 2])) ^ (((/* implicit */int) arr_3 [i_0 - 2] [i_1 + 1]))))) || (((/* implicit */_Bool) (~(arr_4 [i_0 + 2] [i_0 + 2]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
        {
            {
                var_19 ^= ((/* implicit */unsigned short) max(((~(((/* implicit */int) (signed char)-4)))), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3] [i_2])) || (((/* implicit */_Bool) arr_8 [i_2] [i_3])))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (signed char i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        {
                            arr_16 [i_2] [i_2] [i_2] [i_4] |= ((/* implicit */unsigned short) arr_4 [i_2] [i_2]);
                            arr_17 [i_2] [i_3 + 1] [i_4] [i_4] [i_5] = ((/* implicit */_Bool) (+((((-(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_11 [i_5] [i_5 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_15);
}
