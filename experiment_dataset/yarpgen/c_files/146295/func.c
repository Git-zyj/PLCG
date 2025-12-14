/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146295
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_0)) / (((var_5) ? (((unsigned int) 0U)) : (((/* implicit */unsigned int) ((/* implicit */int) ((17U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
    var_17 = ((/* implicit */unsigned short) var_15);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1] [i_0 - 1]))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])) : (var_9))) - (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
                    var_19 |= ((/* implicit */signed char) (((~(((/* implicit */int) arr_2 [i_1] [i_2])))) * (((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) 8707078837980642003ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (arr_6 [i_2] [i_1] [i_0]))))))));
                    var_20 = ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */unsigned int) var_5)), (((arr_6 [i_0] [(short)4] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_1]))))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) min((((/* implicit */short) var_11)), (arr_2 [i_0 - 1] [i_0 - 1])))) + (2147483647))) << (((((4294967279U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2]))))) - (86U)))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */_Bool) ((((max((arr_3 [i_1] [i_1]), (((/* implicit */long long int) 3U)))) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))) + (((/* implicit */long long int) var_1))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (int i_5 = 1; i_5 < 12; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))), (((((/* implicit */_Bool) var_2)) ? (3293163540756861840LL) : (((/* implicit */long long int) 0U)))))))));
                                arr_22 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (short)-5491)) == (arr_12 [i_5 - 1] [i_7 + 4] [i_4]))))));
                            }
                        } 
                    } 
                    arr_23 [i_3] [i_4] [i_5 - 1] [i_4] = ((/* implicit */short) (-(0U)));
                }
            } 
        } 
    } 
}
