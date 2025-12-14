/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187823
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    var_13 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) 2938551687999878268LL)))) ? (((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (arr_8 [i_0] [i_1 + 2] [i_2 - 2] [0LL]))) : ((-(arr_8 [i_2 - 2] [i_1 - 1] [i_0] [i_0])))));
                    var_14 = ((/* implicit */short) var_7);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) (~(((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) (unsigned short)34)))))));
}
