/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103491
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
    var_17 |= ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) var_2);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)82)) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */long long int) min((((/* implicit */int) ((short) arr_6 [9] [i_0] [i_2]))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) (+(1099509530624LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) (short)-18368))))) : (var_15)))));
                            var_20 *= ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) (_Bool)0)), (-7117920834053478323LL))), ((+(1099509530624LL)))));
}
