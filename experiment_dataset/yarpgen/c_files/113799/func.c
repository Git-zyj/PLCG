/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113799
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~(9223372036854775797LL)));
        var_20 |= ((/* implicit */int) (~(arr_2 [i_0])));
    }
    for (long long int i_1 = 3; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_5 [i_1 - 2])) ? (arr_5 [i_1 - 2]) : (arr_5 [i_1 - 1])))));
        var_21 = arr_4 [(signed char)14];
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) ((((max((var_6), (((/* implicit */long long int) (unsigned char)255)))) <= (((/* implicit */long long int) arr_10 [i_2] [i_2])))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_2] [i_2]))))) : (arr_2 [i_2])));
        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))));
    }
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        for (int i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    arr_19 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) | (((/* implicit */int) arr_15 [i_5] [i_4 - 1]))))) ? (arr_14 [i_3] [i_4] [i_3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_17)))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) (+(arr_16 [i_3] [i_4] [i_3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)85)) ? (601309844U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45)))))) : ((+(arr_16 [i_3] [i_4] [i_5])))))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (arr_13 [i_3])))))));
                }
            } 
        } 
    } 
}
