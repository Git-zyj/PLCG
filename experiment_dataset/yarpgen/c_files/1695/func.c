/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1695
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) -603833496)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_0]))))) ? (((/* implicit */int) max(((unsigned short)44250), (var_14)))) : (((/* implicit */int) max((arr_0 [(unsigned char)13]), (((/* implicit */short) (unsigned char)245)))))))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) ((unsigned short) ((2037473495) << (((((/* implicit */int) (unsigned char)245)) - (245)))))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */long long int) arr_1 [(unsigned short)10] [i_0])), (arr_6 [i_2]))) : ((~(((((/* implicit */long long int) ((/* implicit */int) var_14))) ^ (arr_4 [i_1] [i_1] [12ULL])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (var_5)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */int) (short)15)), (var_1)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_5)) : (var_3))))))));
    var_22 = ((/* implicit */long long int) (unsigned short)44250);
    var_23 &= ((/* implicit */unsigned int) ((int) ((unsigned long long int) var_17)));
    var_24 = ((/* implicit */unsigned int) var_7);
}
