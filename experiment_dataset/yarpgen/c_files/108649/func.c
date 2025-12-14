/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108649
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) >= (0)))), (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((1421972661) <= (-1))))) < (var_10)))) : (var_11)));
    var_15 = ((/* implicit */unsigned char) (-(((((_Bool) var_9)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)127)), (var_8)))) : (((/* implicit */int) var_13))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) (_Bool)1);
        var_17 = ((/* implicit */int) arr_1 [i_0]);
        var_18 = ((/* implicit */_Bool) (-(arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((min(((+(((/* implicit */int) (_Bool)1)))), ((-(1327658601))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))))))));
        /* LoopSeq 1 */
        for (int i_2 = 4; i_2 < 13; i_2 += 3) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned long long int) max((-17), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (-1327658602))))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (max((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)120))))), (arr_7 [i_2] [i_2] [i_2 - 3]))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_1]))))), ((~(arr_7 [i_1] [i_1] [i_1])))))))));
        }
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) max(((unsigned char)5), ((unsigned char)255)))), (arr_3 [i_3])))));
        var_21 = ((/* implicit */_Bool) arr_3 [i_3]);
        arr_15 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1138966873)), (18446744073709551595ULL)))) ? (((((/* implicit */int) arr_8 [6])) - (arr_11 [i_3] [i_3]))) : (((/* implicit */int) (unsigned char)12))))) * (arr_12 [i_3] [i_3])));
        var_22 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) -3)))))), ((~(((/* implicit */int) var_8))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */int) (short)-5080)) : (((/* implicit */int) (short)6144))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) (((-(0U))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)12)))))));
        var_25 = (+(123746758));
        arr_20 [i_4] |= ((/* implicit */signed char) arr_18 [i_4] [i_4]);
    }
    var_26 ^= ((/* implicit */unsigned long long int) max((var_2), (max(((unsigned char)12), (var_4)))));
}
