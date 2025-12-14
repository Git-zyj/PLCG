/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184868
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) max((max((arr_1 [i_1 + 1]), (arr_1 [i_1 - 1]))), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) != (-1211481409))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) 3531314620U);
                arr_6 [i_1 - 2] [i_0] = ((/* implicit */unsigned int) ((int) (signed char)-1));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 2; i_2 < 10; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    arr_16 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 + 1])))))));
                    arr_17 [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) (~(max((4267139161U), (((/* implicit */unsigned int) arr_13 [i_2 - 2] [i_2 - 2] [i_3]))))));
                }
            } 
        } 
    } 
}
