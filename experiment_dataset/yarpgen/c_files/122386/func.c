/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122386
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_19 ^= ((/* implicit */short) (~(var_18)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) 18446744073709551606ULL))));
                                var_21 = ((/* implicit */unsigned long long int) (unsigned short)18804);
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) & (((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) var_2))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (18446744073709551613ULL)))))));
                            }
                            arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */long long int) (unsigned char)238);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) | (21ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))) & (var_12)));
}
