/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129242
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
    var_14 = ((/* implicit */int) max(((unsigned short)42033), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23502)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109))) : (var_4)))))))));
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)-31)), (max((((/* implicit */unsigned long long int) max((258735047U), (((/* implicit */unsigned int) var_10))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (13090280163724666374ULL)))))));
    var_16 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((var_11) + (9223372036854775807LL))) << (((max((((/* implicit */unsigned int) (short)24569)), (var_13))) - (1484290155U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12986390393288572885ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (258735052U)))) : (((134217720ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42057)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) max((max((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) ^ (var_9))), (min((((/* implicit */unsigned int) arr_2 [i_1] [i_0])), (var_3))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)42033)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_15 [(signed char)5] [(signed char)5] [i_1] [i_1] [i_1] = ((/* implicit */int) ((17293822569102704640ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 258735047U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)12803)))))));
                            arr_16 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2788)) - (((/* implicit */int) (signed char)(-127 - 1)))));
                            var_18 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)20725)) ? (16160662317060968653ULL) : (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) 2147483647)) : (arr_10 [15] [i_1]))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_9 [i_1] [i_1] [i_2] [i_1]), (((/* implicit */unsigned long long int) (unsigned char)44))))) ? (min((var_2), (((/* implicit */long long int) (short)9906)))) : (var_11)))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) ((short) var_7)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
