/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18744
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_6 [i_0 - 3] [i_1 - 1] [i_2] = ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) ((((/* implicit */_Bool) 1ULL)) || (((/* implicit */_Bool) 18446744073709551614ULL))))));
                    arr_7 [i_0] [(short)19] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) arr_0 [i_2]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) | (var_18))) / (var_2)));
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) arr_10 [i_3])));
        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        arr_12 [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3]))))) != ((-(((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3]))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
        arr_13 [i_3] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_1 [i_3] [i_3]) : (arr_1 [(signed char)11] [i_3]))));
        var_22 &= ((/* implicit */unsigned long long int) arr_8 [i_3]);
    }
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        var_23 = ((/* implicit */unsigned int) arr_4 [8U]);
        arr_16 [i_4] = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */long long int) arr_2 [i_4])), (var_0))));
    }
}
