/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132978
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((arr_4 [15] [i_0] [15]) <= (((/* implicit */long long int) ((/* implicit */int) var_10)))))) : (((/* implicit */int) var_10)));
                arr_5 [i_1] = ((/* implicit */signed char) arr_0 [i_0]);
                var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))), (arr_0 [i_1])));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                                var_16 = ((/* implicit */_Bool) (-(arr_10 [i_3] [i_1] [14] [14])));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */unsigned short) ((arr_11 [i_1] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 247986202))));
    var_18 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), ((-(arr_21 [i_5] [i_5])))));
                arr_24 [10] = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */short) var_8)), (var_7))));
                var_20 = ((/* implicit */unsigned int) ((var_5) <= (min((arr_19 [i_5]), (arr_19 [i_5])))));
            }
        } 
    } 
}
