/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161324
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
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_1] [(short)3] = ((/* implicit */unsigned short) 7);
            arr_5 [i_1] [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */int) (unsigned short)18803)) <= (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1] [i_1]))))) | (((/* implicit */int) (unsigned char)201)));
        }
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_2))));
        var_19 &= ((/* implicit */unsigned char) 975441024U);
        arr_6 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_11 [i_0] = ((/* implicit */long long int) -965626777);
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_0 + 1])) * ((+(((/* implicit */int) arr_7 [i_0 - 2])))))))));
            arr_12 [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((arr_8 [i_0 - 1] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))))) ? (((((/* implicit */_Bool) min((((/* implicit */signed char) arr_7 [i_0 - 2])), (arr_10 [i_2] [4])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (-9108936351587894752LL))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_15)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (3319526272U))))))));
        }
    }
    for (signed char i_3 = 3; i_3 < 17; i_3 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) min((((int) max((var_1), ((unsigned short)2046)))), (((/* implicit */int) var_10))));
        arr_15 [i_3] = ((/* implicit */unsigned short) 18446744073709551615ULL);
        arr_16 [i_3] [i_3] = ((/* implicit */signed char) ((var_10) || (((((/* implicit */_Bool) (signed char)83)) && (((/* implicit */_Bool) arr_10 [i_3] [i_3 + 1]))))));
        arr_17 [i_3] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) - (min((((/* implicit */long long int) (!(arr_7 [(signed char)5])))), (9223372036854775807LL)))));
    }
    for (signed char i_4 = 3; i_4 < 17; i_4 += 1) /* same iter space */
    {
        arr_22 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_4])) * (((((/* implicit */_Bool) (unsigned short)18828)) ? (max((((/* implicit */int) arr_2 [(short)8] [i_4 - 1] [(unsigned short)8])), (var_13))) : (((/* implicit */int) max((((/* implicit */short) var_11)), (var_14))))))));
        var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-5836)) ? (((((/* implicit */_Bool) arr_0 [i_4 - 3])) ? (975441035U) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_4] [i_4] [i_4]), (((/* implicit */unsigned short) arr_9 [(unsigned char)5] [(unsigned short)10])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
        var_23 = ((/* implicit */unsigned int) ((unsigned short) ((short) min(((unsigned char)0), ((unsigned char)255)))));
        var_24 ^= max((((((((/* implicit */int) arr_14 [i_4 + 1])) + (2147483647))) >> (((var_7) - (876202606))))), (max((((9) & (((/* implicit */int) (unsigned char)6)))), (((((/* implicit */_Bool) arr_10 [i_4] [(signed char)17])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))));
    }
    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        var_25 &= ((/* implicit */unsigned short) ((min((arr_23 [i_5]), (arr_23 [i_5]))) ^ (-8)));
        arr_26 [i_5] |= ((/* implicit */_Bool) var_11);
        var_26 += ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) arr_23 [i_5])) & (var_6))));
        var_27 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_15), (((/* implicit */short) (signed char)64))))), (max((arr_13 [i_5]), (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 1126251207248751052LL)) && (((/* implicit */_Bool) arr_23 [(unsigned short)11])))) || (((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) var_9)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_0 [(unsigned short)2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)228)))))) ? (((/* implicit */int) (unsigned char)12)) : (arr_13 [i_5])))));
        arr_27 [(short)5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((unsigned int) arr_18 [i_5])))) / (((/* implicit */int) max((((/* implicit */unsigned short) ((short) arr_0 [i_5]))), (((unsigned short) var_12)))))));
    }
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)28)) >= (((/* implicit */int) (short)-14927))))) >> ((((+(((/* implicit */int) var_15)))) - (3386)))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_0)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    var_29 = ((/* implicit */unsigned long long int) (short)-3283);
    var_30 &= ((/* implicit */short) min((min((max((var_9), (((/* implicit */unsigned short) (_Bool)1)))), (var_1))), (((/* implicit */unsigned short) ((_Bool) var_3)))));
}
