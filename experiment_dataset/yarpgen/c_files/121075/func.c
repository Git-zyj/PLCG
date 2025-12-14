/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121075
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
    var_12 = ((/* implicit */unsigned short) ((int) var_8));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) 3327170698U)) ? (17706416917257099248ULL) : (((/* implicit */unsigned long long int) 3327170698U)))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) 967796590U))))));
        var_13 |= ((/* implicit */unsigned long long int) ((unsigned short) ((int) (unsigned short)50400)));
        arr_4 [(unsigned short)2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 4294967287U)), (((((/* implicit */_Bool) (short)-16384)) ? (14520017779153951886ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22279)))))));
        var_14 = ((/* implicit */unsigned short) ((967796597U) <= (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (arr_1 [i_0] [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(arr_0 [i_1] [i_1]))), (((/* implicit */unsigned long long int) min((var_5), (var_5))))))) ? ((-(arr_5 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27)))));
        var_16 = ((/* implicit */long long int) max((min((((/* implicit */int) max((var_1), (((/* implicit */short) (signed char)-96))))), ((-(((/* implicit */int) (signed char)-96)))))), ((-(((/* implicit */int) max(((signed char)8), ((signed char)-8))))))));
        var_17 = ((short) 23ULL);
        arr_8 [i_1] = ((/* implicit */unsigned short) var_7);
        var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) var_6)) ? (((unsigned int) arr_5 [i_1])) : (arr_5 [i_1])))));
    }
    var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) 4294967279U))) ? (((/* implicit */int) ((unsigned short) 18446744073709551615ULL))) : (((/* implicit */int) var_3))));
}
