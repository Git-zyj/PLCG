/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170704
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(signed char)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (32704U)))) && (((/* implicit */_Bool) arr_5 [i_0] [i_1]))));
                arr_7 [13] [i_0] = ((/* implicit */unsigned char) max((((arr_2 [i_0]) ^ (arr_2 [i_0]))), (((/* implicit */int) arr_0 [i_0] [i_1]))));
                var_12 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) var_1))))), (((arr_1 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2712691472U)) && (((/* implicit */_Bool) (-(min((3946924475048612028ULL), (((/* implicit */unsigned long long int) (unsigned char)223)))))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39744))) / (9297847098978746225ULL)))) ? (((/* implicit */unsigned long long int) var_3)) : (((unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) var_8)))))));
}
