/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158986
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) (unsigned char)24);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned long long int) var_6);
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((short) ((((((/* implicit */_Bool) arr_5 [3LL] [3LL] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))) : (arr_4 [i_1 + 1] [i_1 + 1] [i_0]))) + (((/* implicit */unsigned long long int) arr_1 [i_1 + 1] [i_1 + 2])))));
        }
        var_16 = ((/* implicit */unsigned int) min((var_16), (((unsigned int) (unsigned char)1))));
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32764))))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_2] [i_2] [i_2])), ((unsigned char)34))))));
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
        {
            arr_15 [i_2] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3])) || (((/* implicit */_Bool) (unsigned char)228))))))), (((int) max((arr_13 [i_2] [i_2]), (((/* implicit */long long int) var_3)))))));
            arr_16 [i_2] [i_2] = ((/* implicit */unsigned long long int) min((arr_13 [i_2] [i_3]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57308)) ? (((/* implicit */long long int) arr_0 [i_2])) : (var_9)))) ? (arr_9 [5U]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 2782753479U)))))))));
        }
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
        {
            arr_21 [i_2] [6LL] [i_2] = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */short) arr_3 [i_4])), ((short)252))));
            var_17 = ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)33))) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (unsigned short)63693)));
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2147483647LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_5])))) + (((/* implicit */int) (unsigned short)8226))));
            /* LoopSeq 2 */
            for (long long int i_6 = 3; i_6 < 6; i_6 += 4) 
            {
                arr_27 [i_5] [i_5] [i_2] = ((((-2147483653LL) + (9223372036854775807LL))) >> (((7310326217940142307LL) - (7310326217940142251LL))));
                var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_6 + 4]))));
                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (arr_18 [i_2] [i_5] [i_2]))))));
                var_21 = ((/* implicit */unsigned short) 1502249523577000382ULL);
                var_22 = ((/* implicit */short) arr_6 [i_6 + 1] [i_6 - 2] [i_6 + 4]);
            }
            for (int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                var_23 ^= ((/* implicit */unsigned short) (unsigned char)76);
                var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [8LL] [8LL] [i_7])) ? (((/* implicit */int) arr_5 [i_7] [i_5] [i_7])) : (((/* implicit */int) arr_5 [i_5] [(unsigned char)12] [i_7]))));
            }
        }
        arr_30 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))) : (6915848918799827004LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_2])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199)))))) : (131170398750412254LL))))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)63), (((/* implicit */unsigned short) ((_Bool) 3303124282738944980ULL))))))) <= (((((/* implicit */_Bool) max((1728187U), (((/* implicit */unsigned int) (signed char)102))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2] [i_2]))) : (arr_29 [i_2] [i_2] [i_2] [i_2])))));
    }
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-680)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) ? (min((5060671697112599754LL), (((/* implicit */long long int) (short)-25087)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) (unsigned short)55763)) : (((/* implicit */int) var_11)))))))) ? (((var_11) ? (((/* implicit */unsigned long long int) var_9)) : (min((((/* implicit */unsigned long long int) (unsigned short)55762)), (var_0))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1932037484879788247LL)) ? (((/* implicit */int) var_10)) : (-866075092)))) + ((~(var_13)))))));
}
