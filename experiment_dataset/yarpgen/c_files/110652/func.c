/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110652
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
    var_11 = ((/* implicit */short) min((((/* implicit */int) var_10)), (max((((/* implicit */int) ((((/* implicit */int) (signed char)127)) > (((/* implicit */int) (signed char)-127))))), (((((/* implicit */int) (signed char)127)) % (((/* implicit */int) (signed char)122))))))));
    var_12 = ((/* implicit */short) (~((+(((/* implicit */int) var_3))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_6)));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_8 [0U] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_5))));
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-98)) ? (var_8) : (9223372036854775807LL)));
        }
        for (signed char i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
        {
            arr_12 [13U] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20181))) : (3943251521U)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))) : (var_5))));
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(2675304892U)))) ? (((/* implicit */int) (unsigned short)44949)) : ((-(642119710)))));
        }
        for (signed char i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
        {
            arr_16 [i_0] [(short)7] = ((/* implicit */unsigned int) ((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-96))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
            arr_17 [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_5)));
            var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
            arr_18 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-29962))));
        }
        arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)124)) < ((-(((/* implicit */int) var_2))))));
    }
}
