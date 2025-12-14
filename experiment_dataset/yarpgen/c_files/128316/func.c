/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128316
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */int) (unsigned short)52251)) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((unsigned int) var_6))) : (var_0)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) arr_2 [(signed char)9] [i_0]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) min(((unsigned short)13281), (((/* implicit */unsigned short) arr_4 [i_1] [i_2] [(unsigned short)7])))))))) : (((max((arr_7 [i_1] [i_1] [0LL] [i_1]), (((/* implicit */unsigned int) var_15)))) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)52254)))))))));
                                var_19 = ((/* implicit */short) (((-(((/* implicit */int) (unsigned short)13284)))) * (((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_1] [i_4]))))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_9 [i_0] [i_0] [i_2] [i_2] [i_4])), (arr_4 [i_3] [i_3] [i_3])))) : (((/* implicit */int) var_15))))));
                                var_20 = ((/* implicit */short) arr_11 [i_4] [i_3] [i_2] [i_0] [i_0]);
                                var_21 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))))))));
                            }
                        } 
                    } 
                    var_22 = ((signed char) min((((long long int) var_2)), (((/* implicit */long long int) var_12))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) - (((((/* implicit */_Bool) (unsigned short)52249)) ? (var_4) : (min((((/* implicit */unsigned long long int) var_1)), (var_5)))))));
                    var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_2])) : (((/* implicit */int) arr_9 [i_0] [(signed char)15] [i_2] [i_2] [i_2])))) + (((arr_6 [i_0] [i_1] [i_2]) - (arr_6 [i_0] [i_1] [i_2])))));
                }
            } 
        } 
    } 
    var_25 = (+(((((/* implicit */int) min((var_14), (((/* implicit */unsigned char) var_3))))) | (((/* implicit */int) var_3)))));
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (max((var_2), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (var_6)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (unsigned short)52240)) : (((/* implicit */int) (unsigned short)52233)))))));
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        var_27 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5])), ((unsigned short)13304)))))), (max((((((/* implicit */_Bool) arr_7 [i_5] [12LL] [i_5] [i_5])) ? (((/* implicit */int) arr_15 [i_5] [i_5])) : (((/* implicit */int) (unsigned short)13288)))), ((~(((/* implicit */int) arr_1 [i_5]))))))));
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]))))) || (arr_14 [i_5])))))))));
        var_29 -= ((((/* implicit */_Bool) (-(arr_12 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))) : (min((arr_12 [i_5] [i_5]), (((/* implicit */unsigned long long int) (unsigned short)13293)))));
    }
}
