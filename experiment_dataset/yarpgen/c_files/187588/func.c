/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187588
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
    var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_7)) : (var_11)))) ? ((~(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (var_2)));
    var_17 = ((/* implicit */long long int) var_8);
    var_18 = min(((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_10)) : (8583030689937983953ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_13)) ? (3358556024U) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((int) ((signed char) arr_0 [i_1])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((int) var_10));
                                arr_14 [i_1] [i_1] [i_1] [(unsigned char)3] [i_2] = ((/* implicit */short) ((unsigned char) (~(arr_10 [i_2] [i_3] [i_0] [i_1] [i_2]))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)149)) ? (var_8) : (min((4253708499U), (((/* implicit */unsigned int) ((signed char) arr_8 [(unsigned short)5])))))));
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */long long int) (~(var_14)));
}
