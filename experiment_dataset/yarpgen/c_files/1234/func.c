/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1234
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
    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((signed char) (short)-22504))) ? (var_12) : (((/* implicit */int) var_7)))) / (((/* implicit */int) (short)2040))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) max((((/* implicit */int) (short)2040)), ((-(((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_15 = ((/* implicit */short) var_10);
            arr_5 [i_0] [i_0] = ((/* implicit */int) ((arr_2 [i_0] [16ULL]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_3 [i_0]))))));
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)0)))))))));
            var_17 = ((/* implicit */long long int) min((var_17), (((long long int) var_12))));
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((/* implicit */short) (_Bool)1)), ((short)2040))))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_8 [i_0] [i_0] [i_2] = ((/* implicit */int) var_3);
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                var_19 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_7 [i_0] [17LL] [i_0])), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0))))));
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)56))));
                arr_12 [(_Bool)1] [i_0] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 3433614227U)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (arr_11 [i_0] [i_0] [i_0]))), (11216484312556825978ULL)));
            }
            for (int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                arr_17 [i_0] [i_2 + 1] [i_0] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_10)), (var_6)))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (-(max((16574840594689106698ULL), (((/* implicit */unsigned long long int) 524224)))))))));
                var_22 += ((/* implicit */unsigned long long int) var_10);
                arr_18 [(_Bool)1] [i_2] [i_4] [i_4] &= ((/* implicit */_Bool) ((unsigned char) arr_14 [i_4] [i_2] [i_4] [i_4]));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) -542413304)))))) > (((max((((/* implicit */unsigned long long int) var_3)), (arr_11 [i_0] [i_2] [i_4]))) * (((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55488))))))))));
            }
        }
        for (short i_5 = 1; i_5 < 17; i_5 += 4) 
        {
            var_24 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [8ULL] [i_5 + 1] [i_5 - 1] [i_5 - 1])), ((unsigned char)56)))), (min((arr_0 [8U] [i_5 + 1]), (((arr_4 [i_0] [(short)12]) & (((/* implicit */int) var_5))))))));
            arr_22 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (short)-2035)))));
        }
    }
    var_25 = ((/* implicit */unsigned char) min(((~(var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2040)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))));
}
