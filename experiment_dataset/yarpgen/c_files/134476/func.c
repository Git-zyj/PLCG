/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134476
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
    var_12 += ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)54641))));
    var_13 = ((/* implicit */int) (((-(var_4))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((-1864766761092489102LL), (-1864766761092489102LL))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_4 [i_0 + 1])))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [1LL])), (arr_1 [i_2]))))));
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(274003851))), ((+(((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((arr_4 [i_2]) * (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1])))))) ? (((/* implicit */unsigned int) -274003835)) : ((+(var_6))))))))));
                }
            } 
        } 
    } 
}
