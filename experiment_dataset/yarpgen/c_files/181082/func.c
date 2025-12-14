/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181082
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) (+(max((((/* implicit */long long int) (unsigned short)31)), (arr_0 [i_2])))));
                    var_17 = ((/* implicit */short) min((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) 657262627U)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_2])), (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [(short)10] [i_1 - 1]))) : (((unsigned int) (unsigned short)57344))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((2352518847U) <= (((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((_Bool) var_14));
    var_19 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) ((unsigned char) var_3))) : (((/* implicit */int) ((unsigned short) var_5))))));
    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
}
