/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163292
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
    var_20 = ((/* implicit */unsigned short) var_9);
    var_21 = ((/* implicit */int) var_9);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((9LL), (((/* implicit */long long int) 2875676781U))))))) ? ((+(((((/* implicit */_Bool) 12LL)) ? (((/* implicit */int) (short)23005)) : (((/* implicit */int) (short)21616)))))) : ((~(((((/* implicit */_Bool) (short)22995)) ? (((/* implicit */int) (_Bool)1)) : (var_7)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((short) (short)16994))) : (((/* implicit */int) max((var_14), ((short)-21614)))))))));
                                arr_14 [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_9)) ? (512) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (short)-32764)) == (((/* implicit */int) (short)-22990)))))))));
                                arr_15 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)7439)), ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) var_15)) ? (-1) : (((/* implicit */int) (short)2047)))) : (((((/* implicit */_Bool) -21)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (unsigned char)177)))));
                }
            } 
        } 
    } 
}
