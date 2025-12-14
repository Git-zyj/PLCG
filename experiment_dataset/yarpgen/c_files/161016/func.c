/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161016
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
    var_17 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_11)), (arr_2 [13] [i_0])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (5284197899980333405LL)))) ? (((((/* implicit */_Bool) 523776U)) ? (-7087748936828143959LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [12LL] [i_0]))))) : (((/* implicit */long long int) ((arr_3 [10LL]) & (-1348152668))))))));
        var_19 += ((/* implicit */long long int) ((max((9223372036854775807LL), (((/* implicit */long long int) var_0)))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */unsigned int) 1849045756)) : (4294443513U))))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_4 [i_1]))))));
        var_21 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248)))))));
    }
    for (long long int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] [i_2] = (!(((/* implicit */_Bool) (-((+(-109785078)))))));
        var_22 |= ((/* implicit */int) ((signed char) ((unsigned char) ((((/* implicit */_Bool) 4294443519U)) ? (12848974257997793058ULL) : (10283877235063470039ULL)))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32767)) % (((/* implicit */int) (unsigned short)1536))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146))) : ((~(4294443520U)))));
    }
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned char) 9223372036854775792LL);
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) 523775U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294443513U))))) : (1765708145))))));
        var_25 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)245)) != (min((31744), (arr_3 [i_3])))));
        var_26 = ((/* implicit */int) ((long long int) ((signed char) var_2)));
    }
    var_27 = ((/* implicit */signed char) ((min(((~(((/* implicit */int) var_8)))), (((((/* implicit */int) (unsigned char)245)) >> (((((-9223372036854775798LL) - (-9223372036854775797LL))) + (28LL))))))) & (((/* implicit */int) (short)-10345))));
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)2591))) ^ (var_7)));
}
