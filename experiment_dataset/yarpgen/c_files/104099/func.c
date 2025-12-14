/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104099
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) (~((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)152)) || (((/* implicit */_Bool) (unsigned char)152))))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_11 = ((/* implicit */_Bool) min((var_11), (arr_0 [i_0])));
        var_12 *= ((/* implicit */_Bool) var_6);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */long long int) arr_3 [i_1]);
        var_14 = ((/* implicit */unsigned int) ((arr_1 [i_1] [i_1]) >> (((((/* implicit */int) arr_3 [i_1])) - (52015)))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                {
                    arr_10 [(unsigned short)5] [(unsigned char)0] [i_3] = ((/* implicit */long long int) arr_4 [i_3] [i_2]);
                    var_15 *= ((/* implicit */unsigned char) var_1);
                    var_16 = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)2));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned long long int) var_1);
}
