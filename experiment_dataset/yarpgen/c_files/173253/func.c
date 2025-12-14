/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173253
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((max((arr_1 [i_0]), (arr_1 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((arr_1 [9LL]) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_10 = ((/* implicit */short) ((((/* implicit */long long int) max(((~(var_0))), (((/* implicit */unsigned int) arr_1 [i_1]))))) - ((((_Bool)1) ? (arr_4 [i_0]) : (2296617869287753701LL)))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) arr_7 [i_0]))));
                        arr_11 [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)3)) || (((/* implicit */_Bool) -2083028270))));
                    }
                } 
            } 
        }
        var_12 = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0]);
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_13 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_0), (arr_8 [3U] [i_0] [i_0] [i_4] [i_4] [i_4]))))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (arr_12 [(unsigned char)9] [i_4] [(unsigned char)9]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned short)65533))))))))));
            var_14 = ((((/* implicit */_Bool) 1316164270U)) && (((/* implicit */_Bool) -2083028267)));
            arr_14 [i_0] = ((/* implicit */int) (-(var_7)));
        }
    }
    var_15 = ((/* implicit */unsigned int) var_8);
    var_16 *= ((/* implicit */signed char) -2083028270);
}
