/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11113
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
    var_10 -= ((/* implicit */int) var_9);
    var_11 = (short)-16384;
    var_12 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16374)) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (short)16383))))) ? (((((/* implicit */_Bool) (short)-16385)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */int) (short)16370)))) : (((/* implicit */int) (short)-16384))))));
                            arr_11 [i_0] [i_0] [i_3] [i_2] [i_3] [i_3] |= ((/* implicit */short) ((arr_1 [i_0] [i_2]) ? (((((((/* implicit */_Bool) (short)16370)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16371))) : (arr_4 [i_1] [i_1] [i_1]))) - (((var_2) | (var_7))))) : ((+(arr_4 [i_2] [i_2] [i_1 - 1])))));
                            var_13 |= ((/* implicit */signed char) (-(((/* implicit */int) min((arr_8 [i_0] [i_0] [i_2] [i_0]), (((/* implicit */short) var_9)))))));
                        }
                    } 
                } 
                var_14 -= max(((short)16383), ((short)-16384));
            }
        } 
    } 
}
