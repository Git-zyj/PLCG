/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118473
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
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (-(((/* implicit */int) var_3)))))));
                arr_5 [(unsigned short)18] = ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned short)9688), ((unsigned short)4465)))) > (((/* implicit */int) ((((/* implicit */int) (unsigned short)55848)) > (((/* implicit */int) (unsigned short)1411)))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)9688)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (arr_2 [i_0] [i_0])))))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1]))))));
                arr_8 [i_0] [(unsigned short)21] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_1 [(unsigned short)1])), (((((/* implicit */int) ((((/* implicit */int) (unsigned short)4639)) >= (((/* implicit */int) (unsigned short)64125))))) % (((/* implicit */int) var_10))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) max((var_13), (var_6)));
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43021)) ? (((/* implicit */int) (unsigned short)13929)) : (((/* implicit */int) (unsigned short)54590))))) ? (((/* implicit */int) arr_10 [i_2])) : (((((/* implicit */int) (unsigned short)42598)) * (((/* implicit */int) (unsigned short)28832))))))) ? ((~(((/* implicit */int) arr_19 [(unsigned short)4] [(unsigned short)4] [i_4] [i_5])))) : (max((((/* implicit */int) ((((/* implicit */int) (unsigned short)64125)) <= (((/* implicit */int) arr_19 [(unsigned short)0] [i_3] [(unsigned short)0] [i_5]))))), (((((/* implicit */int) arr_18 [(unsigned short)6])) & (((/* implicit */int) var_1))))))));
                                arr_24 [i_6] [i_2] [i_4] [(unsigned short)11] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)57471))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) arr_9 [i_2]))))))))));
                    var_16 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [(unsigned short)7] [i_2] [i_4]))))) ? ((+(((/* implicit */int) arr_18 [i_4])))) : (((/* implicit */int) var_1)))), (max(((~(((/* implicit */int) (unsigned short)13929)))), (((/* implicit */int) min((arr_23 [(unsigned short)1] [i_2] [i_2] [(unsigned short)2] [i_3] [i_4] [i_4]), (arr_1 [i_3]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((var_5), (var_6))))));
}
