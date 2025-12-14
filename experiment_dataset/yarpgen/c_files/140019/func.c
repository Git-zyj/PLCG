/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140019
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (9223372036854775807LL) : (((((/* implicit */_Bool) (unsigned short)19371)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-80))) : ((-9223372036854775807LL - 1LL)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)105))));
                        var_14 ^= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-104))));
                        arr_13 [(_Bool)1] &= arr_0 [i_0];
                    }
                    for (int i_4 = 3; i_4 < 24; i_4 += 4) 
                    {
                        var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) (unsigned short)19371)) : ((~(((/* implicit */int) (signed char)-115))))));
                        var_16 = ((/* implicit */unsigned int) var_7);
                        arr_17 [i_1] &= ((/* implicit */unsigned int) ((max((arr_6 [i_4]), (((/* implicit */long long int) arr_11 [i_4])))) | (((/* implicit */long long int) (~(((/* implicit */int) ((9223372036854775776LL) > ((-9223372036854775807LL - 1LL))))))))));
                    }
                    var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [23LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) : ((+(((4294967295U) << (((((/* implicit */int) (signed char)-80)) + (103)))))))));
                    arr_18 [i_1] = ((/* implicit */long long int) ((-1LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)109)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) arr_6 [(signed char)13]);
                arr_26 [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (-9223372036854775799LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))))), (((/* implicit */long long int) arr_20 [i_5]))));
                /* LoopSeq 2 */
                for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    arr_30 [i_5] [i_6] [i_5] = ((/* implicit */int) ((unsigned char) ((short) (signed char)-96)));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (signed char i_9 = 1; i_9 < 10; i_9 += 4) 
                        {
                            {
                                arr_36 [i_5] [i_5] [(signed char)7] [i_5] [(signed char)4] [(signed char)7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)58))))) ? (((((/* implicit */_Bool) (unsigned short)46165)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5] [i_6] [i_7] [14LL]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))) ? (max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)19376))))), (((((/* implicit */_Bool) (signed char)126)) ? (-4610920337140754128LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_9]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)6083))) == (arr_21 [i_9]))))));
                                arr_37 [i_5] [i_6] [(signed char)3] [i_5] = ((/* implicit */long long int) (signed char)-115);
                                var_19 = (((~(((/* implicit */int) (short)12332)))) & (((/* implicit */int) ((((/* implicit */int) ((signed char) (signed char)-114))) < ((+(arr_19 [i_5])))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_10 = 3; i_10 < 10; i_10 += 1) 
                {
                    var_20 *= ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)2)))) & (arr_10 [i_10 - 1] [i_10] [i_10] [i_10 - 1])));
                    var_21 &= ((/* implicit */short) (~(((/* implicit */int) arr_15 [20LL] [20LL] [i_10 - 3] [i_10]))));
                    arr_40 [i_5] [i_6] = ((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88))));
                    var_22 -= ((/* implicit */_Bool) (signed char)60);
                }
            }
        } 
    } 
    var_23 &= ((/* implicit */unsigned char) (~(var_4)));
    var_24 &= ((/* implicit */long long int) var_11);
}
