/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134393
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
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((arr_2 [i_0]), (((((/* implicit */int) (short)8878)) * (((/* implicit */int) var_8))))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8878))) + (14484776372663553928ULL)))));
                    arr_6 [i_2] [i_2] = ((/* implicit */int) ((unsigned short) (_Bool)1));
                    arr_7 [i_2] [i_2] [14] = ((/* implicit */int) ((((((/* implicit */long long int) (-(var_6)))) == (arr_5 [i_0] [i_1] [17]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) ((_Bool) 8964570266860660347LL))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned short) var_8);
    var_12 = ((/* implicit */unsigned short) var_5);
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -9223372036854775798LL)) ? (((/* implicit */unsigned long long int) var_6)) : (15362915056186382803ULL)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))));
}
