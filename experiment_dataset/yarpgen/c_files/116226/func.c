/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116226
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
    var_19 = ((/* implicit */unsigned char) (-(min((18ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 472997306)) > (var_9))))))));
    var_20 = ((/* implicit */signed char) var_15);
    var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_17))))), (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */unsigned long long int) var_9)) : (var_2)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_11))))) : (min((var_13), (((/* implicit */long long int) (~(((/* implicit */int) var_18)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_22 -= ((/* implicit */signed char) var_0);
                                arr_12 [i_0] [i_0] [i_1] [i_2] [(signed char)17] [(signed char)17] [i_4] = ((/* implicit */short) ((unsigned int) (+(((/* implicit */int) ((_Bool) arr_0 [(short)23] [i_4]))))));
                            }
                        } 
                    } 
                } 
                arr_13 [(unsigned char)23] [i_1] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])))) == (((/* implicit */int) max((arr_8 [(unsigned char)13] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_8 [(_Bool)1] [(unsigned char)19] [(unsigned char)3] [(unsigned short)5] [(signed char)20] [i_0]))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            arr_20 [i_6] [i_5] [i_1] [i_5] [i_0] = ((/* implicit */int) ((_Bool) arr_14 [i_0] [i_0] [(unsigned short)14]));
                            arr_21 [i_1] [i_5] [i_6] &= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6])) ? (var_13) : (((/* implicit */long long int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (min((((/* implicit */unsigned long long int) var_17)), (var_0))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) + (var_9))))));
}
