/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109975
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned char) (signed char)-91))));
        var_18 = (((~((~(var_3))))) >> (((((/* implicit */int) (signed char)-113)) + (124))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_1]))));
        arr_8 [i_1] = arr_3 [i_1];
        arr_9 [i_1] [(signed char)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_5 [(signed char)11] [i_1])));
    }
    for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */int) (((-(arr_4 [i_2 - 1]))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned char) ((((arr_6 [(signed char)20] [i_2]) && (((/* implicit */_Bool) var_0)))) ? (arr_5 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) var_6)))))))))));
        arr_13 [(signed char)0] [i_2 - 1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */int) arr_3 [i_2 - 1])) : (((/* implicit */int) arr_3 [i_2 - 1])))), ((~(((/* implicit */int) var_16))))));
    }
    /* LoopSeq 4 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((unsigned int) max(((+(((/* implicit */int) arr_16 [i_3])))), (((/* implicit */int) (signed char)-4)))));
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            for (signed char i_5 = 2; i_5 < 20; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    {
                        arr_26 [(_Bool)0] [i_6] [i_3] [i_5 - 2] = ((/* implicit */unsigned char) ((_Bool) -1484572378));
                        var_21 ^= ((/* implicit */unsigned int) min((arr_20 [(signed char)15] [i_3]), (min((((/* implicit */unsigned char) (_Bool)0)), (var_7)))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */int) max((arr_3 [i_7]), (arr_3 [i_7])))) : (((/* implicit */int) arr_3 [i_7]))));
        var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)128))));
    }
    for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 1) 
    {
        var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8 + 1] [16ULL]))) : (arr_27 [i_8])))) && (((/* implicit */_Bool) arr_30 [i_8]))));
        arr_33 [14ULL] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) arr_22 [13U])) : (((/* implicit */int) (signed char)-118))))), ((~(arr_4 [i_8 + 1])))))));
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)25), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-89)))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_12)))))) : (((((/* implicit */_Bool) ((18446744073709551615ULL) >> (((/* implicit */int) (_Bool)1))))) ? ((~(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
    }
    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        var_26 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255))))), (((((/* implicit */_Bool) 9197952577831172965ULL)) ? (arr_5 [(unsigned char)9] [i_9]) : (arr_5 [i_9] [i_9]))))), (((/* implicit */unsigned long long int) (signed char)21))));
        arr_37 [i_9] = arr_36 [i_9];
    }
}
