/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103300
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_0] [i_0] = arr_0 [10];
                    var_15 = ((/* implicit */short) max((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((1484132142U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53)))))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-90)) - (((/* implicit */int) (signed char)90)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)9536), (((/* implicit */unsigned short) min(((signed char)-90), ((signed char)82))))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) (+(var_4)))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)49954)) <= (-1672928847)))))));
    var_17 = ((/* implicit */short) min((((/* implicit */int) var_9)), ((+(var_6)))));
    var_18 &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (signed char)(-127 - 1)))))) % (((((/* implicit */_Bool) (unsigned short)49958)) ? (((/* implicit */int) (signed char)-116)) : (var_6))))) / (((/* implicit */int) var_9))));
}
