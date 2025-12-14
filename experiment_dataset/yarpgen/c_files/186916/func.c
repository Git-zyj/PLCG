/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186916
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
    var_18 = ((/* implicit */signed char) var_16);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) var_17)), (var_1)))))) ? (min((((/* implicit */long long int) ((short) arr_0 [i_0] [i_1]))), (arr_1 [i_0]))) : (((/* implicit */long long int) arr_3 [i_0]))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) 0LL);
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [1LL] [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [5]))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32737))) : (var_15))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1686056237902608082ULL)) ? (700543289U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_2]))))))))));
                    var_20 += ((/* implicit */_Bool) var_4);
                }
            } 
        } 
    } 
}
