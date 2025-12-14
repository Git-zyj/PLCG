/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150245
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
    var_11 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [1U]);
        var_12 = ((/* implicit */int) (unsigned char)255);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned char) (-(325476127)));
            arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_0]);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                var_14 = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2]))) / (1949036869U))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -7209909142120010618LL)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_15 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) / (-4366084072558528133LL));
                            arr_17 [i_1] = ((/* implicit */unsigned int) 131070);
                            arr_18 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (+(arr_13 [i_3] [i_3] [i_3] [i_3] [i_3])));
                            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4]))));
                            arr_19 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_8 [(_Bool)1] [(unsigned char)1] [i_4]))))));
                        }
                    } 
                } 
            }
        }
        for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) max((arr_9 [i_0] [i_0] [0U]), (arr_5 [i_5])))) : (((((/* implicit */int) arr_5 [i_5])) & (((/* implicit */int) arr_5 [i_0]))))));
            var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 12177706862720189394ULL)) ? (((/* implicit */int) (signed char)-117)) : (-487592125))), (((/* implicit */int) var_2))));
        }
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_14 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (max((7257931785193997390LL), (((/* implicit */long long int) 131099)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) % (arr_13 [i_0] [(unsigned short)8] [(unsigned short)8] [i_0] [(unsigned short)8])))))) : (((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) (+(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
    }
    var_20 = ((/* implicit */unsigned short) var_8);
    var_21 = ((/* implicit */_Bool) var_7);
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) ((signed char) var_0)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)27))));
}
