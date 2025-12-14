/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173565
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
    var_12 = min((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_0))))))), (var_11));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((min((((/* implicit */int) ((unsigned char) arr_0 [i_0]))), ((~(((/* implicit */int) arr_1 [i_0])))))) + (2147483647))) >> (((/* implicit */int) ((min((var_5), (((/* implicit */unsigned long long int) arr_1 [i_0])))) != (((/* implicit */unsigned long long int) (~(984331198)))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) (((((-((~(arr_11 [i_0] [i_0] [i_2] [i_3] [i_4]))))) + (2147483647))) >> (((/* implicit */int) ((((((/* implicit */_Bool) (short)-21010)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (signed char)-107)))) >= (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_10 [i_0] [(signed char)12] [(signed char)12] [i_3] [(signed char)12] [i_3])))))))));
                                var_15 = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (arr_12 [i_0] [i_0] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) >> ((((~(var_8))) + (579077431)))))));
                                var_16 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)11109))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (4294967295U))))))), (max(((~(((/* implicit */int) arr_0 [(_Bool)1])))), (((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0])))))));
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(min(((~(1271481334090671825LL))), (((/* implicit */long long int) ((signed char) (unsigned char)244))))))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_6 [i_1] [i_0] [i_0] [i_0]))) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_11);
}
