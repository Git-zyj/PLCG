/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143811
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) ((signed char) min((-1498973347), (1203146742))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (!((_Bool)1)));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) max((max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (13920432752504401512ULL))))), (((/* implicit */unsigned long long int) arr_3 [i_0])))))));
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((((/* implicit */unsigned long long int) max((arr_3 [i_0]), ((short)-25937)))), (((max((var_1), (((/* implicit */unsigned long long int) 1564945341)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (arr_1 [i_0]))))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_11)) ? (arr_5 [2]) : (arr_5 [(_Bool)0]))) : (-1664379557)))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)64))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) -1564945341))))))))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_19 = ((/* implicit */int) (((+(((/* implicit */int) (unsigned char)6)))) >= (arr_5 [i_1])));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_1])), (((((/* implicit */_Bool) (unsigned short)32238)) ? (((/* implicit */unsigned long long int) -7839884500026777969LL)) : (11150731028019756832ULL)))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        }
        var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((((/* implicit */int) var_9)) / (((/* implicit */int) var_10)))) * (max((1564945341), (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_2))))) : (min((((/* implicit */long long int) var_3)), (2270490683860891844LL)))))));
        var_22 = ((/* implicit */_Bool) var_12);
        var_23 = ((/* implicit */unsigned int) max((min((((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_1]))))))), (((/* implicit */unsigned long long int) -1564945341))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    {
                        var_24 = ((/* implicit */signed char) var_11);
                        var_25 -= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [i_4] [i_6])) || ((_Bool)0))))));
                    }
                } 
            } 
        } 
        arr_18 [i_3] = ((/* implicit */unsigned long long int) (unsigned char)64);
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        var_26 = ((/* implicit */short) (+(2147483392ULL)));
        arr_23 [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)152)) >> (((/* implicit */int) (unsigned char)0)))))));
        var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) arr_22 [i_7])) : ((-(((/* implicit */int) var_4))))));
        arr_24 [i_7] = ((/* implicit */unsigned long long int) var_9);
        arr_25 [i_7] = ((/* implicit */unsigned short) ((signed char) (unsigned char)64));
    }
    var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) ((signed char) (signed char)0))) >= (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_8))))))) : (((/* implicit */int) var_4))));
    var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_3)) ^ (((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) var_12)), (11392209758865024ULL))) : (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) var_8)))))))));
}
