/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124811
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) (short)-10893)) ? ((~(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (unsigned short)65535)))))))));
                var_17 = ((/* implicit */unsigned int) ((short) arr_2 [i_0]));
                var_18 = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_6 [i_2] [3U] = ((/* implicit */short) (((~(70368744177536ULL))) <= (((unsigned long long int) ((unsigned char) arr_2 [i_2])))));
        var_19 = ((/* implicit */short) ((((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) > (18446673704965374078ULL)))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) arr_3 [i_2] [i_2] [i_2])))) : (arr_1 [i_2]))))));
    }
}
