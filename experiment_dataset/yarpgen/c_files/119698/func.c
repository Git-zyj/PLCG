/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119698
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
    var_16 = min((((/* implicit */unsigned long long int) var_3)), (min((var_7), (((/* implicit */unsigned long long int) (short)32767)))));
    var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - (var_8)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) (unsigned short)65535)), (arr_3 [i_0] [i_0]))), (((/* implicit */long long int) 2046896218))));
                var_18 = ((/* implicit */long long int) (unsigned short)65142);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        for (int i_3 = 2; i_3 < 18; i_3 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) (unsigned short)65517);
                var_20 = ((/* implicit */signed char) arr_8 [i_2 - 2] [2U]);
                var_21 = ((/* implicit */_Bool) var_13);
                var_22 = ((/* implicit */short) (((-(arr_6 [11ULL]))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_9)))))))));
            }
        } 
    } 
}
