/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148030
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_14 ^= ((/* implicit */long long int) var_9);
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_0]))))))) ? (((((/* implicit */_Bool) var_8)) ? (((arr_1 [i_1] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18684))))))));
                            arr_9 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) ((unsigned char) (short)-12601))) : (((/* implicit */int) ((short) arr_6 [i_2] [(short)9] [(short)9]))))) << (((((((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_5 [i_0] [i_2] [i_3]))))))) + (5055369149943048431LL))) - (14LL)))));
                            var_16 ^= ((/* implicit */short) arr_3 [i_1]);
                            var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */short) var_3))))) ? (max((((/* implicit */unsigned long long int) var_6)), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_2] [i_2])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_2])) / (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149))) : (var_11))) : (min((var_11), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1])))));
                        }
                    } 
                } 
                var_18 |= ((/* implicit */signed char) max((-7869001343669476446LL), (((min((-7869001343669476449LL), (((/* implicit */long long int) (short)-1)))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))));
                arr_10 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_1] [i_1]);
            }
        } 
    } 
}
