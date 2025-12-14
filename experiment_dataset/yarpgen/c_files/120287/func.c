/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120287
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(max((((/* implicit */int) var_16)), ((-(((/* implicit */int) var_3)))))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) var_8))))) ? (max((((/* implicit */long long int) ((short) var_1))), (((((/* implicit */_Bool) var_1)) ? (-7475336003408481441LL) : (arr_2 [i_0]))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)10269)), (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned char) var_10);
            arr_9 [i_0] = ((/* implicit */short) var_19);
        }
        var_21 ^= ((/* implicit */signed char) arr_5 [14ULL]);
        arr_10 [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_2 [i_0])), (((unsigned long long int) var_17)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 2) 
    {
        arr_13 [i_2] = ((/* implicit */short) arr_7 [i_2]);
        arr_14 [i_2] = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) arr_12 [i_2 + 1] [i_2])));
        arr_15 [i_2] [i_2] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)17758)) >> (((var_14) - (11149421549375869671ULL)))))), (var_10))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) arr_1 [i_2]))))), (arr_1 [i_2]))))));
    }
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_22 &= ((((/* implicit */int) ((unsigned char) arr_16 [i_3]))) ^ (((((((((/* implicit */int) arr_17 [(unsigned char)10])) + (2147483647))) >> (((var_14) - (11149421549375869686ULL))))) & (((/* implicit */int) min(((unsigned short)25775), (((/* implicit */unsigned short) arr_16 [i_3]))))))));
        var_23 = ((/* implicit */long long int) min((var_23), (((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) arr_17 [(unsigned char)0]))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_17 [(unsigned char)20])) : (((/* implicit */int) (unsigned char)217))))))) ? ((-(((long long int) (unsigned char)70)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 2000394409571388870ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((3971867025U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3])))))))))))));
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned short) arr_16 [i_3]);
    }
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_23 [i_4] &= ((/* implicit */int) var_14);
        arr_24 [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_16)))))));
    }
}
