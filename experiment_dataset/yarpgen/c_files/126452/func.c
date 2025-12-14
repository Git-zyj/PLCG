/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126452
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_17 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 2]) + (9223372036854775807LL))) >> (((arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 2]) + (6540245986707587123LL)))))) * (arr_8 [i_0] [i_1 + 1] [i_1 - 2])));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_18 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1] [10] [i_0])) : (((/* implicit */int) arr_12 [i_1 + 2] [i_1] [12ULL] [i_1 + 1] [10LL] [i_1] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)4436)))) : (var_8));
                                arr_14 [(signed char)17] [i_1] [(signed char)17] [i_3] [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_4])) ? (var_6) : (((/* implicit */int) (signed char)(-127 - 1))))) : ((+(((/* implicit */int) arr_1 [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        for (signed char i_6 = 2; i_6 < 22; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (-(2098108021)));
                    var_20 = arr_15 [i_5];
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) (short)-17941)), (786556981U))))));
                    var_22 *= ((_Bool) ((((/* implicit */int) ((_Bool) arr_21 [i_7] [14ULL]))) / (-2098108022)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_9);
}
