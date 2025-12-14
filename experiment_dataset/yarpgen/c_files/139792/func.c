/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139792
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8634273450593440233LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) ? (((-8634273450593440233LL) & (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146))) : (var_8))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3375415012U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)2))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (10762210867243228858ULL)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
                var_17 = ((/* implicit */unsigned char) var_9);
                arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (max((((((/* implicit */_Bool) 4294967295U)) ? (arr_3 [7ULL]) : (((/* implicit */long long int) arr_2 [i_1] [i_0] [i_0])))), ((-(arr_3 [i_0]))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0])))))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 11; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */int) arr_9 [i_2]);
                var_19 = ((/* implicit */long long int) arr_4 [i_2] [i_2 + 1]);
            }
        } 
    } 
}
