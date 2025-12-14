/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155514
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
    var_10 = ((var_2) | (((((/* implicit */int) var_8)) | (((var_7) << (((((var_0) + (722218544))) - (30))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) / (((/* implicit */int) arr_3 [i_0] [i_0])))) | (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) <= (((/* implicit */int) (unsigned short)65528)))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) (signed char)78);
                    var_11 = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)-37)), ((~(((/* implicit */int) arr_6 [i_1] [i_0] [i_2] [i_0]))))));
                }
            } 
        } 
    } 
}
