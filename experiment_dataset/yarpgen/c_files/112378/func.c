/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112378
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
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-84)) ? (arr_0 [i_0 + 3] [i_0 + 1]) : (arr_0 [i_0] [i_0 + 3])));
        var_16 = ((/* implicit */unsigned short) ((arr_1 [i_0]) >> (((/* implicit */int) ((_Bool) 511)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = 356796297;
                            arr_14 [i_0] [i_3] [i_2] [i_0] [i_4] = ((/* implicit */signed char) (-(arr_1 [i_0])));
                        }
                        for (int i_5 = 1; i_5 < 17; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) arr_7 [i_0 + 1])) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (arr_11 [(signed char)0] [(signed char)0] [i_2] [i_3]) : (arr_10 [i_2]))) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_5 + 3]))))));
                            arr_17 [i_0 + 2] [i_0] [i_0] = (signed char)72;
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((((/* implicit */int) var_12)) | (((/* implicit */int) arr_8 [i_0] [10] [10] [17LL])))) + (2147483647))) >> (((((/* implicit */int) (signed char)-84)) + (100))))))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_0 - 2] [i_0 - 2] [i_5] [i_0 - 2] [i_5 + 2])))))));
                        }
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (8380416LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 150180109)) ? (((/* implicit */int) (signed char)-27)) : (arr_10 [i_3])))))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)44699))));
    }
    var_22 = ((/* implicit */_Bool) max((var_22), (var_14)));
}
