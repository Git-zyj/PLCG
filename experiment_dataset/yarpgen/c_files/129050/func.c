/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129050
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
    var_19 &= ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_5)) ? (15204979780110368315ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (unsigned short)17873)) - (17845))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min(((-(1259595123U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))))))))));
                var_21 *= ((/* implicit */unsigned short) var_4);
                arr_7 [i_0] [i_0] [i_1] |= (signed char)-1;
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_10);
}
