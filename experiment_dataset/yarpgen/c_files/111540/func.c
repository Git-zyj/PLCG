/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111540
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
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (14809638154139406675ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) var_10);
                arr_6 [11] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_1] [(unsigned short)11])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (arr_1 [i_0]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_8);
}
