/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182833
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
    var_12 = ((/* implicit */int) (((((~(min((var_2), (((/* implicit */long long int) 379057921U)))))) + (9223372036854775807LL))) >> (((var_9) + (531953627)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_13 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(signed char)8])) ? (arr_0 [(signed char)10]) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (~(arr_0 [10ULL]))))));
        var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)91)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (67700870) : (arr_0 [10LL])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4678791024061021875LL)) ? (arr_3 [12U]) : (((/* implicit */unsigned int) arr_2 [i_0 - 1]))))) : (((long long int) arr_3 [4LL])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4135269257287793222LL)) || (((/* implicit */_Bool) arr_2 [i_0 + 1]))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 3; i_2 < 11; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_11)) >> (((((((/* implicit */_Bool) 7399656799694985248ULL)) ? (1088022128161788880LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))))) - (1088022128161788864LL)))))) > (((((/* implicit */_Bool) ((signed char) (unsigned char)53))) ? (arr_12 [10] [10] [i_3] [10] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179)))))));
                        var_16 = ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) -1947100361))))), (((signed char) 682543940U))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_8 [i_3]))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [10ULL] [i_1] [12LL] [7] [i_1])) ? (((/* implicit */unsigned int) -2096311672)) : (arr_5 [i_1])))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3])) || (((/* implicit */_Bool) var_5))))), (arr_10 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_4 + 1])))));
                    }
                } 
            } 
        } 
        arr_13 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [10U])) ? (((/* implicit */unsigned long long int) 626198173)) : (12530587377467197204ULL)))) ? (((((/* implicit */_Bool) 5748919056205020755ULL)) ? (arr_10 [i_1] [i_1 + 1] [(unsigned char)3] [i_1]) : (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [(short)8])) != (7399656799694985260ULL))))))))));
        var_17 = ((/* implicit */_Bool) max((min((arr_4 [i_1]), (((/* implicit */unsigned long long int) arr_12 [0LL] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1])))), (((/* implicit */unsigned long long int) min((1382419470U), (max((4083150169U), (((/* implicit */unsigned int) var_5)))))))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (var_2))))) : (((arr_5 [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5 + 2] [i_5])))))))) ? (((((11047087274014566368ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214))))) ? (((/* implicit */long long int) arr_3 [4ULL])) : (((((/* implicit */_Bool) arr_15 [i_5])) ? (var_8) : (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5] [i_5] [2LL] [i_5]))))))));
        arr_17 [i_5] = ((/* implicit */unsigned char) arr_3 [i_5]);
        arr_18 [i_5] [i_5] = ((/* implicit */int) (!(((((/* implicit */_Bool) min(((short)4612), (((/* implicit */short) arr_11 [i_5] [i_5]))))) && (((/* implicit */_Bool) var_7))))));
    }
    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_8)))) ? (((/* implicit */long long int) (+(-2096311672)))) : (min((((/* implicit */long long int) var_4)), (var_2))))) - (((/* implicit */long long int) ((int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (short i_6 = 1; i_6 < 13; i_6 += 3) 
    {
        for (int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            {
                arr_26 [i_6] [i_7] [5LL] = ((((/* implicit */int) ((((/* implicit */_Bool) -2096311649)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6] [i_6])) ? (arr_24 [11LL] [i_6]) : (arr_23 [i_6] [i_7] [i_6]))))))) & (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_22 [i_6])))))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_19 [11]))));
            }
        } 
    } 
}
