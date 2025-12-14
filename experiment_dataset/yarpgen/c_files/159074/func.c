/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159074
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
    var_17 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) (short)-12695)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (signed char)106)))), (((/* implicit */int) (unsigned char)114)))) ^ (((/* implicit */int) (unsigned char)192))));
    var_18 = ((/* implicit */signed char) var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) (short)-1);
                            arr_10 [i_1] [i_1 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) -797824641)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)111)) ^ (-896500122))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) max((var_20), (min((((/* implicit */long long int) (_Bool)1)), (-12LL)))));
                arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) arr_7 [i_0] [i_1] [i_1 + 1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                {
                    arr_21 [i_4] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)20740)) < (((/* implicit */int) (_Bool)1))));
                    arr_22 [i_6] [i_4] = -1746268391;
                }
            } 
        } 
    } 
}
