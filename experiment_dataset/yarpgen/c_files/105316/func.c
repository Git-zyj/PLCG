/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105316
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2518036880U)) ? ((~(((/* implicit */int) (short)-24069)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)103)))))))) ? (3392005896839880717LL) : (((/* implicit */long long int) (-(min((arr_0 [i_0]), (((/* implicit */unsigned int) -825836745)))))))));
        arr_3 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 2518036880U)) && (((/* implicit */_Bool) (signed char)-126)))) ? ((((!(((/* implicit */_Bool) 1184529255625678632LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)255)))) : (max((2477114225198845518LL), (2199813383244448813LL))))) : (((/* implicit */long long int) arr_0 [i_0]))));
        var_20 = ((/* implicit */_Bool) min((var_20), ((((~(((unsigned long long int) var_9)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)128)) * ((+(((/* implicit */int) (_Bool)1))))));
        var_22 = ((/* implicit */long long int) ((unsigned int) 2700350484U));
        var_23 &= ((8172274524034951254ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106))) & (4072500386U)))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        arr_9 [i_2] [(signed char)5] &= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)125))));
        arr_10 [i_2] = ((/* implicit */int) ((min((var_12), (((/* implicit */unsigned int) var_10)))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) arr_2 [i_2 + 3])))))))))));
    }
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)0)))) >> (((1476198912U) - (1476198884U)))));
    var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)156))));
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)122)) ^ (2147483643))))));
    /* LoopNest 2 */
    for (signed char i_3 = 3; i_3 < 9; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            {
                var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -931169117))) ? (var_12) : (((((/* implicit */_Bool) var_10)) ? (arr_7 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))))))))));
                arr_18 [i_3] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)54389)) ? (18446744073709551615ULL) : (9156376074125707285ULL))));
                var_28 &= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3]))))) >> (((((/* implicit */int) min((var_13), (arr_1 [i_4])))) - (15062)))));
            }
        } 
    } 
}
