/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1723
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
    for (short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max(((unsigned short)56151), (((/* implicit */unsigned short) (unsigned char)54)))))));
                                var_18 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_0 [i_4] [i_3 - 1])) ? (((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56151))))) : (((/* implicit */long long int) max((-1381987318), (((/* implicit */int) (signed char)-78))))))));
                                arr_16 [i_4] [i_3] [i_1] = ((/* implicit */signed char) ((long long int) min(((~(-3841578454252761700LL))), (arr_2 [i_0 + 2]))));
                            }
                        } 
                    } 
                } 
                var_19 = (unsigned short)9390;
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 17; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 4) 
        {
            {
                var_20 ^= ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) var_6)))));
                var_21 = ((/* implicit */unsigned char) ((((arr_13 [i_5] [i_6 + 1] [i_6] [i_5 + 2] [i_6 + 1] [i_5] [i_5]) ? (((/* implicit */int) arr_13 [i_5] [i_6] [i_6] [i_5 - 1] [i_6 + 1] [i_5] [i_5 + 2])) : (((/* implicit */int) arr_13 [i_5] [i_6] [i_5] [i_5 + 2] [i_6 - 1] [i_5] [i_6 + 2])))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_13 [i_5] [i_6] [i_6] [i_5 + 2] [i_6 + 1] [i_6] [i_6])) : (((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_5 - 1] [i_6 - 1] [i_6] [i_5]))))));
                arr_22 [i_6] [i_6] = ((/* implicit */short) ((min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_19 [i_5] [i_6 + 1])), (var_16)))), ((+(var_13))))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5)))))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
