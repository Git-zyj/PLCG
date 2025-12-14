/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137385
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))));
    var_15 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_7))))), (((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_4)) ? (var_4) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (var_12)))) ? (((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_10)) : ((~((~(((/* implicit */int) var_10))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */_Bool) var_10);
                var_17 = var_0;
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_18 ^= ((/* implicit */int) arr_2 [i_2] [(_Bool)1]);
                            arr_13 [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) var_11)))));
                            var_19 = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_3] [i_2] [(unsigned short)7] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_6 [i_0])))))) >= ((+(((/* implicit */int) ((short) arr_1 [i_0])))))));
                            arr_14 [8U] [i_1] [i_0 + 1] = ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) var_2)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (unsigned int i_5 = 3; i_5 < 11; i_5 += 2) 
                    {
                        {
                            arr_21 [i_1] [i_1] [i_4] [i_5] = ((/* implicit */signed char) ((_Bool) min((((/* implicit */unsigned short) (signed char)13)), ((unsigned short)55))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2096160144U)) - (4256241397766300416ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
