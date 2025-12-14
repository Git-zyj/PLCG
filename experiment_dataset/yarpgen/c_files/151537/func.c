/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151537
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) 70214999U);
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] &= ((/* implicit */unsigned char) max((((((4224752317U) <= (((/* implicit */unsigned int) -1932550957)))) ? (arr_5 [i_1] [i_1]) : (((((/* implicit */_Bool) (short)21558)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))))), (((/* implicit */long long int) ((signed char) var_13)))));
        arr_7 [3U] |= ((/* implicit */signed char) ((((/* implicit */int) max((arr_4 [i_1] [i_1]), (((/* implicit */short) var_6))))) << (((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (917504LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))))) - (917504LL)))));
        arr_8 [i_1] [i_1] = ((signed char) ((((/* implicit */_Bool) 70214994U)) ? (((/* implicit */int) ((4224752281U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (short)-1))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (short)-10826)) <= (((/* implicit */int) var_9))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))));
        var_19 = ((/* implicit */_Bool) (((-(((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_3 [i_1] [i_1])))))) & (((/* implicit */int) ((arr_5 [i_1] [i_1]) <= (arr_5 [i_1] [i_1]))))));
    }
    for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        arr_11 [i_2] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_1)) + (((/* implicit */int) var_0))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -9223372036854775791LL)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) != ((+(arr_10 [i_2] [(signed char)5])))))) : (((/* implicit */int) (unsigned char)240)))))));
        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [(unsigned char)18] [i_2])))) == (((((/* implicit */int) var_3)) & (((/* implicit */int) arr_3 [i_2] [i_2]))))));
        var_22 ^= ((/* implicit */signed char) arr_5 [i_2] [i_2]);
    }
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 23; i_3 += 4) 
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)16)) != (((/* implicit */int) (_Bool)1))));
        var_24 -= (+(arr_13 [i_3]));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (short)-5608))));
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) ^ (2305842940494217216ULL))) << ((((~(((/* implicit */int) (unsigned char)255)))) + (260))))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_4 = 4; i_4 < 9; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 1; i_6 < 9; i_6 += 4) 
            {
                {
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_9 [i_6 + 1]) + (((/* implicit */unsigned long long int) 70214989U))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_9 [i_6 + 1]))) : (((0ULL) + (arr_9 [i_6 + 1]))))))));
                    var_28 = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 1; i_7 < 13; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 2) 
        {
            {
                var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_9 [i_8])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_7] [6ULL]))))))));
                var_30 = (i_7 % 2 == 0) ? (((/* implicit */unsigned char) min((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_7] [i_8 + 2]))) == (5U)))) << (((arr_23 [i_7]) - (2938441002U))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7 - 1] [i_7]))) == (min((var_11), (((/* implicit */unsigned long long int) arr_1 [i_7])))))))))) : (((/* implicit */unsigned char) min((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_7] [i_8 + 2]))) == (5U)))) << (((((arr_23 [i_7]) - (2938441002U))) - (2524398904U))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7 - 1] [i_7]))) == (min((var_11), (((/* implicit */unsigned long long int) arr_1 [i_7]))))))))));
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_7])), (var_7)))))))) : (((((/* implicit */_Bool) arr_10 [i_7 - 1] [i_8 + 2])) ? (arr_10 [i_8] [i_8 + 1]) : (arr_10 [i_7] [i_7 + 2])))));
                arr_25 [6U] [6U] |= ((/* implicit */signed char) arr_22 [i_7] [12LL]);
            }
        } 
    } 
}
