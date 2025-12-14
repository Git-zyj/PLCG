/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106194
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
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((long long int) min((max(((unsigned short)8325), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) ((_Bool) 16774208585806302732ULL))))));
                    var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) (-(arr_7 [i_0] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : ((+(var_6))))) - (((((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned char) (_Bool)1))))) ? (max((arr_7 [i_1] [(unsigned char)9]), (((/* implicit */long long int) arr_2 [i_2] [i_2] [3])))) : (min((((/* implicit */long long int) 2147483647)), (var_6)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_16);
}
