/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14689
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_0 - 1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */unsigned int) var_5)) : (arr_1 [i_0 - 2]))) : (((arr_1 [i_0 + 1]) + (arr_1 [i_0 + 1])))));
                    arr_10 [i_0 - 2] [i_1] [8U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65522))) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) arr_8 [i_1] [6U])))))))));
                    arr_11 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) -718030918))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_2]))) : (arr_1 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_8 [i_0] [i_0])), (arr_2 [i_2] [i_0 + 1])))))));
                    arr_12 [(_Bool)0] [(signed char)10] [(_Bool)0] [i_2] = ((/* implicit */int) arr_8 [1LL] [i_0]);
                    arr_13 [i_0 - 1] = ((/* implicit */int) 4193556182981317370ULL);
                }
            } 
        } 
    } 
    var_19 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
}
