/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120625
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (var_0)))))) ? (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : (((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0] [(_Bool)1]) - (2157584871U))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (unsigned char)2)) >> (((/* implicit */int) (_Bool)1))))));
        var_17 -= ((/* implicit */unsigned char) min(((-(11963431635657649879ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && ((_Bool)1))))))))));
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10245142519450469340ULL)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (_Bool)1)))))));
        var_19 = ((/* implicit */unsigned int) var_1);
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183)))))))) % (max((11ULL), (((/* implicit */unsigned long long int) (short)8))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) 5948950544410548013ULL)) && (((/* implicit */_Bool) arr_0 [14ULL] [i_1]))))) : (((/* implicit */int) min(((short)0), ((short)30973))))))) >= (((((/* implicit */_Bool) 16383)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_2 [(short)4])), (arr_4 [i_1]))))) : ((~(arr_0 [i_1] [i_1]))))))))));
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 1; i_4 < 11; i_4 += 2) 
            {
                {
                    arr_15 [i_4] [i_3] [i_4 - 1] [(short)11] = (+(((((/* implicit */_Bool) arr_10 [i_3] [i_4 + 1])) ? (arr_10 [i_2] [i_4 + 1]) : (var_6))));
                    var_21 |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) min((var_1), ((short)-12189)))) ? (arr_13 [i_3] [(_Bool)1]) : ((~(((/* implicit */int) arr_4 [i_2]))))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (min(((((~(9260649930626628721ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4685))))), (((/* implicit */unsigned long long int) (~(max((arr_0 [i_4] [i_3]), (((/* implicit */unsigned int) arr_8 [i_2] [i_2])))))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
        arr_16 [0ULL] = ((/* implicit */unsigned long long int) ((unsigned int) var_11));
        arr_17 [i_2] [(short)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_9 [i_2])) | ((~(arr_14 [i_2] [i_2])))))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (_Bool)0))))));
        var_24 &= ((/* implicit */unsigned char) (_Bool)0);
    }
    var_25 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_9)), (var_0))) * (((/* implicit */unsigned long long int) var_9))));
}
