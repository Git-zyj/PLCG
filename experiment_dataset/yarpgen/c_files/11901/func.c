/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11901
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))));
        var_21 = ((/* implicit */unsigned int) 0LL);
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_12))))))) : (5LL)));
        var_22 = ((/* implicit */long long int) min((var_22), (((((arr_1 [i_0] [i_0]) + (9223372036854775807LL))) << (((((arr_1 [i_0] [i_0]) + (8517767156329566783LL))) - (19LL)))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
        {
            {
                var_23 = ((/* implicit */long long int) var_14);
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    for (unsigned short i_4 = 1; i_4 < 9; i_4 += 3) 
                    {
                        {
                            var_24 -= ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (short)-5))) > (17LL))) || (((/* implicit */_Bool) (-((~(((/* implicit */int) (short)11707)))))))));
                            var_25 = ((((/* implicit */_Bool) var_4)) ? (arr_1 [i_2] [13LL]) : (max((max((19LL), (var_8))), (((((/* implicit */_Bool) var_8)) ? (arr_10 [i_4] [i_4] [i_3] [i_4]) : (((/* implicit */long long int) arr_7 [i_1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
