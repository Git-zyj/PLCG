/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151691
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 -= (signed char)-1;
                arr_5 [i_1] [i_1] [(short)1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-7)) | (((/* implicit */int) var_0))))) & ((~(arr_2 [i_1] [i_0])))));
                arr_6 [i_0] = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_8))))))));
                arr_7 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((arr_3 [i_0]), (arr_3 [i_0])))) <= (((0ULL) - (((/* implicit */unsigned long long int) 961664371U))))));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)0)) - (((/* implicit */int) (signed char)-27)))), (((/* implicit */int) min((max(((short)-18372), (arr_4 [i_0]))), (((/* implicit */short) var_6)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((_Bool) (unsigned char)255)))));
    var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)7)) : (((((/* implicit */int) (signed char)115)) / (((/* implicit */int) var_13))))));
}
