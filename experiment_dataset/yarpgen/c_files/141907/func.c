/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141907
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
    var_16 = ((/* implicit */unsigned short) var_1);
    var_17 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)1)))) / (((var_11) / (((/* implicit */int) var_1))))));
        arr_4 [i_0] = (-(((((/* implicit */_Bool) ((arr_2 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58948)))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) 1650902015U)) ? (var_11) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0] [(unsigned short)13])) : (((/* implicit */int) var_5))))) || ((!(((/* implicit */_Bool) (unsigned char)243))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_8 [16U] [16U] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_1])) - (((/* implicit */int) (unsigned char)12))))) ? ((-(3731369746U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) -603360464)) == (-2198743136591146070LL)))))));
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)228))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0])) && (((/* implicit */_Bool) var_3)))))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_11 [1] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)253))));
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+((((!(((/* implicit */_Bool) 2198743136591146070LL)))) ? (((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((/* implicit */int) arr_1 [i_0] [(signed char)14]))))) : (((((/* implicit */_Bool) (unsigned char)34)) ? (413396136U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))))));
        }
    }
    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        var_20 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_5)))) && (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_7 [i_3] [i_3]))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3])) ? (1650902015U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)79)))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_2 [i_3]) : (arr_2 [i_3]))) : (((arr_2 [i_3]) * (arr_2 [i_3]))))))));
        arr_16 [i_3] = ((/* implicit */unsigned int) (((((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (-2198743136591146070LL) : (((/* implicit */long long int) 450849774U))))))) ? (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)12)))) && (((/* implicit */_Bool) 2644065286U)))))) : ((((!(((/* implicit */_Bool) arr_13 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_1) && (((/* implicit */_Bool) arr_13 [i_3])))))) : (((((/* implicit */_Bool) var_3)) ? (2198743136591146069LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_3])))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_22 |= ((/* implicit */long long int) ((var_7) ? (var_6) : (((/* implicit */unsigned int) arr_15 [i_4]))));
            arr_21 [i_4] [i_5] = ((((/* implicit */_Bool) -2198743136591146070LL)) || (((/* implicit */_Bool) var_8)));
        }
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2644065287U)))) ? (((((/* implicit */int) (unsigned char)222)) * (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_13)))))))));
        var_24 = ((/* implicit */int) max((var_24), (((((((/* implicit */_Bool) (unsigned short)48021)) ? (((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (1083978290) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)222))))))) | ((~(((/* implicit */int) ((arr_7 [i_4] [i_4]) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
        arr_22 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [12])) && (((/* implicit */_Bool) var_15)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) - (arr_12 [(signed char)0])))))) ? (((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((1650902010U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243)))))))) : (((((/* implicit */_Bool) ((arr_18 [i_4] [i_4]) + (var_11)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_4])) ? (var_11) : (((/* implicit */int) (_Bool)1))))))));
    }
    var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1)))) + ((+(((/* implicit */int) var_5))))));
}
