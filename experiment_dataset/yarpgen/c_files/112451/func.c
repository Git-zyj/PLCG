/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112451
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
    var_12 = ((/* implicit */int) var_2);
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) var_6)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_11)))))))));
    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_0)), (var_9)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((-9217064585884717680LL), (((/* implicit */long long int) (unsigned short)48995))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_1)));
                        var_16 = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned short)48978)) ? (13359311603886049612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48982))))), (((/* implicit */unsigned long long int) (signed char)14))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_3)), (min((((/* implicit */long long int) 2651793487U)), (4239427772845795376LL)))));
                        var_18 = ((/* implicit */int) var_11);
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (long long int i_6 = 1; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (arr_0 [i_5])));
                                arr_16 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */int) var_3)) / (((/* implicit */int) var_3)))), (((/* implicit */int) max((min((var_4), (((/* implicit */unsigned short) var_0)))), (((/* implicit */unsigned short) ((arr_1 [i_2] [i_2]) > (((/* implicit */unsigned long long int) var_5))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) var_7);
                }
            } 
        } 
        var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)18683))) >= (1643173807U)));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)16521)) ? (522206251) : (((/* implicit */int) (short)18684)))), (((((/* implicit */_Bool) 2438591486727125425ULL)) ? (((/* implicit */int) (unsigned short)48995)) : (((/* implicit */int) (unsigned short)29244)))))))));
        var_23 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
}
