/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132906
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) (-(((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 4281494517U)) : (var_6))), (((/* implicit */long long int) ((signed char) 4281494523U)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */unsigned short) (+(13373813220896118075ULL)));
                        arr_12 [i_0] [(signed char)2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((signed char) ((var_6) - (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                    }
                    arr_13 [i_0] [i_2] [i_0] [i_0] = ((arr_0 [i_1]) >> (((arr_0 [i_0]) - (423595486U))));
                }
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    arr_18 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) min((5072930852813433528ULL), (5ULL)));
                    arr_19 [i_1] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_1 [i_0])))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        var_12 = ((/* implicit */int) arr_23 [i_5]);
        var_13 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_5])) ? (((/* implicit */int) arr_23 [i_5])) : (((/* implicit */int) arr_23 [i_5]))))), (min((min((var_9), (var_9))), (((/* implicit */unsigned int) arr_21 [i_5])))));
        arr_24 [(unsigned char)19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_23 [i_5]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_5])))))) : (max((min((4281494535U), (((/* implicit */unsigned int) arr_23 [i_5])))), (var_8)))));
    }
}
