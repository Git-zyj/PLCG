/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162613
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
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -161823149)) ? (var_3) : (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_7)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
    var_17 = ((/* implicit */_Bool) ((var_0) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)245)) ? ((+(var_3))) : ((~(var_13))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 ^= ((/* implicit */long long int) ((arr_2 [(short)0]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) arr_0 [(signed char)12] [(signed char)12]))))) ? ((-(arr_3 [6]))) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-23778))) | (var_12)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_3])) : (arr_8 [(unsigned char)7] [i_1 - 1] [i_1 - 1] [i_2]))) : ((~(((/* implicit */int) var_6)))))));
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_0] [i_3])) : (((/* implicit */int) arr_0 [i_0] [i_1 - 1]))))) ? (((/* implicit */long long int) ((2269786293U) ^ (0U)))) : (var_12)));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(short)0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) : (((((/* implicit */_Bool) arr_7 [(short)2] [2U] [i_3])) ? (var_3) : (((/* implicit */int) var_15))))))), (max((((/* implicit */unsigned int) (short)20938)), ((-(var_2))))))))));
                        }
                    } 
                } 
                var_22 -= ((/* implicit */short) (signed char)-5);
                var_23 = ((/* implicit */_Bool) max((var_23), (((_Bool) ((arr_3 [i_1 - 1]) == (arr_3 [i_1 + 1]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) 2008666520171378727ULL)) ? (((((/* implicit */int) var_15)) - (((/* implicit */int) var_15)))) : (((/* implicit */int) (short)32767)))) < (161823148)));
    var_25 -= ((/* implicit */unsigned short) var_3);
}
