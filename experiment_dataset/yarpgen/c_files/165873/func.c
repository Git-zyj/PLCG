/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165873
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
    for (int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))));
                var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 2])) * (((/* implicit */int) var_9))))) ? (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (var_4)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((3749879998271194523LL), (((/* implicit */long long int) var_6))))) ? (min((3749879998271194523LL), (-3749879998271194537LL))) : (((/* implicit */long long int) (~(var_6)))))))));
                var_17 = ((/* implicit */_Bool) var_13);
                arr_8 [i_0] [i_1] = ((/* implicit */int) (!(min((arr_7 [i_0 + 1]), (arr_7 [i_0 - 2])))));
            }
        } 
    } 
    var_18 *= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_13)))))));
    var_19 ^= ((/* implicit */long long int) var_0);
    var_20 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))), (min((((/* implicit */unsigned long long int) -3749879998271194543LL)), (14ULL))))) << (((max((((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((_Bool) (short)-5146))))) - (3624498334U)))));
}
