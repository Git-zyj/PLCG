/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17166
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
    var_17 = ((/* implicit */short) (+(((/* implicit */int) (short)-16384))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [7LL] [i_0] [i_2] [5ULL] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_2)) : (arr_2 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) : (16639484478395409927ULL))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] = min((((/* implicit */int) (signed char)-36)), (((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-93)) + (2147483647))) << (((1807259595314141689ULL) - (1807259595314141689ULL)))))) ? (((/* implicit */int) (unsigned char)177)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) (signed char)-93)))))));
                        arr_12 [i_1] [(unsigned short)9] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))));
                    }
                    var_18 -= ((/* implicit */signed char) (-((~((~(1807259595314141689ULL)))))));
                }
            } 
        } 
    } 
}
