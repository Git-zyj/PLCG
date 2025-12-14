/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18512
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
    var_12 = ((/* implicit */signed char) ((((((/* implicit */long long int) 268304384U)) <= (2160015433783047622LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (-(var_7)))) : (min((10175143605342997724ULL), (30ULL)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((var_5) ^ (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-27232)) ? (((((/* implicit */_Bool) 10175143605342997724ULL)) ? (((/* implicit */int) var_1)) : (-2021651489))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_13 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((var_0), (var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((104853096U) & (((/* implicit */unsigned int) -404292105))))));
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)23] [(unsigned short)23] [i_3]))));
                    }
                }
            } 
        } 
    } 
}
