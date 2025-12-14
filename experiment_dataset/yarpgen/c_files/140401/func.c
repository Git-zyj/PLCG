/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140401
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 = ((((/* implicit */_Bool) (short)7031)) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) (short)-7023)) ^ (((/* implicit */int) (short)-7031))))))) : (661236091U));
                arr_6 [(unsigned short)12] [(unsigned short)12] [(unsigned short)0] |= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1]))))) >= (((/* implicit */int) var_15))));
                var_17 = ((/* implicit */unsigned int) 1389679954);
                arr_7 [i_0] = ((/* implicit */int) (short)3653);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 20; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((long long int) 1389679954));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [(signed char)6] [(signed char)6] [i_5]))))), (var_2)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-7031))))) : (((((/* implicit */_Bool) ((661236091U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-7056)))))) ? (min((((/* implicit */unsigned int) (short)0)), (var_8))) : (3633731216U)))));
                            var_20 = ((/* implicit */short) arr_15 [i_2] [i_2] [i_4 + 2] [i_5]);
                            var_21 += ((/* implicit */unsigned short) -1LL);
                            var_22 = ((/* implicit */unsigned long long int) (short)-1);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 4; i_8 < 20; i_8 += 1) 
                        {
                            {
                                arr_25 [i_2] [i_2] [i_2] [5] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (signed char)42))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7031)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-12LL))))));
                                arr_26 [i_2] [i_3] [i_6 - 1] [i_7] [i_8 - 1] = ((/* implicit */unsigned int) ((((1389679954) <= (1790290217))) ? (((/* implicit */long long int) ((/* implicit */int) (short)22056))) : (((long long int) 2017612633061982208ULL))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((short) (short)0))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)243)))))))) << (((arr_12 [i_8 - 4] [i_6 - 1]) - (5287532669418404289LL))))))));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))) == (((((/* implicit */_Bool) arr_8 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_15)), ((unsigned char)255))))) : (var_2)))));
                                arr_27 [i_8] [i_7 + 1] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) (-(((((var_5) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [17ULL] [17ULL] [i_6 - 1] [i_7]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((717707813503785913ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243)))))))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((max((var_3), (((var_4) ? (var_3) : (((/* implicit */long long int) arr_10 [i_2])))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)0)))))))))));
                var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)22056))));
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) (short)11349);
}
