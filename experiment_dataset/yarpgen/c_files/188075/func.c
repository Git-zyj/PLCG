/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188075
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 = 1810435949U;
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_13 |= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_11) : (var_3)))) ? (arr_6 [i_0] [20U] [i_2]) : ((-(4294967288U))))), (((/* implicit */unsigned int) ((764211981U) >= (((4294967295U) & (var_1)))))));
                    var_14 *= ((/* implicit */unsigned int) ((((((arr_0 [i_0]) / (1478034397U))) * (((((/* implicit */_Bool) var_0)) ? (var_6) : (6U))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) var_9)) > (max((4294967284U), (var_10)))))))));
                }
                arr_9 [i_0] [i_1] = max((((((/* implicit */_Bool) min((var_5), (2484531343U)))) ? (((((/* implicit */_Bool) 1830241011U)) ? (var_2) : (arr_0 [5U]))) : (arr_2 [i_0 - 1]))), (((unsigned int) 3617159161U)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
                            {
                                var_15 = (-((+(236240585U))));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (arr_8 [i_3] [14U] [14U] [i_3])));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((681461816U) >= (((((/* implicit */_Bool) arr_5 [12U] [i_6] [12U])) ? (var_5) : (var_5))))))));
                                arr_24 [2U] [2U] |= arr_17 [i_3] [i_5] [i_6] [i_3];
                            }
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((unsigned int) min((1830241001U), (arr_5 [i_3] [i_3] [2U]))))));
                            var_19 -= (-(((((/* implicit */_Bool) (-(var_0)))) ? (max((var_4), (arr_8 [i_3] [i_3] [i_3] [i_3]))) : (min((var_10), (arr_1 [i_5]))))));
                            arr_25 [i_3] [i_3] [i_3] [i_3] = (((!(((/* implicit */_Bool) max((2919517211U), (arr_10 [i_3] [i_4])))))) ? (((((/* implicit */_Bool) ((unsigned int) var_10))) ? (4294967285U) : (((4190235U) << (((var_4) - (1311956529U))))))) : (arr_6 [i_3] [i_3] [i_5]));
                        }
                    } 
                } 
                arr_26 [i_3] = min(((+(4294967295U))), (((unsigned int) 1319253577U)));
            }
        } 
    } 
    var_20 = ((((/* implicit */_Bool) var_9)) ? (((unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (1810435949U) : (var_10)))) : (((unsigned int) var_9)));
    var_21 = ((/* implicit */unsigned int) max((var_21), (var_7)));
}
