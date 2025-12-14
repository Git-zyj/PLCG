/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12219
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((int) var_5)) <= (var_6))))) > (var_11))))));
    var_17 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [(short)0])) ? (((/* implicit */int) (signed char)100)) : (arr_3 [i_0 - 1] [10]))))));
                arr_6 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (signed char)100)))), (((/* implicit */int) (signed char)111))))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551593ULL)) || (((/* implicit */_Bool) 184040082657431873LL))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] = ((/* implicit */_Bool) ((min((((/* implicit */int) ((unsigned char) 6357509857900361999ULL))), ((-(-2000283453))))) + ((-((-(((/* implicit */int) (signed char)31))))))));
                            arr_13 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9311124452468995306ULL)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (6357509857900362002ULL)))) && (((/* implicit */_Bool) ((int) arr_1 [i_1] [i_3]))));
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_5 [2ULL]))));
                            var_20 = ((/* implicit */unsigned char) (-(2030079392)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned long long int) var_13);
}
