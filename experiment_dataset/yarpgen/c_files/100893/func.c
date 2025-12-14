/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100893
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) -411727046)) <= (0U)));
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (((!(((((/* implicit */long long int) arr_1 [i_0])) > (9223372036854775807LL))))) ? (((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-60)) + (2147483647))) << (((arr_5 [i_0] [i_0] [i_0 + 2] [i_0]) - (2411658089077461256ULL)))))) ? (((/* implicit */unsigned long long int) (+(1776838029U)))) : (((unsigned long long int) arr_5 [i_2] [8LL] [i_0] [i_0])))) : (((((((/* implicit */int) arr_7 [i_2] [1ULL] [i_0])) > (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])))) ? (((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */unsigned long long int) -9223372036854775799LL)) : (14808117264791342628ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) (unsigned char)85))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) -1055320826738344023LL);
}
