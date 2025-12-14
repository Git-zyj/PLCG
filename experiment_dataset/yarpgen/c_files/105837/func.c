/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105837
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
        {
            arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 2147483648U)), (var_5)))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))), ((-(((((/* implicit */long long int) ((/* implicit */int) var_2))) - (var_3)))))));
            var_10 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1])) ? (((arr_2 [i_0] [i_1] [i_0]) % (arr_2 [i_0] [i_0] [i_0]))) : (arr_0 [i_0 - 2])))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_1 [i_1] [i_0 - 2]))))));
        }
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
        {
            var_11 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))))), (arr_0 [i_0 + 1])))));
            var_12 = ((/* implicit */unsigned char) (signed char)22);
        }
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
        {
            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (770794802) : (((/* implicit */int) (short)11994))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)255))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))) - (arr_9 [i_0 - 1] [i_0 - 1])))));
            var_14 = ((/* implicit */int) arr_10 [i_0 + 1] [i_3]);
            var_15 = ((/* implicit */unsigned short) max((var_9), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [8] [i_3]))) * ((~(var_8)))))));
        }
        var_16 -= ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 - 2])) ? (((/* implicit */unsigned long long int) 2147483627U)) : (arr_10 [i_0 - 2] [i_0 - 2])));
        arr_11 [i_0] [i_0 - 1] = ((/* implicit */int) min((((((((/* implicit */int) arr_6 [i_0] [i_0])) <= (arr_7 [i_0] [i_0] [i_0]))) ? (((unsigned int) arr_8 [i_0] [i_0] [i_0 - 2])) : ((-(arr_9 [i_0 - 2] [i_0 - 2]))))), (((/* implicit */unsigned int) ((unsigned short) arr_2 [i_0 - 2] [(unsigned char)15] [(unsigned char)15])))));
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0 + 1] [i_0])))));
        arr_12 [i_0] = ((/* implicit */unsigned long long int) arr_3 [13] [i_0] [i_0 - 2]);
    }
    for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        var_18 = ((/* implicit */short) 1968053380700513674LL);
        arr_16 [i_4] [i_4] = min((((((/* implicit */int) arr_15 [i_4] [i_4])) * (((/* implicit */int) arr_15 [i_4] [i_4])))), (((/* implicit */int) arr_15 [i_4] [i_4])));
    }
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) -241887594)) || (((/* implicit */_Bool) -1593984170))));
}
