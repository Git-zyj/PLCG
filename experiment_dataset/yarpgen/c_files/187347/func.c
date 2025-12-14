/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187347
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_1 + 3] [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_1 + 3] [i_1] [8LL]);
                arr_7 [i_1] [(_Bool)1] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [10U])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (var_8) : (((/* implicit */unsigned long long int) arr_4 [i_1] [8U] [i_0])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_1])))))))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))), (arr_2 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41163))) : (arr_2 [i_0] [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_8 [i_1] [i_1 + 1] [i_1] [i_1 + 3])));
                            arr_14 [i_0] [i_2] [i_0] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) min((var_5), (arr_5 [i_1 + 3] [i_0] [i_0])))) : (arr_10 [i_3] [(signed char)9] [i_2] [(signed char)9])))) : (((unsigned long long int) (!(((/* implicit */_Bool) var_12)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_13);
}
