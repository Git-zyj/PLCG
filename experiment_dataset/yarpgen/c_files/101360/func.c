/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101360
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [(_Bool)1] [i_2] [5U] [i_3] [(unsigned char)16] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) < (15032385536ULL)));
                                arr_15 [i_0] [i_0] [i_1] [(_Bool)1] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_0] [i_1] [i_0]))) ^ (arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4])));
                                var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_4 + 1] [i_4 + 1] [(short)2])) < (((/* implicit */int) var_14))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [(_Bool)1] [i_4 + 1] [(unsigned char)12] [i_4])))))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)235), (((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_2] [i_3]))))) ? (((/* implicit */int) ((_Bool) 18446744073709551603ULL))) : (((/* implicit */int) max((arr_3 [i_2] [i_2]), ((short)(-32767 - 1)))))))) >= (min((((/* implicit */unsigned long long int) var_8)), (min((var_0), (var_7)))))));
                                arr_16 [i_2] = ((/* implicit */unsigned int) ((((16) - (max((arr_5 [i_3]), (((/* implicit */int) var_12)))))) >= (((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_2] [i_4 + 1] [i_3])), ((unsigned short)7575))))));
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((4294967295U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120)))));
}
