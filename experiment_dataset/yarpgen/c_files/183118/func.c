/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183118
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
    var_13 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) 1914829811)) ? (635246056950527495LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) : (-9223372036854775802LL))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)109)) ? (var_0) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (635246056950527495LL))) - (37597LL)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] |= ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_14 ^= ((/* implicit */long long int) ((short) ((arr_0 [i_0 - 1] [i_0]) < ((-(63LL))))));
                            var_15 = ((/* implicit */unsigned char) min((arr_5 [i_0] [(short)3] [i_2]), (((/* implicit */unsigned long long int) (short)22718))));
                            arr_9 [i_3] [i_2] [8U] [8U] = ((/* implicit */signed char) arr_0 [(unsigned short)10] [i_0 + 1]);
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(arr_0 [i_0] [i_1])))))) ? ((+(((/* implicit */int) (signed char)70)))) : (min((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 9223372036854775802LL))))), ((-(((/* implicit */int) var_10))))))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)15926)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15926)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)123))) : (9223372036854775801LL)))) ? (((((/* implicit */int) (unsigned char)29)) + (((/* implicit */int) (unsigned char)66)))) : (((/* implicit */int) (signed char)-74))))) : (min((arr_5 [i_0] [i_3] [(unsigned char)0]), (((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) & (arr_1 [i_3]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (_Bool)1))));
    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) -4893992819037087833LL)))))));
}
