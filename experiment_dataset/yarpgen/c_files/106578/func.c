/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106578
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((((((/* implicit */int) arr_3 [i_1] [i_1])) + (((/* implicit */int) arr_3 [i_1] [i_1])))) > (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) var_11)))));
                var_19 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned short)7408)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (signed char)-90)))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)7408)) | (((/* implicit */int) (unsigned short)7408)))) % (((/* implicit */int) (signed char)-1)))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)228))) != (max((((var_15) % (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) (unsigned char)16))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)129)) + (((/* implicit */int) var_12))));
}
