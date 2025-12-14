/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185383
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
    var_15 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)20396)) ? (((/* implicit */int) (unsigned short)30613)) : (((/* implicit */int) (unsigned short)30613))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1753202310276899284LL)) ? (((/* implicit */int) (unsigned short)15431)) : (((/* implicit */int) (unsigned char)127))));
    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) min((var_13), (((/* implicit */unsigned short) max((var_1), (((/* implicit */short) (unsigned char)29))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_18 *= ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0]);
                            var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */int) max((var_5), (((/* implicit */signed char) (_Bool)1))))), (max((((/* implicit */int) (unsigned short)36356)), (-836251405)))))), (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 6425030768310520389LL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((var_8) / (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))))));
                            arr_11 [(short)0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (+(4052199214U)))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) > (1036895978)))) : (((/* implicit */int) (unsigned short)0))))));
                            var_20 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) arr_7 [i_3 + 1] [i_3] [(unsigned short)2] [i_3])), (min((var_7), (((/* implicit */long long int) (short)19657)))))), (((/* implicit */long long int) (((((_Bool)1) ? (19U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) >> (((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)193)))) + (55))))))));
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
                arr_12 [i_1] [(unsigned char)5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (short)-29387)) ^ (((/* implicit */int) arr_3 [i_0]))))) * (max((((/* implicit */long long int) (_Bool)1)), ((-9223372036854775807LL - 1LL)))))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (signed char i_5 = 4; i_5 < 8; i_5 += 1) 
                    {
                        {
                            arr_18 [i_0] [(signed char)0] [(signed char)0] [i_5 - 3] [i_5] [i_5] &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)22061)) ^ (((/* implicit */int) (short)-11158))));
                            var_22 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) -22332597)) ? (((/* implicit */long long int) arr_16 [i_0] [i_1] [i_1] [(unsigned char)9] [i_5])) : (var_7))) - (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)235))))))), (((/* implicit */long long int) (_Bool)1))));
                            arr_19 [i_0] [i_1] [i_4] [i_0] [i_1] = ((/* implicit */long long int) (unsigned short)65535);
                            arr_20 [i_0] [i_0] [i_0] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) var_0);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (unsigned char)250);
}
