/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153881
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
    var_16 = ((/* implicit */unsigned long long int) (signed char)-56);
    var_17 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (+(4107678690U)))), (max((var_0), (((/* implicit */long long int) var_12)))))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >= (((/* implicit */int) (short)7722)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) (short)-7722);
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-7701))) % (var_10))) == (((/* implicit */unsigned int) (-(((/* implicit */int) var_14)))))))) % ((-(((/* implicit */int) (short)-7701))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_20 = ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0] [i_1] [i_1] [i_2]));
                arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_2]))));
            }
        }
        for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            arr_13 [(unsigned char)3] [i_0] [i_0] = ((/* implicit */int) (short)7701);
            var_21 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((long long int) arr_1 [i_3])), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)7706))))))))));
        }
    }
    var_22 += ((/* implicit */signed char) var_6);
    var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)63281))))) : (var_6))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)188)))));
}
