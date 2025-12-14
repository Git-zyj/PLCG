/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100336
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
    var_20 = ((/* implicit */int) (signed char)64);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned short) -1);
        var_21 = (unsigned char)183;
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            var_22 = arr_1 [9U];
            arr_5 [10U] [i_1] = ((/* implicit */unsigned long long int) var_3);
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) -714879620))));
            var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((265642408U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0])))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11)))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_15)))))) - (8077546346566637810ULL)))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        arr_8 [13] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) min((265642408U), (((/* implicit */unsigned int) arr_6 [i_2] [i_2]))))) : ((-(var_6)))))));
        arr_9 [3ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -1213568208)) ? (arr_7 [(signed char)0] [i_2]) : (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) (signed char)78))))) ? (((((/* implicit */_Bool) arr_7 [17U] [i_2])) ? (10171486239672949629ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned short)2] [i_2]))) == (var_18)))) : (((/* implicit */int) arr_6 [i_2] [i_2])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) var_5);
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_3]))) : (arr_7 [i_3] [i_3]))))));
        var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [16])) && (((/* implicit */_Bool) var_3))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            var_28 = ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (arr_12 [i_3]));
            var_29 = (+(-1221101883));
        }
    }
    var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)19))))) ? (max((((/* implicit */long long int) (signed char)-37)), (var_2))) : (((/* implicit */long long int) ((int) var_6)))))) * (var_1)));
}
