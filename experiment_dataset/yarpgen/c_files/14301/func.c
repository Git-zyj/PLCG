/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14301
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((var_4), (var_1)))), (var_5))))));
    var_14 = ((/* implicit */int) var_3);
    var_15 = ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [i_0 - 2] [i_0 - 3])), ((-(var_5)))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (3520534160939893904ULL) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) ((short) arr_7 [i_0] [i_0]))))))));
                    var_16 = ((/* implicit */unsigned long long int) arr_3 [i_2]);
                    var_17 = ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)173))))) < (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (1015808ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) || (((/* implicit */_Bool) (short)256)))))) : (arr_1 [i_0]));
                }
            } 
        } 
    } 
}
