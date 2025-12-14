/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157034
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_14 -= ((/* implicit */unsigned short) var_6);
                arr_5 [i_0] [i_1] [2] = ((/* implicit */unsigned char) (-(((((/* implicit */int) ((signed char) (signed char)-101))) / ((+(((/* implicit */int) (short)26822))))))));
                var_15 += ((/* implicit */int) ((((/* implicit */int) (short)17540)) > (((/* implicit */int) ((unsigned short) (short)17540)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned short) var_12);
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (short)-18108))) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_8 [i_4] [i_3])) > (arr_13 [i_2 - 1] [i_3] [i_4] [i_3])))) : (arr_8 [i_3] [i_2 - 1])));
                }
            } 
        } 
    } 
}
