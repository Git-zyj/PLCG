/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157028
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
    var_16 &= ((/* implicit */unsigned char) min((var_0), (((var_0) / (var_5)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))) < (max((arr_0 [i_0 + 2]), (((/* implicit */unsigned long long int) 50813508085308904LL))))));
                var_18 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [0ULL])))))) >= (min((((var_6) ? (((/* implicit */unsigned long long int) 4831426994136506489LL)) : (arr_5 [i_0 - 2] [i_1 - 2]))), (((/* implicit */unsigned long long int) (+(var_3))))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_0] [i_1])), (arr_1 [i_0])))))) ? (max((((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */unsigned short) arr_4 [(unsigned char)8] [i_1]))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_5 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)29202)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_0 + 3]))) : (var_3))))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1 - 4] [i_0 + 2]))))) > (((((((/* implicit */int) arr_2 [i_0] [i_1])) < (((/* implicit */int) arr_4 [i_0 + 3] [i_1 - 3])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0] [i_0])), (arr_3 [i_1 - 1]))))) : (((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max(((+(min((((/* implicit */unsigned long long int) var_12)), (var_1))))), (((/* implicit */unsigned long long int) var_3)))))));
}
