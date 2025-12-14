/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165599
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
    var_15 = ((/* implicit */unsigned long long int) ((int) (_Bool)0));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) 4413727592787343504LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (881083325923971477LL)))))) & (((((var_13) / (((/* implicit */unsigned long long int) 4413727592787343512LL)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (0U))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) arr_5 [i_1]);
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (short)(-32767 - 1)))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_2 [i_0] [i_0]) / (arr_2 [i_2] [i_2]))) <= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)187))))))))) : (4294967295U)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) var_0);
}
