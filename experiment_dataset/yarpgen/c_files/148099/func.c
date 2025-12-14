/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148099
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 = (i_1 % 2 == 0) ? (((unsigned char) ((long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1])) << (((((/* implicit */int) arr_3 [(unsigned short)13] [(unsigned short)13] [i_1])) - (218))))))) : (((unsigned char) ((long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1])) << (((((((/* implicit */int) arr_3 [(unsigned short)13] [(unsigned short)13] [i_1])) - (218))) + (144)))))));
                    var_19 = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) + (var_5))))))));
    var_21 |= ((/* implicit */unsigned char) (~(((unsigned int) ((unsigned int) (unsigned char)255)))));
}
