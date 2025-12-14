/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186708
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
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)22460)) & (((/* implicit */int) ((unsigned short) var_7)))))));
                    arr_8 [i_0 + 3] [i_0] [i_1] [14] = ((/* implicit */long long int) min((max((((int) (unsigned short)43075)), (((/* implicit */int) (_Bool)1)))), ((-(((((/* implicit */int) var_10)) + (((/* implicit */int) (short)19569))))))));
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)32607))))), ((-(min((var_0), (((/* implicit */long long int) (unsigned char)199))))))));
    var_14 = 4294967288U;
    var_15 *= ((/* implicit */unsigned int) var_4);
    var_16 = ((/* implicit */unsigned short) (((-((+(((/* implicit */int) (unsigned short)22460)))))) + (var_4)));
}
