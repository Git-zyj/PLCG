/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166611
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
    var_16 = ((/* implicit */int) (short)1);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0]);
                var_17 &= (short)-6;
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)31)), (arr_0 [i_0 - 1])))) ? (((/* implicit */int) (short)-8)) : (max((arr_1 [i_0] [(short)16]), (((/* implicit */int) (short)-3))))))) ? (((/* implicit */unsigned long long int) (+(325332502)))) : (max((14345960829383552473ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_4 [i_0 + 1] [(short)4] [i_1])), ((unsigned char)245)))))));
                var_19 -= ((/* implicit */unsigned char) ((max((((((/* implicit */int) (signed char)-11)) ^ (((/* implicit */int) arr_2 [i_0 - 1])))), (((/* implicit */int) (signed char)31)))) ^ ((-(((/* implicit */int) (signed char)-31))))));
            }
        } 
    } 
}
