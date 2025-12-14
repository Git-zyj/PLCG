/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176407
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
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1259858554U)) ? (((32767U) + (4294934529U))) : (max((1380180433U), (4294967295U)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_3 [(_Bool)1] [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned short)41501))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)41501)) : (((/* implicit */int) (signed char)64))))) : (((arr_1 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_21 *= arr_1 [i_2];
                            var_22 = ((/* implicit */long long int) ((((((unsigned long long int) arr_6 [i_0] [i_0])) >> (((/* implicit */int) (signed char)17)))) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 523776)) && (((/* implicit */_Bool) (-2147483647 - 1))))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (4294967295U))) : (4294967293U))))));
                        }
                    } 
                } 
                var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((min((9223301668110598144LL), (((/* implicit */long long int) arr_5 [i_0])))), (((/* implicit */long long int) ((6912009227993883969LL) == (((/* implicit */long long int) arr_5 [i_1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [14U])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) : (-6912009227993883969LL))) > (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_1] [i_1])), (arr_6 [i_0] [16U]))))))))) : (((3221225472U) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65518)) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */long long int) 3U)), (var_8)))) ? (((((/* implicit */_Bool) 262143U)) ? (((/* implicit */long long int) 14U)) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))), (((/* implicit */long long int) (-((-(var_3))))))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_25 = ((/* implicit */unsigned char) max((max((7202528721228861946ULL), (arr_4 [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_4])) && (((/* implicit */_Bool) arr_15 [2ULL] [i_5] [i_5])))))) | (min((16777215LL), (((/* implicit */long long int) -807398576)))))))));
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5] [i_4])) && (((/* implicit */_Bool) 0U))))), (max((-6912009227993883969LL), (((/* implicit */long long int) 511U))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_4] [i_4]))) : (36028796750528512LL)))) ? (((/* implicit */unsigned int) 4095)) : ((+(2097151U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4] [i_4] [1])) && (((/* implicit */_Bool) (+(0U))))))))));
                var_27 = ((int) max((arr_14 [(short)4] [i_4] [i_4]), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)1022)), (arr_0 [i_4]))))));
            }
        } 
    } 
}
