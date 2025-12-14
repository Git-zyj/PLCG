/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128141
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
    var_19 = ((/* implicit */unsigned int) (unsigned char)255);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned char) 0LL);
                                var_21 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_9 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1])) || (((/* implicit */_Bool) arr_9 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1])))), ((!(((/* implicit */_Bool) max((arr_0 [i_1 - 1]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                } 
                var_22 *= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_1 [i_1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32761))))) % (var_4))) >= (((/* implicit */unsigned int) min((((/* implicit */int) ((2335025325U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 1] [i_0])))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-96)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            {
                var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) 7158502619008626471LL)) ? (4905707312299965272LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))))), ((-(min((((/* implicit */long long int) var_2)), (var_12)))))));
                arr_16 [i_5] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 9349187525245046637ULL)) ? (((/* implicit */long long int) arr_15 [i_6] [i_5])) : (35184372088831LL))));
                var_24 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5]))) : (var_2))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5]))) / (var_5)))));
                var_25 = ((/* implicit */unsigned char) min((1348131842847543823ULL), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) 2031884336U)), (7243915756353694785ULL))) < (((/* implicit */unsigned long long int) arr_15 [i_6] [i_5])))))));
            }
        } 
    } 
}
