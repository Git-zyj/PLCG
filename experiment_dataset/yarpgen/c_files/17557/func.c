/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17557
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_6))));
                var_12 += ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (var_2)))), (max((((/* implicit */unsigned long long int) var_7)), (var_4))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8)))))));
                arr_6 [i_1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_9))))));
                var_13 = max((min((var_5), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) max((var_8), (((/* implicit */int) var_10))))));
                /* LoopSeq 4 */
                for (int i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    var_14 *= ((/* implicit */unsigned int) ((unsigned long long int) max((8647152525442705331LL), (((/* implicit */long long int) -1885495901)))));
                    var_15 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) max((var_0), (var_0)))), (max((var_4), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) ((int) min((((/* implicit */long long int) -1885495901)), (2759420549535114571LL)))))));
                }
                for (unsigned int i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    var_16 = ((/* implicit */int) max((((/* implicit */unsigned int) (+(((int) (short)-4955))))), (max((((/* implicit */unsigned int) ((short) var_1))), ((~(var_7)))))));
                    arr_13 [(_Bool)1] [i_1] [i_3] [0ULL] = ((/* implicit */long long int) (~(((int) var_4))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                {
                    arr_17 [i_4] [i_1] [8U] = ((/* implicit */short) (+(3631477249U)));
                    var_17 = ((/* implicit */_Bool) (~(max((var_2), ((~(var_3)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 2; i_5 < 14; i_5 += 3) 
                    {
                        arr_20 [i_5] [i_4] [i_4] [i_0] = ((/* implicit */unsigned long long int) (~(var_7)));
                        var_18 = (~(var_8));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                arr_27 [i_0] [i_1] [i_4] [i_4] [i_7] = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (((int) var_4))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max(((!(((/* implicit */_Bool) 2759420549535114571LL)))), ((!(((/* implicit */_Bool) var_4)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 2; i_8 < 14; i_8 += 1) 
                    {
                        for (int i_9 = 4; i_9 < 12; i_9 += 4) 
                        {
                            {
                                arr_32 [i_0] [i_1] [i_4] [i_9] = max((((/* implicit */unsigned long long int) max((1885495901), (1885495919)))), ((+(3536977702112147556ULL))));
                                var_20 = min((((int) var_0)), (((/* implicit */int) max((var_10), (((/* implicit */short) var_1))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned long long int) var_8);
                    arr_35 [i_0] [i_0] [i_10] [i_0] = (+(var_0));
                }
            }
        } 
    } 
    var_22 += ((/* implicit */unsigned int) var_6);
    var_23 = ((/* implicit */short) var_9);
    var_24 += ((/* implicit */short) var_0);
}
