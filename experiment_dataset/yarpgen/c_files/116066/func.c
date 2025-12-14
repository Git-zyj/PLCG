/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116066
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
    var_19 = ((/* implicit */unsigned char) var_5);
    var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) var_18)) / (((/* implicit */int) var_4)))))), (((((1098308605U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-7300572122497682428LL))) + (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_13))))))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)-17807)))))))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : ((+(((/* implicit */int) arr_2 [i_1]))))))) ? (((max((((/* implicit */int) (unsigned short)19366)), (arr_6 [i_2 + 1]))) + ((-(((/* implicit */int) (unsigned short)65534)))))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                }
            } 
        } 
    } 
}
