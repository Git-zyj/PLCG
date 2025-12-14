/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164933
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 204420136)) ? (((/* implicit */int) (short)-8520)) : (var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) var_6)))))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_11)))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_2 + 1])) >= (arr_1 [i_0]))))));
                    var_19 = ((/* implicit */unsigned long long int) var_17);
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) arr_5 [i_0] [i_1])), ((short)8521)))) > (((/* implicit */int) arr_6 [i_0] [i_2 - 1] [i_2 + 2]))))) + (((/* implicit */int) ((arr_7 [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2 - 1]) || (((/* implicit */_Bool) (short)-8512)))))));
                    var_21 = var_2;
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_4))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8))))));
}
