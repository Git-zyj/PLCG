/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156099
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((((((/* implicit */int) var_10)) > (((/* implicit */int) var_12)))), (var_8))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (max((var_7), (var_7)))));
    var_16 = ((((min((((/* implicit */long long int) var_6)), (var_7))) << (((((/* implicit */int) var_3)) & (((/* implicit */int) (_Bool)1)))))) - (((/* implicit */long long int) (-((-(((/* implicit */int) var_13))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_17 -= ((unsigned short) (unsigned char)98);
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (min((((/* implicit */unsigned int) arr_6 [i_2] [i_1 + 1] [i_0])), (var_2)))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_7 [i_0] [i_1 + 1] [i_2] [i_2] [i_3])) ^ (min((arr_2 [i_1 + 1] [i_1 - 1]), (((/* implicit */long long int) (signed char)127))))));
                        arr_9 [i_0] [i_1 + 1] [i_2] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_5 [i_0] [i_2] [i_3] [i_3]))) ? (((/* implicit */long long int) arr_7 [i_1 + 1] [i_1 + 1] [i_2] [i_0] [i_3])) : (min((((/* implicit */long long int) var_3)), (-1LL)))))) ? (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_0 [i_0] [i_1 - 1])))), (((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0]))))))) : (((((/* implicit */_Bool) ((14LL) - (((/* implicit */long long int) arr_5 [i_2] [i_1 - 1] [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) 1LL)) : (((unsigned long long int) var_13))))));
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) >= (min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215))) & (arr_7 [i_0] [i_1 + 1] [i_1 - 1] [i_2] [i_3]))), (max((arr_5 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]), (arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_3])))) || (((/* implicit */_Bool) (+(arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_3]))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) var_9))))))));
                        var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) var_1)), (0LL)));
                    }
                }
            } 
        } 
    }
}
