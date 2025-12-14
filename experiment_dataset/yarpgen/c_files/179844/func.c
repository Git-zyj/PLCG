/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179844
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-1)) ^ (-652738582)))) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((var_3) + (8957606969774709854LL)))))) : (((((/* implicit */_Bool) 3U)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80)))))))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((unsigned int) arr_0 [i_0])) >> (((448U) - (438U)))))) <= (((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))))) : (9677035485960655426ULL))))))));
    }
    var_18 = ((/* implicit */_Bool) var_10);
    var_19 = ((/* implicit */int) var_14);
    /* LoopNest 3 */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        for (short i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(4294966848U)))) ? (((/* implicit */int) ((arr_9 [i_1] [i_2]) || (((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_2 + 1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) var_16))))));
                    var_21 = ((/* implicit */signed char) var_14);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        for (int i_5 = 1; i_5 < 22; i_5 += 2) 
                        {
                            {
                                arr_17 [i_1] [i_2] [i_2] [9U] [i_4] [i_5] = ((/* implicit */unsigned short) 6U);
                                arr_18 [i_4] [i_5] = ((/* implicit */short) ((((((((/* implicit */int) arr_15 [i_1] [i_2 + 1] [(short)4] [i_4] [i_5] [i_4] [i_1])) | (((/* implicit */int) arr_16 [i_5 + 1] [i_1] [i_2 - 1] [i_4] [i_5])))) + (2147483647))) << (((((((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [20])) : (((/* implicit */int) arr_10 [i_1] [i_2 + 2])))) + (15302))) - (19)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) (unsigned short)24800);
                }
            } 
        } 
    } 
}
