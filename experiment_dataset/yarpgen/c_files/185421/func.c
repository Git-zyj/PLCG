/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185421
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
    var_18 = ((/* implicit */unsigned long long int) var_11);
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)3840)) | (((/* implicit */int) var_16))))), (min((((/* implicit */unsigned long long int) var_8)), (var_3)))))) ? (((long long int) var_15)) : (((/* implicit */long long int) max((max((((/* implicit */int) (short)-23834)), (15))), (((((/* implicit */_Bool) (short)-996)) ? (15) : (((/* implicit */int) (unsigned short)40650)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_3 [i_0 + 1]), (arr_3 [i_0 - 1])))) ? (((unsigned long long int) 18446744073709551610ULL)) : (var_9))))));
        arr_4 [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32761))) / (arr_3 [i_0 - 1])))) && ((!(((/* implicit */_Bool) var_7))))));
    }
    for (unsigned char i_1 = 3; i_1 < 10; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 11; i_2 += 3) 
        {
            for (long long int i_3 = 2; i_3 < 10; i_3 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((unsigned long long int) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) var_15)) : (0ULL))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4779)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 2] [i_2 + 2]))) : (arr_2 [i_1 - 3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_12))) ? (((long long int) var_15)) : (9223372036854775807LL))))));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) 2147483638))));
    }
    var_24 = ((/* implicit */unsigned long long int) ((short) ((signed char) ((unsigned short) var_5))));
}
