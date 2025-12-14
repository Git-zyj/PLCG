/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173714
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
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) * (var_4));
                var_19 = ((/* implicit */long long int) var_3);
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)245))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (max((((((/* implicit */_Bool) (unsigned char)11)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))))), (arr_4 [i_0 - 1] [i_0 + 1])))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_2 [i_0] [(short)10] [(unsigned short)4]))));
            }
        } 
    } 
    var_22 = ((long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (unsigned char)19))));
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 17; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 4) 
        {
            {
                var_24 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_0)))))))) <= (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2])) ? (6670805326378225552ULL) : (((/* implicit */unsigned long long int) 3579599046127927232LL))))));
                var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */unsigned long long int) arr_8 [i_2 + 1])) : (var_3)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_14))) : (((((/* implicit */_Bool) 13106510474890651014ULL)) ? (arr_12 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136)))));
            }
        } 
    } 
}
