/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139161
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
    var_12 = ((/* implicit */int) var_5);
    var_13 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (9223372036854775807LL))) ^ ((-9223372036854775807LL - 1LL)))) > (var_3)));
    var_14 = ((9115306215306142428ULL) * (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 6; i_4 += 4) 
                        {
                            {
                                var_15 += ((((/* implicit */long long int) (+(((/* implicit */int) var_0))))) >= (((((((/* implicit */_Bool) 9223372036854775803LL)) && (((/* implicit */_Bool) 3494085024084036143ULL)))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) max((var_7), (var_0))))))));
                                var_16 = min((min((min((var_6), (var_6))), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) arr_3 [i_0 - 1] [i_0 - 1] [i_0])) | (9223372036854775807LL))), (((/* implicit */long long int) arr_7 [i_2]))))));
                                arr_13 [2LL] [i_1] [(signed char)3] [i_1] [i_2] [1LL] = ((long long int) max((arr_8 [i_0 - 1] [i_0 - 1] [7] [i_3 - 1] [7]), (((/* implicit */long long int) min((var_8), (((/* implicit */int) var_7)))))));
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(arr_11 [i_0 + 1] [i_1] [i_4 + 4])))) & (max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) var_10)) * (var_2))))))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_7 [i_1]))));
                /* LoopNest 2 */
                for (long long int i_5 = 2; i_5 < 8; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */int) var_4);
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_5] [i_6]))));
                            var_21 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_6]))));
                            var_22 = ((/* implicit */unsigned long long int) var_10);
                        }
                    } 
                } 
            }
        } 
    } 
}
