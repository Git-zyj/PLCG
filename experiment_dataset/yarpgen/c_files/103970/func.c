/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103970
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_1 [i_0]))) + ((+(((/* implicit */int) (short)11882))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_1] [(short)1] [i_1] [i_0])) >= (((18446744073709551606ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))))) : (arr_5 [i_0] [i_1] [i_1] [11LL])));
                            arr_10 [(signed char)7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_6 [i_3] [8U] [7U] [(short)13])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) * (10301169686554038115ULL))))) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_3])) ? (((/* implicit */int) (unsigned short)32676)) : (((/* implicit */int) (signed char)89)))) + (((/* implicit */int) min((arr_3 [i_0] [i_0]), (((/* implicit */short) arr_6 [(short)2] [(short)1] [(unsigned char)6] [i_3]))))))))));
                        }
                    } 
                } 
                var_21 = ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0 + 4] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34634))) : (((long long int) var_16))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((max((((/* implicit */int) ((unsigned short) arr_6 [(unsigned short)13] [i_1] [i_0 - 2] [i_1]))), (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(signed char)9])) - (((/* implicit */int) var_16)))))) != (((/* implicit */int) var_3))))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [4] [4] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_2 [i_0])));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_4);
}
