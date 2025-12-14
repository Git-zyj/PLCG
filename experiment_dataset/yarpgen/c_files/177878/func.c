/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177878
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_7)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) || ((_Bool)1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [(signed char)6] [i_1]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(short)3] [(short)3])) ? (((var_0) ? (6527850726304429771LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : ((+(6527850726304429771LL))))))));
                    var_19 = ((/* implicit */_Bool) max((var_19), (arr_4 [i_0] [i_0] [i_1 + 1] [i_0])));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) (_Bool)1);
    var_21 += -6425027214455068782LL;
    var_22 ^= ((/* implicit */unsigned int) var_17);
}
