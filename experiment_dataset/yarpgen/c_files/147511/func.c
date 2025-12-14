/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147511
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
    var_10 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((arr_6 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_6)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24))))))) * (arr_0 [i_0])));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)24))) & (var_6))))))), (((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-2245167429222371216LL)))))));
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((2245167429222371230LL) / (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1] [i_2])) ? (((/* implicit */unsigned long long int) 414885246)) : (5003980074092455610ULL)))) ? (((((/* implicit */int) var_7)) << (((/* implicit */int) (short)0)))) : (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_1))))))) : (((/* implicit */int) (unsigned short)24))));
                    var_12 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)32767)), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_9 [i_0] [i_1] [i_2]) : (((/* implicit */int) var_5))))) - (((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_0])) : (2245167429222371215LL)))))));
                }
            } 
        } 
    } 
}
