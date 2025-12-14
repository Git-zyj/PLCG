/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110405
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
    var_10 |= ((/* implicit */long long int) (-(9ULL)));
    var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) ((unsigned short) var_6))))))));
    var_12 *= var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) min((var_13), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3584)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)42261)))))))));
                            arr_11 [11LL] [i_2] [(unsigned short)1] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) ((5412426738379639127LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37186)))))) << (((((((/* implicit */int) arr_6 [(unsigned short)4] [i_0])) >> (((((/* implicit */int) arr_6 [i_2] [i_0 - 1])) - (55366))))) - (79)))))) == (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_3] [i_1])) >> (((/* implicit */int) (unsigned char)21))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0]))))) : (arr_2 [i_0 - 2] [i_0 + 1])))));
                            var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [10LL])) ? (arr_2 [i_0] [5ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [6]))))))))));
                            var_15 = ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) 16338879777773232684ULL)) ? (((/* implicit */int) arr_5 [i_1] [i_3])) : (((/* implicit */int) arr_3 [i_0] [6] [(unsigned char)1])))), (((/* implicit */int) arr_3 [i_0] [i_1] [2ULL]))))));
                        }
                    } 
                } 
                var_16 &= ((((/* implicit */int) (signed char)18)) << (min((((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_1 + 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))) : (525444430940554362LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >> (((1397266273) - (1397266250)))))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((arr_2 [(unsigned char)4] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) == (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (min((((/* implicit */int) (_Bool)0)), (262080))))))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_1 + 1] [(unsigned short)4] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])))))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */_Bool) var_5);
}
