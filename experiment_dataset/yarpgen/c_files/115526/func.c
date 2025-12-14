/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115526
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
    for (long long int i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) | (arr_3 [i_0] [i_0]))) % (var_18)));
                    var_20 = ((/* implicit */unsigned int) (((+(max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (short)3522)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)3522)) <= ((-(((/* implicit */int) arr_4 [i_0]))))))))));
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */unsigned long long int) max((var_0), (((/* implicit */short) ((((/* implicit */_Bool) (short)3519)) || (((/* implicit */_Bool) (+(var_4)))))))));
    var_22 *= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */int) (short)-3507)) - (((/* implicit */int) var_1)))) / ((~(var_11)))))), (min((var_10), (((/* implicit */long long int) (+(((/* implicit */int) (short)3522)))))))));
    var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
}
