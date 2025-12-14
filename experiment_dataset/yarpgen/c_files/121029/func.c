/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121029
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((var_5), (((/* implicit */unsigned int) var_6))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (6917529027641081856ULL) : (((/* implicit */unsigned long long int) 2147483647U))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (max((var_3), (((/* implicit */long long int) var_13)))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) 8273935710763779729LL)) ? (667867013) : (((/* implicit */int) (unsigned char)128)))), (var_14))))));
    var_19 -= ((/* implicit */unsigned short) 0);
    var_20 = min(((-((-(((/* implicit */int) (unsigned short)0)))))), (max((min((var_14), (((/* implicit */int) var_11)))), (((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 4; i_2 < 21; i_2 += 4) 
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47913)) ? (((/* implicit */int) (short)21655)) : (((/* implicit */int) (unsigned char)130))))) ? (((/* implicit */int) arr_6 [i_2] [i_2 - 1] [i_1] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) var_14))))))), (arr_0 [i_2] [i_0]))))));
                    var_22 *= ((/* implicit */short) var_14);
                    arr_7 [i_0] = ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 3] [i_2 - 3]))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_15)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max(((unsigned char)132), ((unsigned char)147)))))));
                }
                arr_8 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_17))))) : ((+(((((/* implicit */unsigned int) var_14)) * (var_5)))))));
                var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) (unsigned short)44025)) ? (((/* implicit */unsigned long long int) ((int) (-2147483647 - 1)))) : (18446744073709551601ULL)))));
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) arr_3 [i_1])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((var_6), (var_4))))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_0]))));
            }
        } 
    } 
}
