/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112780
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
    var_10 = min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_0)))) ? (((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (var_8))))), (max((((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), ((-(var_8))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)53612)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11934))) : (2925154642U)));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) 3477318756U))));
        arr_2 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1]))));
        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1]))));
    }
    for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                {
                    arr_11 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 4; i_5 < 18; i_5 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_2] [i_5] [8] [i_5] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5 - 4] [i_5 - 3] [i_5] [i_5 - 3] [i_1 - 1])) ? (arr_14 [(unsigned char)11] [i_1 + 1] [i_1 + 1] [i_5 - 2] [i_1 + 1]) : (arr_14 [i_1 - 1] [i_5 - 2] [i_5] [i_5 - 2] [i_1 - 1])))) ? (arr_12 [17U] [i_1 - 1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) min((arr_14 [2] [i_1 + 1] [i_1 + 1] [i_5 - 2] [i_1 + 1]), (((/* implicit */unsigned int) arr_3 [i_1 - 1])))))));
                                arr_17 [i_1] [i_2] [i_1] [i_4] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)53587)), (2147479552)));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) max((((2147479551) % (((/* implicit */int) var_0)))), (((/* implicit */int) ((arr_10 [i_1]) < (((/* implicit */int) (unsigned short)11907)))))));
                    var_15 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_5 [i_1] [i_2] [12LL])), (max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)15)) && (((/* implicit */_Bool) arr_9 [i_1 + 1] [i_2] [i_1] [i_1 + 1]))))), (max((arr_15 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] [i_3]), (((/* implicit */int) arr_4 [i_2]))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1 + 1])) || (((/* implicit */_Bool) 0U))))) << ((((-(742614292938286932LL))) + (742614292938286961LL)))))));
        arr_18 [i_1] [i_1] = arr_12 [i_1] [i_1 - 1] [i_1] [i_1] [i_1];
    }
    var_17 = var_4;
}
