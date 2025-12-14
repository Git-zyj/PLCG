/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181149
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
    for (short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned short)64785))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */short) (-(min((((/* implicit */long long int) (short)4145)), (5538392379427424292LL)))));
                        arr_9 [i_0] [i_0] = ((9223372036854775807LL) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 4] [i_2])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
                        var_13 = ((/* implicit */long long int) arr_8 [i_3] [0LL] [i_0]);
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-4145)) ? (10492767719956409337ULL) : (((/* implicit */unsigned long long int) 2887659768156083071LL))));
                            var_15 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))) < (arr_10 [i_2]))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            var_16 += ((/* implicit */short) var_6);
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)105);
                            arr_16 [i_0 + 4] [i_0 + 4] [i_0 + 4] [(unsigned char)16] [19LL] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) var_4)))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) -8LL);
                            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_6] [(unsigned char)6] [i_2] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_6] [i_3] [i_0 + 1] [i_3] [i_0])) - (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (3489166804397834170LL)))) ? (((var_6) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-4145)))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */long long int) (unsigned short)17019);
                            var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (-945690796)))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned char)2] [i_1] [i_7])))))))));
                            arr_23 [i_1] = ((/* implicit */unsigned char) (-(((arr_0 [i_0 - 1] [i_0 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1])))))));
                            arr_24 [i_0] [i_0] [i_2] [i_3] [i_0] [i_1] = ((/* implicit */unsigned char) ((max(((-(2334240868561165106ULL))), ((+(arr_22 [(unsigned short)14] [i_1] [i_2] [(signed char)4] [(unsigned short)14]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        }
                    }
                    for (long long int i_8 = 2; i_8 < 17; i_8 += 4) 
                    {
                        arr_29 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */short) 9399260217797004766ULL);
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((arr_25 [i_0] [i_1]), (((/* implicit */long long int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))));
                    }
                }
            } 
        } 
    } 
    var_21 = var_0;
}
