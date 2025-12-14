/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142939
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10)))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) (signed char)-22);
                    arr_9 [i_0 - 2] [i_1] = (signed char)-40;
                    var_17 = ((/* implicit */unsigned int) min((max((((/* implicit */int) (short)20884)), ((~(((/* implicit */int) arr_7 [i_2] [i_1] [i_1] [i_0])))))), (max(((~(((/* implicit */int) arr_4 [i_2] [i_1] [i_0 - 1])))), (((/* implicit */int) ((3835523312823713251LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        arr_12 [i_3] [i_0] [i_2] [6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
                        var_18 *= (_Bool)1;
                        var_19 = var_8;
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_4] = ((/* implicit */int) max((((/* implicit */long long int) arr_4 [i_1] [i_1] [i_4])), (max((((/* implicit */long long int) var_10)), (var_12)))));
                                var_20 *= ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */signed char) (_Bool)1)), (arr_17 [i_0] [i_2] [i_4] [i_5])))))));
                                var_21 *= min((((/* implicit */unsigned int) var_9)), (((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0]))) : (0U))));
                                arr_20 [i_1] [i_1] = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) var_3)))), (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_0);
}
