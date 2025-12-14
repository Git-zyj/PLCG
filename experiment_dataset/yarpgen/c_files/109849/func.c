/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109849
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_1 + 1] = ((/* implicit */int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (429545065U)))));
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-16))));
            arr_8 [i_1 - 1] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) var_0)) & (((/* implicit */int) var_7))))));
        }
        for (int i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0 - 2] [i_2 - 3] [i_0 - 2]))) ? (((8374685802090177950LL) / (4324221582939387679LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-16)))))));
            var_18 = ((/* implicit */unsigned int) ((max((18239272043102238725ULL), (((/* implicit */unsigned long long int) (signed char)-16)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)23518)) : (((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_0 + 2])))))));
        }
        var_19 = ((/* implicit */unsigned int) min(((~(max((var_4), (((/* implicit */unsigned long long int) (short)11121)))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_0])) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_4)))));
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 4; i_3 < 11; i_3 += 4) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_12 [i_3 - 2] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -69668950)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_3] [i_3 - 1] [i_4]))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_5 = 2; i_5 < 11; i_5 += 4) 
                {
                    var_21 = ((signed char) arr_10 [i_5 + 1] [i_5 + 1] [i_5]);
                    var_22 = ((/* implicit */int) var_10);
                    var_23 = ((/* implicit */unsigned int) arr_3 [i_4 - 1] [i_4 - 1] [i_4 - 1]);
                }
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_2 [i_4]))))) ? (((long long int) arr_6 [i_3 - 4] [i_3 - 4])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)148)))))) ? (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6)))), (((/* implicit */int) min(((signed char)117), ((signed char)-115)))))) : (((((/* implicit */int) arr_21 [i_4] [i_4 - 1] [i_4] [i_4 - 1])) - (var_11)))));
                    var_25 = ((long long int) var_9);
                }
            }
        } 
    } 
}
