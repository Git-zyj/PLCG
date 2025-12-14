/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180459
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (+(((((((/* implicit */int) var_13)) & (((/* implicit */int) var_2)))) | (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16)))))));
                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 2) 
        {
            {
                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) var_16))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (arr_11 [i_3 - 1] [i_3 + 2])))) : (((/* implicit */int) ((arr_11 [i_3 + 2] [i_3 + 1]) < (arr_11 [i_3 + 1] [i_3 + 1]))))));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)27))))) ? (((long long int) arr_10 [i_2])) : (((/* implicit */long long int) (-(arr_12 [i_3 + 1] [i_3]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_6)))) ? (var_6) : (((((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))))));
    var_23 = var_4;
    var_24 = (~((-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_1))))))));
}
