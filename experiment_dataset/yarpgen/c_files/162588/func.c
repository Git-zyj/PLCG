/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162588
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_15 [8U] [i_3] [i_1] = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_10)) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_8 [i_0]))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)31)), (707518889U)))) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) (unsigned char)156)))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_1]) ? ((+(arr_4 [i_4] [(short)12] [i_4]))) : (((/* implicit */int) arr_13 [i_4] [2U] [2U] [i_0]))))) ? (((/* implicit */int) (signed char)19)) : (((((/* implicit */int) arr_12 [(short)7] [i_4] [(signed char)14] [i_3] [i_4])) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2])))))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_2] [i_1] [i_1] = max((min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (short)11263)) : (((/* implicit */int) (unsigned char)86)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_0] [i_0]))))) ? (max((((/* implicit */int) arr_11 [i_0])), (arr_10 [i_0] [(unsigned char)7] [i_2] [i_2]))) : (((((/* implicit */int) arr_13 [i_2] [i_1] [i_1] [i_0])) & (-171317426))))));
                    var_20 = ((/* implicit */signed char) (-(-171317426)));
                    var_21 = ((/* implicit */short) arr_7 [i_2] [i_2] [i_2] [i_1]);
                }
            } 
        } 
    } 
    var_22 *= ((/* implicit */signed char) ((((/* implicit */int) (signed char)39)) % (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) var_6))))))));
    var_23 = ((/* implicit */unsigned char) min(((-(((long long int) (unsigned char)15)))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_8)) ? (379171209) : (((/* implicit */int) var_18)))), (((/* implicit */int) min(((unsigned short)22484), (var_1)))))))));
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) (unsigned short)9666)) + (442202756))) : ((((+(((/* implicit */int) var_6)))) ^ ((-(2146959360)))))));
}
