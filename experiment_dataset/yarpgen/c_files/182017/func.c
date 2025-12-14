/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182017
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_1]);
                arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) max(((short)-16400), (arr_3 [i_0] [i_1] [i_1])))) != (((((((/* implicit */_Bool) -1663751331)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1])))) >> (((min((14774112036449839518ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))) - (26768ULL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            {
                var_13 += ((/* implicit */unsigned char) arr_9 [i_2]);
                var_14 = ((/* implicit */unsigned long long int) ((((arr_12 [i_2] [i_3]) ? (((/* implicit */int) arr_12 [i_3] [i_2])) : (((/* implicit */int) arr_12 [i_2] [i_3])))) == (((/* implicit */int) min((var_5), (((/* implicit */signed char) arr_12 [i_2] [i_3])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((min((arr_19 [i_5]), (arr_19 [i_5]))) - (((arr_19 [i_5]) & (arr_19 [i_5])))));
                    var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_6 + 1] [i_6 + 2] [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_6 + 1] [i_6 + 1] [i_4])) > (((/* implicit */int) arr_3 [i_6 + 3] [i_6 + 3] [i_5])))))) : (((((/* implicit */_Bool) (short)-16400)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (13319712532380703455ULL)))));
                }
            } 
        } 
    } 
}
