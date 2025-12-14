/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188251
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_12)), (var_7)))) ? (((((/* implicit */int) var_10)) >> (((var_2) - (1200849121))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))))) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_1)) ? (var_11) : (var_8))) : ((((_Bool)0) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (4294967295U))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_16 -= ((/* implicit */unsigned char) var_7);
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((((/* implicit */int) var_9)), (var_7))), (max((((/* implicit */int) var_4)), (var_7)))))) ? (((((/* implicit */_Bool) var_6)) ? (max((var_0), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (var_11)))) ? (((((/* implicit */_Bool) (short)14336)) ? (((/* implicit */unsigned int) 2147483647)) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_8)))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) - (var_7))))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (var_7))))))));
                        var_19 -= ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
                        var_20 *= ((/* implicit */_Bool) var_0);
                    }
                    arr_12 [(unsigned short)8] [16U] [i_1] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) -602676675)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-13460))))))))));
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14347)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551594ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_5))) : (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned int) var_12))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
}
