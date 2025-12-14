/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135657
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
    var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_9)) ? ((~(var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) var_11))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)12185))));
                    var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) (short)-20168)), (2104323685U)));
                    var_20 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) arr_2 [i_2] [i_0] [i_2 - 3])));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) var_11);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 9; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551594ULL)))))));
                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)19020)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 0ULL)))) - (((long long int) 16769024U)))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
}
