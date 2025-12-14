/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103212
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
    var_16 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((((/* implicit */_Bool) -1295124601)) ? (((/* implicit */int) (unsigned short)44399)) : (((/* implicit */int) (unsigned char)109)))), (((/* implicit */int) ((unsigned char) var_14))))))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (~(((((/* implicit */int) arr_1 [i_0 - 4] [i_2 - 1])) | (((/* implicit */int) arr_1 [i_0 + 1] [i_2 - 1])))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) max((var_15), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (1295124620)))))));
    var_20 &= ((/* implicit */long long int) var_2);
}
