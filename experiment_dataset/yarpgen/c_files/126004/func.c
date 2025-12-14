/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126004
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14738))) + (arr_2 [3ULL] [i_1 + 2] [i_1 - 3])))));
                    arr_8 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 3] [i_1 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) min((var_12), (arr_1 [i_0] [(unsigned short)7])))) > (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0] [1LL]))))))));
                    var_14 = ((/* implicit */short) ((unsigned char) var_6));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        var_15 = (((((_Bool)1) ? (6663171067113165396ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62546))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 1]))));
                        arr_14 [i_0] [i_0] [(short)11] [(short)11] = ((/* implicit */unsigned long long int) (~(4159492099U)));
                    }
                    for (int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) < (var_0))) ? ((-(arr_15 [i_0] [(unsigned short)3] [i_0] [i_0] [i_0] [i_0]))) : (((arr_2 [i_1] [i_1] [i_0]) | (((/* implicit */unsigned long long int) var_0))))))));
                        var_17 = ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
                        arr_18 [i_5] = ((((/* implicit */_Bool) arr_17 [i_0] [i_1 + 1] [i_3] [i_5])) ? (((int) arr_1 [i_5] [(unsigned char)1])) : (((/* implicit */int) ((((/* implicit */_Bool) 4159492099U)) || ((_Bool)1)))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5] [i_1] [i_1 + 1]))) : (((((/* implicit */_Bool) arr_0 [(unsigned short)10] [i_1])) ? (((/* implicit */unsigned long long int) var_3)) : (var_11)))));
                    }
                    var_19 = ((/* implicit */unsigned short) (-(var_3)));
                }
                var_20 = ((/* implicit */int) ((unsigned char) 135475202U));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_0);
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((-5468400075048874008LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1008))))))) >= (var_0)))))))));
}
