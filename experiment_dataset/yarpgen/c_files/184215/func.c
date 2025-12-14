/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184215
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) (_Bool)1);
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) (short)4490);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (short i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4])) || (((/* implicit */_Bool) arr_9 [i_2])))))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((unsigned char) arr_4 [i_2] [i_3 + 1] [i_3 - 1]))));
                    arr_15 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (var_10)))) >> (((((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (4294967280U))))) - (215)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_10)));
}
