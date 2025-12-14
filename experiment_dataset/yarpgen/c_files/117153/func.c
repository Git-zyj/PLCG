/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117153
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
    var_17 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) max((1185202914U), (3109764379U)))) + (max((((/* implicit */unsigned long long int) var_14)), (16772505388816145785ULL))))), (((/* implicit */unsigned long long int) var_4))));
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) var_2))))), ((+(((13537019757192744951ULL) + (((/* implicit */unsigned long long int) var_4))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (+((-(((((/* implicit */long long int) 1185202920U)) + (var_3)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) min((((((/* implicit */int) arr_7 [i_3] [i_1] [i_3] [i_3])) != (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)26)), (arr_1 [i_1]))))) == (((((/* implicit */_Bool) 1674238684893405813ULL)) ? (16772505388816145770ULL) : (((/* implicit */unsigned long long int) 3109764358U))))))));
                            var_19 = ((/* implicit */int) ((((arr_10 [i_3] [i_2] [i_1] [9LL] [i_0]) != (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_7 [i_3] [(unsigned short)0] [(signed char)1] [i_0])) - (60)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_16)), (arr_3 [i_0] [i_0])))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_0])) || (((/* implicit */_Bool) (unsigned short)39723)))))))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (var_8))), (((/* implicit */unsigned int) arr_8 [i_1] [(signed char)5] [(signed char)5]))))));
                            var_20 &= ((/* implicit */unsigned short) (+(var_3)));
                            var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_3] [i_1])) ? (var_10) : (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_0] [i_1] [i_3])))) | (((/* implicit */long long int) ((((/* implicit */_Bool) 1674238684893405839ULL)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
