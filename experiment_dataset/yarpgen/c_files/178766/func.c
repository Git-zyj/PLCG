/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178766
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                var_10 += ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0 + 2] [i_0 - 1])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0 + 4])) : (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned char)6]))) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (max((6289812836009156661LL), (6289812836009156661LL))))) : (((((/* implicit */_Bool) -6289812836009156655LL)) ? (6289812836009156661LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0 + 1] [i_3] [i_1] [i_1] [(unsigned short)7] [(unsigned char)13] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((_Bool) var_0)) ? (((((/* implicit */_Bool) arr_5 [i_3] [i_2] [i_1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [(short)4]))) : (-6289812836009156662LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 2] [i_2] [14LL])) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) var_0)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (6289812836009156661LL)))), (max((((/* implicit */unsigned long long int) var_1)), (var_9)))))));
                            var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_6)) ? (6289812836009156661LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1 - 3] [i_2] [i_0]))))))) ? (((((/* implicit */_Bool) ((unsigned short) arr_8 [(signed char)2] [(unsigned char)18] [i_2] [i_3 - 1] [(unsigned char)18] [(unsigned short)22]))) ? (6289812836009156661LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_0] [i_3] [i_1 - 2] [i_3] [8U]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (var_9)))) ? (((((/* implicit */_Bool) (short)3139)) ? (((/* implicit */int) arr_8 [(unsigned char)2] [(unsigned char)2] [i_1 + 1] [i_2 + 1] [(unsigned char)2] [12LL])) : (((/* implicit */int) arr_4 [i_2])))) : (((/* implicit */int) ((unsigned char) arr_4 [i_1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 ^= ((/* implicit */unsigned char) var_2);
}
