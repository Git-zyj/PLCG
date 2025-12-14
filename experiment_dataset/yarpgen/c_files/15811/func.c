/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15811
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0 - 3])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_0 [i_0]))))) ? (min((17593549221731484561ULL), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2257445334U)) || (var_8)))))))) ? (min((min((924686469U), (((/* implicit */unsigned int) (unsigned short)41949)))), (((/* implicit */unsigned int) min((arr_3 [(signed char)5] [i_1 + 2] [i_0]), (((/* implicit */unsigned char) var_3))))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)39)) && (((/* implicit */_Bool) arr_3 [i_0 - 3] [i_1 - 2] [i_0 - 1])))) ? (((((/* implicit */_Bool) var_11)) ? (-1948043734) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))))))));
                arr_5 [(unsigned char)0] &= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) ((var_14) > (((/* implicit */long long int) arr_2 [i_1]))))) << (((min((((/* implicit */int) arr_1 [(unsigned short)8])), (-1948043734))) + (1948043759)))))), (min((((/* implicit */long long int) max((-1948043734), (1948043734)))), (((((/* implicit */_Bool) var_6)) ? (9078644002476646768LL) : (0LL)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) - (var_6))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_0])), (var_4))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0 - 2]) : (((/* implicit */int) arr_1 [i_0])))) << (((((/* implicit */int) min((arr_3 [i_0] [i_1] [i_1 + 2]), ((unsigned char)255)))) - (77)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_12) : (var_7)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_2 [i_0 + 1])) : (var_0)))))));
                var_16 = ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) ^ (-1240266827359344028LL))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (0U))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 764429294U)) ^ (var_7))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-8347)) && ((_Bool)0)))))))) : (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_4)) : (var_1))) * (((/* implicit */unsigned long long int) ((arr_2 [i_0]) * (((/* implicit */int) var_8))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) << (((var_7) + (3667111129225344869LL)))))), (min((var_0), (((/* implicit */unsigned long long int) (_Bool)1))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) == (var_0))))))))));
}
