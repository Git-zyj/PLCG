/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117842
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) < (((unsigned int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max(((+(((/* implicit */int) ((unsigned char) (short)-8855))))), ((-(((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])))))))));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (min((arr_2 [i_0] [i_0]), (((unsigned long long int) arr_0 [i_1 + 1] [i_1 + 1]))))));
                arr_4 [3] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)6] [i_1]))) : (-2843424734717416854LL)))))) * (min((50331648LL), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1 + 1]))) / (-2843424734717416854LL)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((var_3), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_18)), (((long long int) 2843424734717416861LL)))))));
}
