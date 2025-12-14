/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103332
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
    var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57863))) : (var_4)))) ? (((var_5) ? (-1745909894) : (((/* implicit */int) var_3)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-8)), (var_8))))))), (max((min((var_16), (((/* implicit */unsigned long long int) (unsigned short)65534)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14)))))))));
    var_18 = ((/* implicit */int) min((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)6902))) : (var_0))), (((/* implicit */long long int) max(((short)-6903), (((/* implicit */short) var_3))))))), (max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) : (var_9))), (((/* implicit */long long int) min(((unsigned short)1), (((/* implicit */unsigned short) var_15)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) (short)23733))));
                    var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) max(((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3322520840U))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) (unsigned short)65534)))))))), (max((((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))) : (arr_3 [i_0] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)65534)))))))));
                    var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min(((unsigned short)65522), (((/* implicit */unsigned short) (signed char)124))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31281))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)6902), (var_14))))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)59))))), (((((/* implicit */_Bool) (unsigned char)127)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23733))))))))));
                    var_21 = ((/* implicit */_Bool) max((min((min((((/* implicit */unsigned long long int) (short)-22869)), (15646672595231856904ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1258031149821945771LL)) ? (((/* implicit */int) var_14)) : (arr_4 [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (max((((/* implicit */unsigned long long int) arr_4 [i_0])), (var_16))) : (((/* implicit */unsigned long long int) max((arr_3 [i_2] [i_1]), (((/* implicit */long long int) (unsigned char)60)))))))));
                    arr_8 [i_2] [i_2] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_2)), ((short)19432))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)195))) : (var_4)))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)76)), ((short)6893)))) ? (((/* implicit */unsigned long long int) ((var_5) ? (arr_4 [i_2]) : (arr_4 [i_2])))) : (max((((/* implicit */unsigned long long int) var_1)), (arr_1 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)195))))));
                }
            } 
        } 
    } 
}
