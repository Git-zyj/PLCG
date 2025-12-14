/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132006
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
    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned char)176)))), (((695095643) & (((/* implicit */int) var_9))))))), (min((max((3638303806U), (((/* implicit */unsigned int) -695095643)))), (((/* implicit */unsigned int) ((var_1) - (((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            var_14 = ((/* implicit */int) arr_3 [i_1 + 1] [i_0 + 1]);
            var_15 &= (!((_Bool)1));
            arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)98)) ? (2147483647) : (((/* implicit */int) (unsigned char)44))));
            arr_8 [i_1] = ((/* implicit */int) arr_0 [i_0]);
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)222)) == (((/* implicit */int) arr_3 [i_0 + 2] [i_0 - 1]))));
        }
        var_17 = var_4;
        var_18 = ((/* implicit */signed char) ((((((/* implicit */long long int) (+(arr_1 [i_0] [i_0])))) + (min((((/* implicit */long long int) var_5)), (arr_4 [i_0] [i_0]))))) / (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 - 2] [i_0 + 2] [i_0])) + ((-(((/* implicit */int) arr_0 [i_0])))))))));
    }
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((+(var_11))))))));
    var_20 |= var_10;
    var_21 = ((/* implicit */unsigned int) (~((~(min((var_11), (((/* implicit */long long int) var_8))))))));
}
