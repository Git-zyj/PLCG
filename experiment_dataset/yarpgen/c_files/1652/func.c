/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1652
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] &= ((/* implicit */signed char) (~((~(((/* implicit */int) ((short) -3937248780980726345LL)))))));
                var_19 = ((/* implicit */unsigned int) ((var_3) * (((/* implicit */unsigned long long int) max((max((var_7), (((/* implicit */int) (short)-23882)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [9] [9]))))))))));
            }
        } 
    } 
    var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) ((unsigned char) var_16))), (min((((/* implicit */short) (signed char)93)), ((short)31)))))) ? (((/* implicit */int) var_18)) : (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1603))))) / (((/* implicit */int) ((short) var_0)))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) (signed char)-94)) : (var_14)))))))));
                arr_13 [i_2] = var_14;
                arr_14 [i_3] [i_2] [(unsigned short)14] = arr_0 [i_3];
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_4))));
}
