/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152080
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((var_7) >= (((/* implicit */unsigned long long int) 4294967284U)))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_0 [i_0 + 1] [i_0]))))) : (((((/* implicit */_Bool) 13042681524077321846ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_12 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? ((~(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-6716476541323778076LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1])))))))))) * (((((/* implicit */unsigned int) ((/* implicit */int) ((13042681524077321837ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))))))) / (((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [0LL]))) : (var_5))))))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 1] [i_1]))) : (var_7))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1]))) + (var_7)))))) > (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)4966)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1]))))) < (((/* implicit */unsigned long long int) (~(615013082U)))))))));
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(1975929315807873860LL)))) == (5404062549632229770ULL))))) ^ (((((/* implicit */_Bool) (short)18596)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (13042681524077321845ULL)))));
            var_15 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) -1485030335250476493LL)) : (var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_4 [i_1])) > (0))) || (((arr_8 [i_1] [i_1]) && (((/* implicit */_Bool) -4437170671304482297LL)))))))) : (((((/* implicit */_Bool) ((2639572994U) >> (((((/* implicit */int) arr_5 [i_1] [i_2])) - (6868)))))) ? (((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1])) ? (arr_7 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_1 [i_1])))))))));
        }
        var_16 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (var_0))))) <= (((((/* implicit */_Bool) var_2)) ? (arr_7 [7ULL] [7ULL]) : (((/* implicit */unsigned long long int) 1975929315807873877LL)))))))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned int) -505602580))))) ? (((((/* implicit */_Bool) 11401170162997915053ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1))))))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (unsigned short)55056)) : (((/* implicit */int) (short)32767))))))) : (((((/* implicit */_Bool) ((arr_7 [2U] [i_1]) | (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) : (((-1975929315807873860LL) & (((/* implicit */long long int) ((/* implicit */int) var_6))))))))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 4) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) -505602564)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (_Bool)1)))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1975929315807873860LL)))) ? ((~(-505602580))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_3])) < (((/* implicit */int) (unsigned short)17385)))))));
    }
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4221146019032215749LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55324))) : (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)255)) : (707432034)))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) - (0LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4221146019032215720LL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? ((~(var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (4221146019032215779LL)))))) : (((/* implicit */unsigned long long int) ((((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_10)) : (var_2))) : (((((/* implicit */_Bool) var_3)) ? (-4221146019032215750LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)22704)) && (((/* implicit */_Bool) (unsigned short)10227)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) -4221146019032215720LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_9)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (var_10)))) ? (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)205)))))))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) -707432035)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205))))))))));
}
