/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126708
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_10 = (~(((/* implicit */int) (_Bool)1)));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) (short)2057)))));
                arr_8 [(short)14] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 15; i_2 += 3) 
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_0)), (arr_5 [i_2 + 1] [i_2 + 1] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 1] [5ULL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_2 - 3] [i_2 - 1] [i_1]))))));
                    var_12 = ((/* implicit */short) arr_6 [12] [(unsigned short)0]);
                    arr_12 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1268673996)) ? (var_5) : (((/* implicit */int) (unsigned char)159))))));
                }
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9223372036854775792LL)))) < ((-(var_8))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */int) var_0))))) ? ((~(((var_7) - (((/* implicit */int) (signed char)-14)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_3))))));
    var_15 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) 1625767107)) != (15697336014586109898ULL))), (var_9)));
}
