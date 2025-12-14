/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154847
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
    var_20 = ((/* implicit */unsigned char) min((((long long int) ((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (((/* implicit */long long int) (_Bool)0))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] &= ((/* implicit */int) ((((/* implicit */int) ((((unsigned int) var_2)) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))))) == (((/* implicit */int) (((+(((/* implicit */int) arr_1 [i_0])))) < (((/* implicit */int) arr_3 [i_0] [i_0])))))));
        var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((signed char) ((long long int) arr_2 [i_0] [12U])))), ((+(17058855330508922701ULL)))));
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0 - 3])), (min((1387888743200628914ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) min((((/* implicit */short) ((signed char) var_4))), ((short)-1765))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [i_1])) / (-347564479022436039LL))))));
        var_25 = ((/* implicit */unsigned long long int) (unsigned short)41905);
    }
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_26 ^= ((/* implicit */signed char) arr_8 [i_2]);
        var_27 = ((/* implicit */short) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_8 [i_2])), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (short)(-32767 - 1)))))))) & (0U)));
    }
    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 4) 
    {
        var_28 = ((/* implicit */unsigned int) ((int) ((((unsigned int) (unsigned short)53535)) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) ^ (-1830549352)))))));
        var_29 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_9 [11LL])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) arr_11 [i_3])))))) : (arr_0 [i_3])));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)1775)) || ((_Bool)1)));
        var_31 = ((/* implicit */long long int) (_Bool)1);
    }
}
