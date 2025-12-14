/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166444
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
    var_16 = ((short) (!(((/* implicit */_Bool) var_15))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 120)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((max((max((((/* implicit */int) (_Bool)1)), (-121))), (((/* implicit */int) min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (unsigned char)14))))))) / (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */unsigned short) (+(var_8)));
}
