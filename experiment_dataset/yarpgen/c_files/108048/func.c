/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108048
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_17 = ((_Bool) (short)32767);
                            var_18 = ((/* implicit */long long int) 3058887802U);
                        }
                        arr_13 [i_0] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [i_3]))));
                    }
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) min((2827650430U), (((/* implicit */unsigned int) (short)32754))))), (min((18446744073709551605ULL), (var_8))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1710826257U))))))))));
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */short) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56673)))))))));
    var_21 = ((/* implicit */unsigned long long int) var_6);
}
