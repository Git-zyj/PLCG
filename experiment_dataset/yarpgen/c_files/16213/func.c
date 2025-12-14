/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16213
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
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)54580)));
    var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_19), (((/* implicit */unsigned short) (_Bool)0))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (((var_14) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */long long int) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) arr_5 [i_1] [i_1])))) : (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_10))))), (arr_5 [i_1] [(unsigned short)4]))))));
            var_22 = ((/* implicit */short) ((max((((/* implicit */int) (!(var_11)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_1])))))) - ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [11U])))))))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                arr_9 [i_1] [i_1] = ((unsigned int) ((((/* implicit */_Bool) var_19)) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) var_7))));
                var_23 = ((/* implicit */unsigned int) var_11);
                var_24 = ((/* implicit */unsigned int) min((var_24), (((var_13) | (((/* implicit */unsigned int) ((/* implicit */int) min((max((arr_3 [i_0]), (((/* implicit */short) var_5)))), (((/* implicit */short) ((((/* implicit */unsigned long long int) var_8)) <= (11689660409697995887ULL))))))))))));
            }
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (unsigned short)10955)) >> (((((/* implicit */int) (unsigned short)29017)) - (28999))))))) ? (((/* implicit */int) (((_Bool)0) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [17U]))) > (arr_7 [i_0] [i_0] [7U] [i_3])))))) : (((/* implicit */int) (_Bool)1))));
                var_26 = ((/* implicit */unsigned short) min((var_13), (max(((+(arr_11 [i_0] [i_1] [(unsigned short)6]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_19)) ^ (((/* implicit */int) (_Bool)1)))))))));
            }
            arr_12 [i_1] = ((/* implicit */unsigned char) var_1);
            var_27 = ((/* implicit */short) 278093814U);
        }
        arr_13 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0]))));
        var_28 = ((/* implicit */unsigned long long int) (short)20664);
    }
    var_29 = ((/* implicit */unsigned int) var_1);
}
