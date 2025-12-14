/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109920
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
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 += ((/* implicit */unsigned char) ((((unsigned long long int) ((long long int) (short)7106))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_18 = ((unsigned short) max(((unsigned short)32350), ((unsigned short)33205)));
                            arr_11 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)32350)) ? (((/* implicit */unsigned int) (~(min((1858690456), (((/* implicit */int) (unsigned short)32331))))))) : (max((((/* implicit */unsigned int) var_15)), (((((/* implicit */_Bool) var_15)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                            var_19 |= ((/* implicit */unsigned char) var_10);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_6);
}
