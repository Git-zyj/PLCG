/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151065
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
    var_10 &= var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) var_6);
                var_12 = var_2;
                var_13 -= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */short) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_1])))));
                var_14 = min((((((/* implicit */_Bool) arr_1 [9LL])) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (-2147483643) : (((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (var_2) : (arr_2 [i_0 + 2] [i_0]))));
                var_15 &= ((/* implicit */unsigned char) arr_0 [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                arr_9 [i_2] [i_2] [i_2 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [19] [19])) : (((/* implicit */int) var_5))))) ? ((~(var_8))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1]))))) | (min((min((((/* implicit */long long int) (_Bool)1)), (arr_5 [i_3] [i_2]))), (((/* implicit */long long int) ((unsigned short) var_9)))))));
                var_16 = (unsigned short)65530;
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_4))));
                var_18 += ((/* implicit */int) (unsigned char)206);
            }
        } 
    } 
}
