/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188825
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [13] [i_0] = ((/* implicit */unsigned int) 8739921972147356230ULL);
                arr_6 [i_1] [i_1] [2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)44268)))) ? (((/* implicit */int) (unsigned short)42543)) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        for (int i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            {
                arr_14 [i_2] = var_0;
                arr_15 [i_2] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) min((arr_12 [i_2] [i_3] [i_2]), ((_Bool)1))))) == (((int) max(((unsigned short)38085), (((/* implicit */unsigned short) (_Bool)1)))))));
            }
        } 
    } 
}
