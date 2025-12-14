/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181693
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32747)) ? (min((((/* implicit */int) (_Bool)1)), (-2057428168))) : (((/* implicit */int) var_6))))) ? ((~(4141670204U))) : (((((/* implicit */_Bool) var_0)) ? (var_5) : (((4141670204U) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16380)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 520093696)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17378))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_4)))))));
    var_20 = ((/* implicit */unsigned char) (~(var_7)));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [(signed char)8] [5ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)7)), (520093696)))) : (((((/* implicit */_Bool) 36410464623245420ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10821448420736392213ULL)))))));
                arr_4 [2LL] [i_1] [i_0] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) max((((/* implicit */short) (signed char)4)), (var_4)))))), (((/* implicit */int) (unsigned char)165))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_9 [i_1] [i_1] [(short)8] = 10821448420736392213ULL;
                    var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4493986740428643171LL)) ? (((/* implicit */int) (unsigned short)29238)) : (((/* implicit */int) (short)29035))))), (max((((((/* implicit */_Bool) arr_1 [i_2] [i_0 + 1])) ? (((/* implicit */unsigned long long int) var_5)) : (var_12))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_3 [i_0] [i_2])))))));
                    var_23 = ((/* implicit */_Bool) 268431360);
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) min((min((arr_7 [i_0] [9U] [i_0 + 1] [i_0]), (arr_7 [i_0] [i_0] [i_0 + 3] [i_0]))), (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_16)) : (var_3))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-10))))))))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) var_3);
                }
                arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)112);
            }
        } 
    } 
}
