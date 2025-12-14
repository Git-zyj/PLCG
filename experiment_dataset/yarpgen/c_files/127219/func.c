/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127219
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
    var_18 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_19 ^= ((/* implicit */short) (+(((/* implicit */int) (_Bool)0))));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8547302977774296234ULL)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-15556), ((short)-6924))))));
        var_20 = ((((/* implicit */_Bool) 1323877284)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) ((unsigned char) ((short) var_11)));
        var_22 ^= ((/* implicit */unsigned int) ((max((14541047886485123849ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((int) min((9899441095935255381ULL), (var_14))))), (min((((/* implicit */unsigned long long int) (unsigned char)179)), (3941164609272356588ULL)))));
    }
    for (int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_5 [i_2]), (arr_5 [i_2])))) ? (8547302977774296234ULL) : (max((((((/* implicit */_Bool) 3930730143U)) ? (var_14) : (arr_0 [i_2] [i_2]))), (arr_0 [i_2] [i_2])))));
        arr_9 [i_2] [i_2] |= ((/* implicit */int) var_16);
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) var_3);
    }
    for (int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = max((min((min((var_7), (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) 473621038)))), (17454747090944ULL));
        var_25 = ((/* implicit */int) 4294967295U);
        arr_14 [i_3] [i_3] |= ((/* implicit */short) (unsigned short)1421);
        arr_15 [i_3] = ((((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (arr_0 [i_3] [i_3]) : (((/* implicit */unsigned long long int) 4294967295U)))) > (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))), (((unsigned long long int) arr_6 [i_3])))));
        var_26 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (short)-2412)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3]))) : (var_0))), (((/* implicit */long long int) (~(arr_2 [i_3] [i_3])))))) ^ (((/* implicit */long long int) var_13))));
    }
}
