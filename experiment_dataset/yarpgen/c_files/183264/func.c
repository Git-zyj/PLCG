/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183264
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
    var_17 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (short)28672)) * (((/* implicit */int) (_Bool)0)))));
        var_19 = ((/* implicit */long long int) ((((arr_0 [i_0]) ? (((/* implicit */int) max((((/* implicit */short) var_16)), ((short)28677)))) : ((-(((/* implicit */int) (short)-28700)))))) < (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_1 [i_0] [9])))) : (((/* implicit */int) (_Bool)1))))));
        arr_2 [1ULL] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)7133))), (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7142))) + (var_12)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */signed char) (-(arr_4 [i_1])));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7108))))) <= (((/* implicit */int) ((signed char) arr_4 [i_1])))))) <= (((/* implicit */int) ((((/* implicit */int) var_15)) == (((/* implicit */int) (signed char)-22)))))));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) var_1);
        var_20 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)28677)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7128))) : (0ULL))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_2])))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-8)) ? (arr_5 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((arr_4 [i_2]) & (((/* implicit */int) (_Bool)1))))))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_3 = 4; i_3 < 14; i_3 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) max((((/* implicit */int) (signed char)1)), (((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */int) (short)-28673)) : (((/* implicit */int) arr_13 [1LL]))))));
        arr_14 [(short)3] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)9)) ? (((((((/* implicit */int) (signed char)-5)) + (2147483647))) >> (((((/* implicit */int) (short)28663)) - (28641))))) : (((/* implicit */int) (short)-28702))));
    }
}
