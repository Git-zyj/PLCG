/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167496
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
    var_13 = ((/* implicit */int) ((4387766247137468959LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)13640)) && (((/* implicit */_Bool) 5551769428369187624ULL))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */int) -9223372036854775787LL);
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) max((arr_6 [i_0] [(_Bool)1] [i_2 - 2]), (((/* implicit */short) var_12)))))) && (((/* implicit */_Bool) var_6))));
                    arr_9 [20LL] [20LL] [i_1] [i_2] |= ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1)))) << ((((((+(arr_2 [i_1]))) + (3144187321405478722LL))) - (13LL))))), ((-(1474644453)))));
                }
            } 
        } 
    } 
    var_15 = var_0;
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_4))));
}
