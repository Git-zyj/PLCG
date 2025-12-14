/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16763
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
    var_13 = ((/* implicit */unsigned long long int) var_1);
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_10))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) <= (arr_4 [i_0] [i_1 + 3] [i_0])))), (arr_4 [i_0] [i_0] [i_0])));
            var_15 = ((((/* implicit */_Bool) ((min((2147483647), (((/* implicit */int) arr_3 [i_0])))) | ((((-2147483647 - 1)) & (((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (max((((/* implicit */long long int) arr_1 [i_1] [8ULL])), (((562949953388544LL) & (562949953388555LL))))) : (((/* implicit */long long int) (~(arr_0 [i_0])))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_9 [i_0] = ((/* implicit */int) arr_1 [(unsigned short)8] [(unsigned short)8]);
            var_16 = ((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (9007199254740928LL)))));
            var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((-9175121759392687951LL) - ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) arr_0 [i_2]))));
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (_Bool)0);
        }
        for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((562949953388558LL), (((/* implicit */long long int) var_2))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3])))))) ? (min((arr_4 [i_0] [i_3] [(_Bool)0]), (((/* implicit */int) arr_3 [8LL])))) : (((/* implicit */int) arr_6 [(_Bool)1]))));
            arr_13 [i_3] [i_0] [i_3] = ((/* implicit */long long int) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_11)) <= (var_5))))));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            arr_17 [i_0] = ((unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2)));
            var_19 = ((/* implicit */unsigned int) -1973548495391062862LL);
        }
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned short) ((min((arr_7 [i_0]), (var_10))) || (((/* implicit */_Bool) min((((/* implicit */int) ((signed char) arr_11 [i_0] [i_0]))), (var_4))))));
        arr_19 [i_0] [i_0] = ((/* implicit */_Bool) (-((-(min((arr_16 [i_0] [i_0]), (((/* implicit */long long int) var_2))))))));
        var_20 = (unsigned char)161;
        var_21 = 2097148LL;
    }
    for (long long int i_5 = 2; i_5 < 16; i_5 += 3) 
    {
        arr_22 [i_5] = ((/* implicit */int) ((-3768901353139985692LL) <= (arr_20 [i_5])));
        arr_23 [i_5] = (i_5 % 2 == 0) ? (((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_4), (((/* implicit */int) (_Bool)1))))) ? (arr_21 [i_5]) : (arr_21 [i_5]))) >> (((((var_3) | (arr_21 [i_5]))) + (1162043465459107382LL)))))) : (((/* implicit */signed char) ((((((((/* implicit */_Bool) min((var_4), (((/* implicit */int) (_Bool)1))))) ? (arr_21 [i_5]) : (arr_21 [i_5]))) + (9223372036854775807LL))) >> (((((((var_3) | (arr_21 [i_5]))) + (1162043465459107382LL))) + (576612348010166777LL))))));
    }
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (1923974674360753915LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((((/* implicit */signed char) var_10)), (var_6))))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) var_1)))))));
}
