/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184159
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
    var_14 = ((/* implicit */long long int) var_13);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 += ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((int) arr_0 [8ULL] [i_0]))) + (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (arr_4 [i_0] [i_0]))))), (((/* implicit */long long int) ((unsigned short) var_10)))));
                var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((arr_3 [2LL]), (((/* implicit */unsigned long long int) (unsigned char)33))))) ? (((arr_0 [i_0] [i_1]) / (-9162706219668613895LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_1 [i_0] [1LL])))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) 9162706219668613901LL)))));
    var_18 -= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_9))) - ((((-(((/* implicit */int) (unsigned char)245)))) | (var_10)))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)39)) << (((((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)210))))) | (max((((/* implicit */unsigned int) (unsigned char)228)), (33554432U))))) - (4294967064U)))));
}
