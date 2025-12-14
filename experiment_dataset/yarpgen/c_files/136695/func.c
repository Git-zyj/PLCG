/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136695
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
    var_12 = ((/* implicit */short) min((var_12), ((short)30720)));
    var_13 = ((/* implicit */_Bool) max((var_3), (var_3)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) arr_1 [i_1] [i_0]);
                arr_7 [(unsigned short)18] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_5 [i_0] [i_0] [i_1]) : (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) ((long long int) arr_5 [i_0] [i_1] [i_0])))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_3]))));
                            arr_13 [(_Bool)1] [(short)15] [4] = ((/* implicit */_Bool) ((min((-4537426693906288551LL), (((/* implicit */long long int) arr_0 [i_3] [i_2])))) % (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-6318)) : (((/* implicit */int) (short)-6318)))) != (((/* implicit */int) ((short) arr_12 [i_3] [i_2] [i_1] [i_0])))))))));
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */int) var_2);
                arr_15 [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) arr_1 [(short)17] [(short)0]);
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_1)), (max((((/* implicit */short) var_6)), ((short)6317))))))) : (var_9)));
    var_16 = ((/* implicit */signed char) min((4537426693906288558LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-561))) - (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6315))) : (((unsigned int) var_1)))))));
}
