/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149206
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
        {
            var_16 &= ((/* implicit */unsigned short) ((((min((var_14), (((/* implicit */unsigned int) var_15)))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) && (((/* implicit */_Bool) ((((-1798877696) + (2147483647))) >> (((var_9) - (572961872))))))));
            var_17 = ((/* implicit */short) var_13);
            var_18 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]);
        }
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */short) max((((var_13) ? (max((((/* implicit */unsigned long long int) var_10)), (var_8))) : (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)44369)) >> (((max((4294967291U), (arr_6 [i_0 - 1] [13U] [i_0 - 1]))) - (4294967271U))))))));
            var_20 = ((/* implicit */signed char) ((((unsigned int) (unsigned char)70)) & (min((min((25U), (((/* implicit */unsigned int) var_12)))), (min((4294967244U), (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
            var_21 = ((/* implicit */signed char) max(((~(arr_4 [(unsigned char)16] [i_2] [i_2]))), (((var_9) % (var_9)))));
        }
        var_22 = ((/* implicit */unsigned char) (unsigned short)57688);
        var_23 = ((/* implicit */int) max((min((arr_8 [i_0] [i_0]), (((/* implicit */unsigned long long int) min((2U), (((/* implicit */unsigned int) var_3))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))));
        arr_11 [0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((-3584201804282293735LL), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]))))) ? (var_8) : (arr_10 [i_0] [i_0] [i_0]))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)7837)) | (((/* implicit */int) (_Bool)0)))))));
    }
    var_24 += ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_10)), (max(((+(3954643295U))), (((/* implicit */unsigned int) (unsigned char)244))))));
}
