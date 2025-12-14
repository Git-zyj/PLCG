/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188938
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
    var_13 = (+((-(8684136250319955612LL))));
    var_14 = ((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), (var_3)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) (!((!((!(((/* implicit */_Bool) var_3))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_13 [i_2] [i_0] [i_2 + 2] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))) / (((0ULL) - (((/* implicit */unsigned long long int) arr_6 [i_2 + 2] [i_2] [i_2]))))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((max(((~(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0])))))), (((/* implicit */int) arr_1 [(_Bool)1])))))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_5))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((_Bool) (~(((/* implicit */int) arr_3 [i_4])))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_6 [i_2] [i_2 + 1] [i_2 - 3])) ? (arr_6 [(_Bool)1] [i_2 - 2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))));
                    var_20 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30720)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_0])))))), ((+(((((/* implicit */_Bool) arr_11 [14U] [14U] [14U] [i_2] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))));
                    arr_14 [i_0] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) arr_10 [i_2] [i_1 - 2] [i_2] [i_1] [i_2 - 1]))))), (((unsigned char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_4)))))));
                }
            } 
        } 
    } 
}
