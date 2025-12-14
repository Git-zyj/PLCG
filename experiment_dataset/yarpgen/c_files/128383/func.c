/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128383
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_4] |= ((/* implicit */_Bool) arr_0 [i_0 + 1]);
                                var_14 = ((/* implicit */int) max((2518028463U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33092))) ^ (-4294967296LL)))))))));
                            }
                        } 
                    } 
                    arr_13 [6ULL] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)58909)) : (((/* implicit */int) (unsigned char)41))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_15 = ((((/* implicit */int) arr_15 [i_0] [i_0] [i_6])) == (-636866690));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_5]))))) && (((/* implicit */_Bool) ((2147483624) - (1129951868))))))) | (max((((((/* implicit */_Bool) -1498918456)) ? (((/* implicit */int) (short)14336)) : (((/* implicit */int) var_4)))), ((~(((/* implicit */int) var_0)))))))))));
                                arr_18 [i_6] [i_2] = ((/* implicit */short) -1686433658);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) var_2);
}
