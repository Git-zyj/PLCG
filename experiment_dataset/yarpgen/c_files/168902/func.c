/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168902
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
    var_13 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 + 2]))))) ? (((/* implicit */unsigned long long int) var_1)) : (min((((/* implicit */unsigned long long int) (unsigned short)65515)), (1537314534098591052ULL)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_2] [i_3 + 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_6 [i_2] [i_3])), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_3])) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) 2147483647)) ? (9079524606839065392LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28))))) : (((/* implicit */long long int) max((arr_3 [i_2]), (((/* implicit */unsigned int) arr_8 [i_2] [i_1]))))));
                            arr_11 [(short)7] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 424065600U)) ? (((/* implicit */unsigned long long int) 8257530189212618439LL)) : (9710039805871074253ULL))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
