/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125442
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
    var_16 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-17254)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (18446744073709551615ULL))));
    var_17 = var_11;
    var_18 = ((/* implicit */unsigned char) var_11);
    var_19 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((short) (short)-1))) ? (arr_1 [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) <= (((/* implicit */unsigned int) min((arr_3 [i_1] [i_1 + 1] [i_1 + 1]), (((/* implicit */int) ((((/* implicit */int) (unsigned short)44283)) <= (((/* implicit */int) arr_0 [i_0]))))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_1])) + (2147483647))) << (((((571097593U) << (((((/* implicit */int) (signed char)-103)) + (115))))) - (2753531904U)))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)0));
                arr_7 [i_1 + 1] [i_0] = ((int) (~(arr_3 [i_1 + 1] [i_1] [i_1])));
                var_20 -= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_3 [i_1] [(short)5] [i_1 + 1])) ? (arr_3 [i_1 - 1] [i_1] [i_1 - 1]) : (arr_3 [i_1] [i_1] [i_1 - 1]))));
            }
        } 
    } 
}
