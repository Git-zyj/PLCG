/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135457
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
    var_13 = ((short) var_8);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4ULL)) ? (((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) arr_2 [(unsigned char)8] [i_0]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_1))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-3585)) + (2147483647))) >> (0ULL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-84)) >= (((/* implicit */int) var_11)))))) & ((-(18446744073709551615ULL)))))));
        arr_4 [(unsigned short)4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (18446744073709551608ULL)))) : (((((_Bool) var_1)) ? (((/* implicit */int) ((arr_0 [2ULL]) || (((/* implicit */_Bool) (unsigned short)14))))) : (((/* implicit */int) ((short) (short)-22522)))))));
        var_14 = ((unsigned long long int) var_7);
    }
    for (int i_1 = 1; i_1 < 9; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            arr_9 [i_1] [i_1] = ((/* implicit */_Bool) (unsigned short)1023);
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_3 = 1; i_3 < 9; i_3 += 2) /* same iter space */
            {
                arr_12 [i_3] = ((/* implicit */_Bool) ((unsigned long long int) (~(var_1))));
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_10 [i_1] [i_1 - 1] [i_1]))));
                var_16 -= ((/* implicit */signed char) var_10);
            }
            for (int i_4 = 1; i_4 < 9; i_4 += 2) /* same iter space */
            {
                var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)5))))) ^ (0U)));
                var_18 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)60)) / (122420746)));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(3ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) : (-69923485))) ^ (((/* implicit */int) arr_0 [6U])))))));
            }
        }
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)0))))) / (min((((/* implicit */unsigned long long int) (unsigned char)242)), (arr_15 [i_1 + 1] [i_1 - 1] [i_1]))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_8))))))));
            var_22 = ((/* implicit */unsigned long long int) var_6);
            arr_19 [i_1 + 1] [i_1 + 1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((888135821U) / (((/* implicit */unsigned int) var_9))))), (arr_7 [i_5])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 14939460687241456859ULL))) * ((-(((/* implicit */int) (unsigned short)51252))))))) : ((+(min((((/* implicit */unsigned long long int) (signed char)8)), (1585219999163595884ULL)))))));
        }
    }
}
