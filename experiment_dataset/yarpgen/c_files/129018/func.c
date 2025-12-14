/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129018
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_11 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */int) (unsigned char)192)), (-480635906))))) ? (((long long int) arr_1 [3LL])) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 3464667541U)) ? (-9223372036854775803LL) : (9223372036854775803LL))))))));
        var_12 = -9223372036854775803LL;
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_13 += ((/* implicit */unsigned int) ((unsigned short) arr_5 [i_0]));
            arr_6 [(_Bool)1] [(_Bool)1] [i_0] = (+((((+(((/* implicit */int) (signed char)-6)))) / ((-(594917750))))));
            arr_7 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0])))));
        }
    }
    for (signed char i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        arr_10 [(unsigned char)7] = ((/* implicit */unsigned int) var_2);
        var_14 = ((/* implicit */signed char) ((9223372036854775802LL) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2])))));
        arr_11 [8U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) / (-9223372036854775806LL)))) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_2] [i_2])) : (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) var_8))))))) ? (((long long int) ((unsigned short) arr_9 [i_2] [7U]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-5)))));
    }
    var_15 = ((/* implicit */unsigned short) ((short) var_8));
    var_16 ^= ((/* implicit */long long int) var_7);
    var_17 += ((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((((/* implicit */int) (signed char)1)) - (((/* implicit */int) var_3))))));
}
