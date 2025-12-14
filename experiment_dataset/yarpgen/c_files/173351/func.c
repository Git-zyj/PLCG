/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173351
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
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 3101009425U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (1372300485U)))));
                var_16 = (short)-27980;
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((((/* implicit */unsigned int) (short)-27980)), (((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) | (3897832236U)))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            {
                var_18 = (short)29470;
                var_19 ^= (-((~(arr_4 [i_3]))));
            }
        } 
    } 
    var_20 -= ((/* implicit */short) var_4);
}
