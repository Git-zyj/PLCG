/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143890
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned char) var_8));
        arr_3 [(short)19] = ((/* implicit */unsigned int) 18446744073709551612ULL);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */signed char) (!((((!(((/* implicit */_Bool) (unsigned short)57344)))) || (((/* implicit */_Bool) 11466335953661815148ULL))))));
                        var_16 ^= max((((/* implicit */unsigned long long int) ((long long int) arr_0 [i_2 - 2]))), (((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))) : (arr_0 [i_2 - 1]))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 + 3])) || (((/* implicit */_Bool) arr_5 [i_2 + 3])))));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned short) var_1);
}
