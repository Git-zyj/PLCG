/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172566
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
    var_12 = (-(((((/* implicit */int) (unsigned short)52400)) * (((/* implicit */int) (_Bool)0)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(short)11] [i_0] = ((/* implicit */long long int) arr_0 [(short)3]);
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (arr_2 [i_0]) : (arr_2 [i_0]))))))));
            }
        } 
    } 
    var_14 -= ((/* implicit */unsigned char) var_3);
    var_15 = ((/* implicit */unsigned short) var_5);
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) == ((+((-(((/* implicit */int) var_9))))))));
}
