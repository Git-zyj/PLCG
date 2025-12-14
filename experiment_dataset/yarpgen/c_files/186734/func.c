/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186734
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */long long int) var_9)), (-5680299411834478045LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4611686018427387903ULL)) && (((/* implicit */_Bool) (unsigned char)194)))))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) (((!(var_1))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_10))))))));
                    var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_6)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((max((arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned long long int) var_15)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [(short)17] [i_1] [i_2] [i_3]))))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_4 [i_0] [i_0]))))))))));
                        arr_11 [i_3] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2])) : (((/* implicit */int) var_17))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_4 [i_1] [i_2]))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */signed char) arr_8 [1] [i_1 - 1] [1] [i_1])), (var_12)))) < (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_15 [i_4] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) var_18))))))));
                        var_26 = ((/* implicit */short) var_10);
                        var_27 = ((/* implicit */_Bool) var_13);
                    }
                }
            } 
        } 
    } 
}
