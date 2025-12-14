/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177325
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
    var_16 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) arr_3 [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) arr_4 [i_0] [i_0]);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 255U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [(short)4] [i_3] [i_4] [i_4]))) : (min((((0LL) / (((/* implicit */long long int) 4294967041U)))), (((/* implicit */long long int) (-(((/* implicit */int) (short)15)))))))));
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) 4294967041U)) : (3LL)))) ? (min((var_14), (((/* implicit */long long int) (short)-15)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)39305)))))));
                                var_18 &= ((/* implicit */signed char) ((unsigned long long int) (signed char)(-127 - 1)));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) arr_7 [i_0] [i_0])))))));
                var_20 = ((/* implicit */unsigned short) var_1);
            }
        } 
    } 
}
