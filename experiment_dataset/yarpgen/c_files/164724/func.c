/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164724
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
    var_13 = ((/* implicit */signed char) var_1);
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)108))));
    var_15 = ((/* implicit */signed char) var_7);
    var_16 = 726553882365822813LL;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_18 += ((/* implicit */short) ((((1943530255U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))))) << (((((((/* implicit */_Bool) 1943530229U)) ? (17572718960218360695ULL) : (14433263971969230479ULL))) - (17572718960218360670ULL)))));
            arr_5 [i_0] = ((/* implicit */short) ((signed char) ((var_7) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)4] [4ULL]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_13 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2 + 3] [i_2 + 3] [(unsigned short)6] [i_2 - 1])) ? (726553882365822784LL) : (((/* implicit */long long int) arr_6 [i_2 + 3] [i_2 + 3] [i_2 - 1] [i_2 + 4]))));
                        arr_14 [i_3] [i_3] [i_2] [i_1] [11LL] = ((/* implicit */long long int) arr_0 [i_0] [i_2]);
                        var_19 -= var_8;
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -726553882365822785LL)) ? (arr_3 [i_2 - 1] [i_2] [i_2 + 3]) : (arr_3 [i_0] [6U] [i_2 + 3])));
                        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 + 4] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-51))));
                    }
                } 
            } 
        }
    }
}
