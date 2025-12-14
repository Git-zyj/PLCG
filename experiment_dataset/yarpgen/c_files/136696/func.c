/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136696
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
    var_10 = ((/* implicit */unsigned int) var_2);
    var_11 = ((/* implicit */unsigned long long int) (+(max((var_5), (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-2912)) ? (2147450880U) : (2147450880U)));
                var_13 = ((/* implicit */short) arr_0 [i_0]);
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) 2147450868U);
                arr_6 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 4] [(signed char)10])) ? (((/* implicit */unsigned long long int) (+(var_5)))) : (((arr_0 [i_0]) ? (arr_2 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1]))))))), (var_2)));
                var_14 = ((/* implicit */signed char) (unsigned char)214);
            }
        } 
    } 
    var_15 = ((/* implicit */short) var_2);
}
