/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1064
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
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_6))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (var_13)))))) - (((/* implicit */long long int) var_12))));
    var_21 -= ((/* implicit */unsigned int) (_Bool)1);
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((var_19) ? (min((var_13), (var_5))) : (var_13)))) + (var_14)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((var_19) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0])))))))), (((unsigned long long int) var_8))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            arr_14 [(_Bool)1] [i_1] [(_Bool)1] [(short)11] [i_4 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 524287U))) ? (((/* implicit */unsigned long long int) ((int) var_0))) : (max((((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) (unsigned char)150))))), (var_4)))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_1), (arr_13 [i_1] [i_1 + 2] [i_2 + 1] [i_3] [i_2])))) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_0] [i_2 + 1] [i_2] [7ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_11 [i_0] [i_2] [i_2 + 1] [i_3]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)224)))))));
                        }
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (+(min((var_8), (((/* implicit */unsigned long long int) var_10)))))))));
                    }
                    for (long long int i_5 = 3; i_5 < 14; i_5 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) ((_Bool) var_6));
                        var_27 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106))) > (2986687143U))))) : (max((((/* implicit */long long int) var_12)), (arr_0 [i_2 + 2]))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1 + 1])) ? (arr_9 [i_1 + 1]) : (arr_9 [i_1 - 1]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_15 [i_0] [i_1 + 2] [i_1 + 1])), (((var_1) | (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                                arr_23 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_7])))))));
                                var_29 = ((/* implicit */unsigned long long int) (~(((var_12) % (var_13)))));
                                var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_2 [i_1] [i_1 + 2] [i_1]) : (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) arr_9 [i_1 + 2])))) != (((/* implicit */unsigned long long int) (-(arr_13 [i_1] [i_6] [i_2 - 2] [i_1] [i_1]))))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_1] = max((var_11), (max((((/* implicit */unsigned short) (unsigned char)12)), ((unsigned short)65535))));
                }
            } 
        } 
    } 
}
