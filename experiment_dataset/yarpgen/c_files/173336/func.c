/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173336
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
    var_11 = ((/* implicit */unsigned int) max(((~((~(var_4))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (var_1))) : (min((var_6), (var_1))))))));
    var_12 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) 243238227)) ? (((((/* implicit */_Bool) 562949952372736LL)) ? (572010778269771715LL) : (((/* implicit */long long int) (-(arr_2 [i_0 + 1])))))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_3] [i_0] [i_0] [i_3]))))))));
                            arr_10 [i_0] [i_0] = ((/* implicit */int) max((((long long int) arr_3 [i_0] [i_3 + 3])), (((/* implicit */long long int) ((arr_3 [i_0] [i_3 + 3]) <= (((/* implicit */int) var_2)))))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_1] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3 - 2] [i_0] [i_2] [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_2])) == (((/* implicit */int) (unsigned short)44234)))))));
                            arr_11 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((signed char) var_4));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0 - 3] = (~(((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) (signed char)-50))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 2] [i_1] [i_0 - 2]))))) : (max((-7653421031535398446LL), (((/* implicit */long long int) var_0)))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_5)) : (max((((((/* implicit */_Bool) var_10)) ? (-572010778269771715LL) : (572010778269771712LL))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_9)) : (var_4)))))));
}
