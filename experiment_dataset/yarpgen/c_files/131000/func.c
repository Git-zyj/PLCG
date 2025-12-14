/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131000
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
    var_14 |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (var_11)))))), (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((var_13) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-31497))))) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))))), (((((/* implicit */unsigned long long int) (-(arr_1 [i_0] [i_1])))) * (arr_4 [i_0] [i_0] [4U]))))))));
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) var_10)) * (((((/* implicit */int) arr_0 [i_0] [i_1])) << (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [8U])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [9LL]))))))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
                var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [1LL] [i_1])) ? (((int) arr_2 [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [7U])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_0)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)31482))) * (arr_4 [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_11))) ? ((+(var_0))) : (var_3)));
}
