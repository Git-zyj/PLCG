/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108062
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) max((((int) var_10)), ((-(((/* implicit */int) var_8)))))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(var_9)));
                    arr_11 [i_0] [i_0] [(_Bool)1] [(unsigned char)11] = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) << (((((-4506059541255191515LL) | (var_6))) % (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_10)) - (((/* implicit */int) var_1)))) * (((/* implicit */int) var_10)))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
}
