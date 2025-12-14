/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138657
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
    var_10 |= ((/* implicit */int) ((unsigned int) var_1));
    var_11 = ((/* implicit */signed char) ((((max((((/* implicit */long long int) 584247828)), (var_1))) / (((/* implicit */long long int) (+(var_8)))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (-584247828) : (((/* implicit */int) (unsigned short)13))))) ? (((((/* implicit */_Bool) 0LL)) ? (-584247819) : (2147483645))) : (-584247831))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2 + 2] [(signed char)18] [i_2 + 2] [i_0]))))) ? (((/* implicit */unsigned long long int) (+(min((var_8), (584247814)))))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))), (((unsigned long long int) var_0))))));
                    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8191)) / (var_3)))) && (((/* implicit */_Bool) ((var_3) | (1010351728)))))) && (((/* implicit */_Bool) ((var_4) & (((((/* implicit */int) (unsigned short)65507)) ^ (((/* implicit */int) (signed char)-6)))))))));
                    var_14 = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? ((~(((/* implicit */int) (signed char)99)))) : (((/* implicit */int) ((signed char) (_Bool)1)))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_2 - 3])) ? (((/* implicit */int) arr_2 [i_1] [i_1 - 1])) : (((/* implicit */int) (_Bool)1))))) ? (arr_9 [i_0] [i_2] [i_1 - 1] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_0] [i_0]))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_6 [i_2] [i_2] [i_3]))) ? ((+(1104219612))) : (((int) (unsigned short)65507))));
                        var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (1104219615) : (((/* implicit */int) arr_2 [i_0] [8]))))) | (var_1)));
                        var_17 |= ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (-(arr_3 [i_1 + 1] [i_1] [i_2 + 2]))))));
                        arr_14 [i_0] [i_2] [i_2] [i_4] = (+(((((/* implicit */int) (signed char)-1)) - (arr_1 [i_4] [i_1 - 1]))));
                        arr_15 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */short) -867177386);
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_19 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_0)) ? (8719240618307270489LL) : (arr_9 [i_0] [i_0] [i_4] [i_4])))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(((/* implicit */int) ((signed char) -584247817))))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) -584247815)) ? (2147483647) : (1104219625)));
                            var_22 ^= ((/* implicit */long long int) ((int) 16188268805656780942ULL));
                            arr_18 [i_0] [i_0] [i_2] [i_4] [i_5] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_5] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_17 [i_1] [i_2])) : (arr_16 [(short)18] [i_5] [i_1 - 1] [i_0] [(short)18])));
                        }
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */short) ((unsigned long long int) 1721512663U));
                            var_24 = (~(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]));
                            arr_21 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) arr_11 [i_1 - 1] [i_2 - 2]);
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_2 + 1] [i_2 - 2] [i_6] [i_2 - 1])) & (-1266635727))))));
                            var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) 1563211481)))));
                        }
                        var_27 ^= ((/* implicit */int) (~(arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_4] [i_0])));
                    }
                }
            } 
        } 
    } 
}
