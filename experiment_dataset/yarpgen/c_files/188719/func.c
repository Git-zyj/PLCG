/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188719
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3)))) : (var_12)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 *= ((/* implicit */short) var_0);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(short)12] [i_1] [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) var_8))))) : (arr_1 [i_1] [i_0]))) ^ (((/* implicit */unsigned int) ((((arr_3 [i_0]) || (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((signed char) var_7))))))));
                arr_8 [i_0] &= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((arr_3 [i_0]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))))), (((unsigned int) ((arr_2 [i_0]) + (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
                var_16 += ((/* implicit */_Bool) var_11);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                arr_15 [(unsigned short)10] [i_3] [i_3] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_12 [i_3])))) ? (((unsigned long long int) arr_11 [i_2])) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_13 [i_3] [i_3] [i_2])), (arr_14 [i_2])))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((unsigned short) var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2]))))) : (((/* implicit */int) var_2))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned char) 17405084667308394240ULL))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (var_1))))))));
}
