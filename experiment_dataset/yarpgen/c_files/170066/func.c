/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170066
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
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-11)), ((unsigned char)255)))), (var_8)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((((/* implicit */_Bool) (short)-17035)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))), (arr_0 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_18 -= ((/* implicit */long long int) (short)31555);
                        arr_12 [i_0] [i_1] [i_1] [(unsigned char)0] [i_3] = max((((/* implicit */unsigned long long int) (short)-17035)), (11421054315061174334ULL));
                    }
                } 
            } 
        } 
        var_19 += ((arr_9 [8ULL] [i_0] [i_0] [(unsigned char)7]) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))), (((unsigned int) var_3)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775783LL)))))))));
    }
}
