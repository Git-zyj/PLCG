/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155601
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65512))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)64489), (var_11))))))) ? ((+(((/* implicit */int) (unsigned short)18)))) : (((/* implicit */int) var_5))));
                arr_7 [i_0] [i_1] [(unsigned short)17] &= ((/* implicit */short) max((min(((unsigned short)23), ((unsigned short)65506))), ((unsigned short)65527)));
                arr_8 [i_0] [i_1] = ((/* implicit */short) ((unsigned short) var_3));
                arr_9 [i_0] [i_1] = (unsigned short)57344;
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max(((-((-(((/* implicit */int) var_13)))))), (((/* implicit */int) ((unsigned short) min((var_11), ((unsigned short)32768)))))));
    var_17 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((short) (unsigned short)15151))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), ((unsigned short)0))))))) + (max((((/* implicit */int) ((short) (unsigned short)29967))), (((((/* implicit */int) var_11)) + (((/* implicit */int) var_1))))))));
    var_18 |= ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (unsigned short)57343))))))));
}
