/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137057
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned short) min((1073709056), (((/* implicit */int) (unsigned char)46))));
                            var_11 = ((/* implicit */unsigned short) var_6);
                            var_12 = ((/* implicit */int) max((((((((/* implicit */_Bool) (unsigned char)195)) ? (867794413176773976LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15360))))) >> (((arr_11 [i_3] [i_1] [i_2] [i_3] [3LL] [i_3]) - (16174025656355330937ULL))))), (((/* implicit */long long int) arr_10 [i_1 - 2] [i_1]))));
                        }
                    } 
                } 
                var_13 ^= ((/* implicit */signed char) ((-7271398566171856997LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15360)))));
            }
        } 
    } 
    var_14 = (~(min((((/* implicit */unsigned long long int) (+(var_9)))), (((unsigned long long int) 17506357395893489307ULL)))));
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((max((arr_16 [i_4] [i_4] [i_4]), (arr_16 [i_6] [i_5] [i_4]))), (((((/* implicit */_Bool) 3043239463U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2770)))))));
                    var_16 = ((/* implicit */unsigned char) ((unsigned short) var_0));
                    arr_20 [10ULL] = ((/* implicit */unsigned short) (~((~(262016U)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_9), (((/* implicit */long long int) ((unsigned short) (unsigned char)203)))));
}
