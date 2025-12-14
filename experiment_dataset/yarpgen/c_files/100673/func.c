/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100673
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
    var_16 ^= ((/* implicit */unsigned int) ((var_13) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)111))) : (var_8)));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) min((((/* implicit */signed char) arr_0 [i_0])), ((signed char)7))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) 16U);
    }
    for (int i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        var_17 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 16U))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-1978)) ? (((/* implicit */int) arr_7 [i_1 - 1])) : (((/* implicit */int) (signed char)-4))))))) : (1071837494U)));
        var_18 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_6 [i_1])))) || (((/* implicit */_Bool) max((5367362242575657178LL), (((/* implicit */long long int) 390933147))))))))) + (min((((/* implicit */unsigned int) arr_6 [i_1 + 1])), (1071837501U)))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                {
                    arr_13 [3U] [3U] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 1])) / (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1]))))) == (max((((/* implicit */long long int) arr_9 [i_1 - 1] [i_1] [i_1 - 1])), (-6679874912634750773LL)))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((-6679874912634750773LL), (3810636558144254618LL))), (((/* implicit */long long int) max((arr_6 [i_1]), (arr_11 [i_1] [i_1] [i_1] [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-113))) < (-9158983761728186441LL))))) : (((((/* implicit */_Bool) -5367362242575657179LL)) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) -1721397935)) ? (-6679874912634750765LL) : (3810636558144254611LL))))))))));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) -390933147)) ? (1071837506U) : (((/* implicit */unsigned int) (-2147483647 - 1)))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_21 += ((/* implicit */long long int) 4294967295U);
            var_22 |= ((unsigned short) (-((-(((/* implicit */int) (unsigned short)24567))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
    {
        arr_23 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 5367362242575657178LL)) ? (((/* implicit */unsigned long long int) -404341840)) : (17289131225898161645ULL)));
        var_23 = ((((((/* implicit */_Bool) arr_10 [i_6])) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (short)28201)))) == (((390933147) / (((/* implicit */int) (unsigned short)36405)))));
    }
}
