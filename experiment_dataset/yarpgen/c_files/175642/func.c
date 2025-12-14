/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175642
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-3))) : (-7971243932285301266LL)))))) ? (((unsigned long long int) ((long long int) var_3))) : (((/* implicit */unsigned long long int) var_8))));
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_1] [16LL] = ((/* implicit */_Bool) ((signed char) arr_9 [i_4 - 1] [i_4 - 1] [(short)15] [16] [i_4]));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_11)), ((-(arr_5 [i_0])))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)175))));
                var_21 += ((/* implicit */unsigned short) min((var_9), (((/* implicit */unsigned long long int) ((12992440766549393976ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56919))))))));
                arr_17 [i_0] = ((/* implicit */unsigned char) arr_12 [i_0] [i_1] [13] [i_0] [i_0] [i_1]);
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((unsigned short) (((+(((/* implicit */int) var_11)))) == (((/* implicit */int) max((((/* implicit */short) var_10)), (var_5)))))));
    var_23 = ((/* implicit */unsigned long long int) ((signed char) (!((!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
}
