/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171392
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
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)126)) >> (((((/* implicit */int) arr_0 [i_0])) + (29469))))))))));
        var_21 = ((/* implicit */_Bool) var_13);
        var_22 = ((/* implicit */unsigned long long int) max((min((var_7), (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_23 &= ((/* implicit */unsigned char) ((long long int) ((signed char) (signed char)12)));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) max((((unsigned long long int) arr_4 [i_2 - 1] [i_2])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
                        arr_13 [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_6)) ? (arr_3 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [16LL] [i_2] [i_2]))))) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))))) | (((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((((/* implicit */int) (signed char)63)) - (55))))))));
                        var_25 = ((/* implicit */long long int) var_15);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned char) max((((int) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (12291672915447462924ULL)))), (((/* implicit */int) max(((signed char)63), (((/* implicit */signed char) ((((/* implicit */_Bool) 536608768U)) && (((/* implicit */_Bool) arr_8 [i_1] [i_1]))))))))));
        /* LoopSeq 1 */
        for (signed char i_5 = 1; i_5 < 18; i_5 += 4) 
        {
            arr_17 [i_1] [i_5 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)87)) % (((/* implicit */int) (signed char)127))));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_12 [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_5]), (((/* implicit */unsigned int) (signed char)-12))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) max((((/* implicit */int) (signed char)-53)), (var_0)))))));
        }
        arr_18 [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_9 [i_1] [i_1])))) ? ((-(arr_9 [i_1] [i_1]))) : (max((6064325503134725809ULL), (arr_2 [i_1] [i_1])))));
    }
}
