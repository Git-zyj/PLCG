/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133622
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
    var_18 *= ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_2] [i_2] = ((/* implicit */short) arr_5 [i_0]);
                        var_19 = ((/* implicit */unsigned long long int) max(((((~(var_11))) | (((2090214504) * (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) var_16))));
                        arr_12 [i_2] = min((((/* implicit */int) arr_9 [i_0] [i_2] [i_1] [i_3] [i_2 + 1])), (((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) | (max((((/* implicit */int) var_10)), (arr_2 [i_3]))))));
                        var_20 -= min((((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_10 [4U] [4U])) : (2147483647))) == (((((/* implicit */int) (short)21813)) + (arr_6 [(signed char)2] [i_1])))))), ((signed char)31));
                        var_21 &= ((/* implicit */_Bool) ((((max((var_5), (((/* implicit */unsigned int) (unsigned char)128)))) | (((/* implicit */unsigned int) (~(-2090214505)))))) & (((/* implicit */unsigned int) ((((((/* implicit */int) arr_7 [10ULL] [(unsigned short)2] [i_3])) & (((/* implicit */int) var_14)))) & (((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_9 [i_3] [(_Bool)1] [i_1] [(_Bool)1] [i_0])))))))));
                    }
                    for (signed char i_4 = 1; i_4 < 8; i_4 += 1) 
                    {
                        var_22 = (-(((/* implicit */int) var_8)));
                        var_23 += ((/* implicit */short) ((min((8796093022207LL), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)64512))))))) > (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [10LL] [i_1] [i_1] [i_1])))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 1) 
                    {
                        arr_20 [i_2] [i_2 + 1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) min(((unsigned char)138), (((/* implicit */unsigned char) (_Bool)1))))) ? (11145778931090401478ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)64518))))))));
                        arr_21 [i_2 + 1] [i_1] [i_2] [i_5] = ((/* implicit */long long int) -1864663435);
                        arr_22 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */signed char) min((((((/* implicit */int) var_16)) - (var_11))), (((/* implicit */int) arr_5 [3U]))));
                        var_24 = ((/* implicit */unsigned char) var_0);
                    }
                    var_25 *= ((/* implicit */unsigned char) (+((-(min((((/* implicit */long long int) 1090866569U)), (-4611686018427387904LL)))))));
                    var_26 = ((/* implicit */long long int) (+(3591942492U)));
                    arr_23 [i_2] [i_2] [i_2 + 1] [5ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_17 [i_0] [i_0] [i_0])), (var_14)))) ? (((/* implicit */int) ((var_17) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-118)))))) : ((-(((/* implicit */int) var_8))))))) ? (min((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) 11383291923892138543ULL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135))))))) : (((/* implicit */unsigned long long int) 4611686018427387921LL)));
                }
            } 
        } 
    } 
}
