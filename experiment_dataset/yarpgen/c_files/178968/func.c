/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178968
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_15)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    var_18 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_16)))) : (var_2))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0 + 2] [8LL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (arr_5 [i_1 - 3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) && (((/* implicit */_Bool) (unsigned char)178)))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (-5421080858879542572LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15512)))))))) ? (((unsigned long long int) arr_1 [i_1 - 2])) : (min((arr_5 [i_0 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) arr_4 [(signed char)17] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0 - 4] [i_0])))))))));
                var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (min((4141497490614756891ULL), (((/* implicit */unsigned long long int) var_6)))) : (arr_5 [i_1 - 1])))));
            }
        } 
    } 
}
