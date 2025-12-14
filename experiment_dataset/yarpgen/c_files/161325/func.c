/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161325
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
    var_13 -= ((((/* implicit */long long int) ((/* implicit */int) var_1))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))) ? (((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))))) : (var_6))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) (-(9223372036854775807LL)))))), (((arr_2 [i_0] [i_1]) < (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])))))))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) / (arr_4 [i_1] [i_1] [i_1])))) || (((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) < (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_4 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))))))))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (arr_2 [i_0] [i_0])))) ? (((((-8790954637655396630LL) + (9223372036854775807LL))) >> (((/* implicit */int) arr_0 [i_1] [i_1])))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_2)))))))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [1])))))) > (min((((/* implicit */unsigned long long int) (short)-21395)), (arr_2 [i_1] [i_0]))))))))));
            }
        } 
    } 
    var_17 *= ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (short i_3 = 3; i_3 < 19; i_3 += 3) 
        {
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3 - 2] [i_3 - 2] [i_2])) | (((/* implicit */int) (_Bool)1))))) && (((((/* implicit */int) arr_11 [i_3 - 2] [i_3 - 2] [i_3 + 2])) <= (((/* implicit */int) arr_11 [i_3] [i_3 + 2] [i_3]))))));
                var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [6LL])) ? (max((-3687078491151581683LL), (((/* implicit */long long int) -1827372414)))) : (((/* implicit */long long int) ((-615355576) / ((-(((/* implicit */int) arr_11 [3] [3] [i_2])))))))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((((/* implicit */_Bool) var_11)) ? (arr_9 [i_2]) : (arr_9 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))) <= (max((arr_10 [i_2]), (((/* implicit */unsigned long long int) 7936595324325117021LL))))))))));
                var_21 = ((((/* implicit */_Bool) ((var_8) & (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 2] [i_3])))))) ? (((((/* implicit */int) arr_11 [i_3 - 3] [8LL] [i_2])) | (((/* implicit */int) arr_11 [i_3 - 1] [i_3] [i_3 - 3])))) : ((~(((/* implicit */int) arr_11 [i_3 + 2] [i_3] [i_2])))));
                var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 8790954637655396629LL))))))))));
            }
        } 
    } 
}
