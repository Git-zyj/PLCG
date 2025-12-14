/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142466
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
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_2))) : (((/* implicit */unsigned long long int) 1543159318480119797LL))))));
    var_16 = ((/* implicit */unsigned long long int) (~(var_14)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((unsigned long long int) ((long long int) (~(var_4))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (min((((/* implicit */unsigned long long int) ((long long int) (+(var_0))))), (var_2)))));
                                arr_14 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 1543159318480119803LL);
                                arr_15 [i_0] [i_2] [i_2] [i_2] [i_0] = ((((/* implicit */_Bool) 1543159318480119794LL)) ? (-1543159318480119792LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20563))));
                            }
                        } 
                    } 
                    var_19 -= arr_10 [i_0];
                    arr_16 [i_0] [i_0] [10ULL] &= ((/* implicit */long long int) (((((!(((/* implicit */_Bool) 7066777974247676710ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) < (var_6))))) : (var_8))) / (arr_13 [i_0] [i_0] [i_1 - 3] [i_2])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) 11379966099461874911ULL);
                                var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_5)) ? (arr_3 [i_0]) : (var_9)))));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */long long int) arr_0 [i_0 + 1]);
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_14) : (3935707491493897363LL)))) ? (10019109028795384277ULL) : (((unsigned long long int) var_5)))));
        var_22 = var_6;
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (arr_7 [i_0] [i_0] [9ULL])));
    }
}
