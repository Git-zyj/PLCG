/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186431
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
    var_16 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) var_7))))) : (max((var_6), (arr_4 [i_1])))))) ? ((+(((/* implicit */int) ((0ULL) <= (14516886290343171851ULL)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) || ((_Bool)1))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+(807107948U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(807107948U)))) ? (-413343715204341283LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_10)))))))));
                    var_18 = ((/* implicit */long long int) (+((-(((((/* implicit */_Bool) 807107952U)) ? (arr_7 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */int) arr_6 [i_0] [i_2]))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) max(((-(arr_2 [i_0 - 2] [i_0 - 2]))), (((/* implicit */long long int) (+(arr_7 [i_0] [i_0] [i_0] [i_0 - 3]))))));
        var_20 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned int) (unsigned short)45098))) ? ((+(1807333360U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_12)))))))) == (((((/* implicit */_Bool) ((signed char) (unsigned short)20446))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) 2319396113360390796ULL))));
                arr_15 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((13796771739971414861ULL) + (0ULL)))) ? (((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_3]))))))))));
            }
            for (short i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3])) || (((/* implicit */_Bool) var_4)))))));
                arr_19 [i_0] [i_3] [i_5] &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_18 [i_0] [i_5] [i_5])) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) arr_6 [i_0] [i_0]))))));
            }
            for (long long int i_6 = 2; i_6 < 18; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    var_24 = ((/* implicit */_Bool) ((arr_20 [i_0 - 3] [i_6 - 2] [i_6 - 2] [i_6]) ^ (arr_20 [i_0 - 3] [i_6 - 2] [i_6 - 2] [i_7])));
                    arr_26 [i_0] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_6 + 1] [i_3] [i_6] [i_0 - 2])) ? (arr_7 [i_6 - 2] [i_3] [i_3] [i_0 + 4]) : (arr_7 [i_6 - 1] [i_6] [i_6] [i_0 - 3])));
                    var_25 = ((/* implicit */unsigned long long int) (((_Bool)1) ? ((+(((/* implicit */int) arr_13 [i_0] [i_3] [i_6] [i_7])))) : (((/* implicit */int) arr_24 [i_0] [i_3] [i_6] [i_7]))));
                }
                var_26 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_0] [i_3] [i_3] [i_6]))));
                arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_17 [i_0] [i_3] [i_6] [i_0])) : (((/* implicit */int) var_8)))))));
            }
            arr_28 [i_3] = ((/* implicit */short) (+((+(4232195510U)))));
        }
    }
    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            arr_34 [i_8] [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) 16936482921418951203ULL)))));
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned char) var_5)), (arr_11 [i_8] [i_8] [i_9]))))) ? ((+(min((((/* implicit */long long int) var_13)), (arr_30 [i_9] [i_9]))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)127)))))))));
            arr_35 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_8] [i_9] [i_8] [i_9])) ? (((((((/* implicit */_Bool) var_13)) ? (12144040181627168811ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))))) % (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) arr_24 [i_8] [i_8] [i_8] [i_8])) == (((/* implicit */int) (short)4958))))))))));
        }
        var_28 = ((/* implicit */unsigned char) ((min((var_4), (((/* implicit */unsigned long long int) (+(0U)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(3097834268829208502ULL)))) && (((/* implicit */_Bool) max((arr_4 [i_8]), (((/* implicit */unsigned long long int) arr_7 [i_8] [i_8] [i_8] [i_8])))))))))));
    }
    var_29 = ((/* implicit */unsigned long long int) var_1);
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) != (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (1843799830882963525ULL)))))))));
    var_31 = ((/* implicit */long long int) var_0);
}
