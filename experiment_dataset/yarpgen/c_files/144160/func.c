/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144160
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) arr_2 [(unsigned char)11]);
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_2 + 2] [i_0])) || ((!(((/* implicit */_Bool) arr_3 [i_1] [i_2 + 1] [i_0]))))));
                    var_21 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8U)) ? (8U) : (11U)))), (max((3216607744009015590ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned char)255))))) : (arr_3 [(_Bool)1] [i_2] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_3])) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) ((unsigned char) arr_10 [0] [i_1] [i_2 + 1] [i_1] [i_2 + 1] [i_0] [i_2 + 1]))) : (arr_3 [i_0] [i_1] [i_0])))));
                                var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 17173983908576894317ULL)) ? (((/* implicit */unsigned long long int) arr_9 [6] [i_4] [i_4] [i_3] [i_4] [(signed char)11])) : (1272760165132657299ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [19ULL] [i_2] [i_0] [(unsigned short)10]))) : (max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_4] [i_2])), (1272760165132657298ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        for (int i_6 = 1; i_6 < 18; i_6 += 2) 
        {
            {
                var_24 = ((/* implicit */unsigned short) arr_3 [i_6] [16U] [i_5]);
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)79)) ? ((-(1272760165132657299ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1272760165132657298ULL)) ? (562947805937664LL) : (((/* implicit */long long int) (-2147483647 - 1))))))));
                var_26 = (((+(max((((/* implicit */unsigned int) (_Bool)1)), (3990121834U))))) ^ (min((4294967288U), (8U))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 3957086959856776527LL)) ? (-3957086959856776528LL) : (((/* implicit */long long int) 8U)))) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3))))));
}
