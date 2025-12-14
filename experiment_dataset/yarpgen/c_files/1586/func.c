/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1586
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_7)) & (arr_6 [i_0] [i_0] [i_0]))) ^ (((((/* implicit */int) var_3)) + (((/* implicit */int) arr_2 [i_1]))))));
                var_10 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(arr_6 [i_0] [i_0] [i_0])))) / (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1])) : (var_9)))));
                arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) max((((arr_5 [i_1] [i_0]) * (var_5))), (((((/* implicit */unsigned int) arr_7 [i_0])) + (var_4)))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */short) (~(((((((/* implicit */int) (signed char)-10)) + (2147483647))) >> (min((arr_16 [9U] [(unsigned short)17] [i_2] [(unsigned short)17] [i_2] [i_2] [(unsigned short)17]), (((/* implicit */unsigned int) var_7))))))));
                                var_12 = ((/* implicit */unsigned long long int) (~(arr_16 [16ULL] [16U] [16U] [i_3] [i_4] [i_4] [16U])));
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (max((((/* implicit */int) (signed char)-7)), (-25)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)15))))) : (var_5))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_4);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        for (short i_6 = 4; i_6 < 22; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                {
                    var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)27262)) ? (((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_6] [i_6 - 1] [i_7]) < (-6)))))));
                    var_15 = ((/* implicit */unsigned int) ((unsigned long long int) var_0));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
}
