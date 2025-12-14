/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151120
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1 - 1] [(short)7] [i_0] &= ((/* implicit */signed char) var_5);
                    arr_9 [(_Bool)1] [i_1 - 1] [i_0] &= ((/* implicit */unsigned int) -7365466318367426794LL);
                    var_10 = ((/* implicit */unsigned long long int) (short)-27856);
                    arr_10 [i_0] [i_1 + 2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)121)), (arr_5 [i_0])));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */int) (+(var_7)));
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-15)) + (2147483647))) << (((((-354262358298812897LL) + (354262358298812916LL))) - (19LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)109), (((/* implicit */unsigned char) var_8)))))) : (var_9))))));
    var_13 = min((((/* implicit */unsigned long long int) max(((+(var_2))), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)123)))))), (9128210493317629366ULL));
    var_14 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : ((-9223372036854775807LL - 1LL)));
}
