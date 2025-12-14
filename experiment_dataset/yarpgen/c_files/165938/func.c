/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165938
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
    var_17 &= ((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_15)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5737305407119848517ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14398))) : (126100789566373888LL)));
                    var_19 += ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34122)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned short)14] [(unsigned short)10])) : (((/* implicit */int) arr_0 [(short)7] [i_1]))))) ? (arr_6 [i_0] [(_Bool)0] [(short)4]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)34122)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((unsigned long long int) var_2)) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
}
