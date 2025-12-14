/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122477
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)73)), (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (arr_5 [i_1] [i_0])))));
                arr_8 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((6670118964904829364LL) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (arr_3 [i_1] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) 2986588693734381755ULL);
                            var_17 += ((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)116)))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 864794430U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3]))) | (arr_5 [i_0] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) (signed char)-116))))) + (((((((/* implicit */int) (signed char)-122)) + (2147483647))) >> (((var_8) + (2981778129464722442LL)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 939524096U)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (4208959572509749803LL))) : (((/* implicit */long long int) var_0))))) : (11033304978095834208ULL)));
}
