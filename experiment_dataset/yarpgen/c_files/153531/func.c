/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153531
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) max((arr_6 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)163)))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_5 [i_1] [i_0]) : (((/* implicit */int) ((arr_2 [i_0] [i_0]) < (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]))))))));
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 145250167);
                var_18 = ((((/* implicit */_Bool) ((int) 18446744073709551614ULL))) ? (arr_1 [i_0]) : (-2049025850));
                arr_10 [i_0] = ((/* implicit */short) ((1023) / (((/* implicit */int) ((((/* implicit */_Bool) 3546375056835077675ULL)) && (((/* implicit */_Bool) 17586249136157616246ULL)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : ((+(var_6)))));
}
