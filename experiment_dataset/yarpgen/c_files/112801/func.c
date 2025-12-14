/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112801
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
    var_12 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_10)), (((unsigned short) (~(((/* implicit */int) (unsigned char)43)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) var_0);
                arr_7 [i_0] [i_0] |= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-8610455065750146034LL)))) ? (((((/* implicit */int) var_5)) | (((/* implicit */int) arr_3 [(unsigned short)9] [i_0] [i_1 + 2])))) : (((/* implicit */int) min((arr_4 [i_0] [i_0] [(unsigned short)0]), (((/* implicit */short) arr_5 [i_0]))))))) + (((/* implicit */int) (unsigned short)5541)));
            }
        } 
    } 
}
