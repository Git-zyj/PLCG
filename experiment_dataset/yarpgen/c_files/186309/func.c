/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186309
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
    var_13 = ((/* implicit */_Bool) (short)5600);
    var_14 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5600)) ? (((/* implicit */int) arr_4 [10] [(unsigned short)17] [i_1])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_2 [(unsigned char)20] [(unsigned char)20])) : (((/* implicit */int) min((arr_3 [i_1]), (arr_5 [i_0])))))))));
                var_16 = ((/* implicit */short) min((((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (unsigned short)65522)) | (((/* implicit */int) (short)5628)))))), (arr_3 [i_0])));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_6);
}
