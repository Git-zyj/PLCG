/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111077
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [(short)4] = ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        {
                            arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3] [i_0])) | (var_7)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_16)) : (var_10))) : (((/* implicit */int) var_9)))) << (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_11)))))))));
                            arr_12 [i_2 - 1] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned short) arr_3 [i_0]))))) ? (max((((/* implicit */long long int) var_7)), (var_6))) : (var_1))) - (((/* implicit */long long int) ((/* implicit */int) ((short) var_1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((unsigned char) var_13));
    var_19 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((int) var_8))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)23283)) : (((/* implicit */int) (short)-28165))))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
}
