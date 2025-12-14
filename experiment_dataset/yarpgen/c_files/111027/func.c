/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111027
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (15805285021201106444ULL)))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)248))));
        var_13 = ((/* implicit */short) var_11);
        var_14 = ((/* implicit */short) ((long long int) (short)-22040));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)22050))))) ? (((/* implicit */int) arr_2 [i_1])) : ((-(((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (815764835)))))));
        var_16 += ((/* implicit */int) ((unsigned char) max(((((_Bool)1) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) 815764835)))), (((/* implicit */unsigned long long int) ((815764835) << (((((/* implicit */int) (unsigned char)216)) - (215)))))))));
        var_17 = ((/* implicit */short) (~(((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))));
    }
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_10))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_1 [(short)7] [i_3 - 1]))) ? (((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) arr_5 [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 2])))) : ((-2147483647 - 1))));
                var_20 = ((/* implicit */unsigned char) -595580303);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_4 = 1; i_4 < 8; i_4 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) var_6);
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) (+(arr_13 [i_4 - 1]))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_4] [i_4 - 1]))))) ? (((unsigned int) max((var_10), (var_10)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? ((((_Bool)1) ? (var_5) : (((/* implicit */int) arr_2 [i_4 + 1])))) : (max((595580302), (((/* implicit */int) (short)-4805)))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_18 [i_5] = ((unsigned long long int) min((var_4), (((/* implicit */long long int) (-2147483647 - 1)))));
        arr_19 [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)106))))) ? (3853732749183950519LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)-22040)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 2) 
    {
        arr_22 [i_6 - 1] = ((/* implicit */_Bool) (+(arr_21 [i_6 - 1] [i_6 + 1])));
        var_23 &= ((/* implicit */short) ((18446744073709551615ULL) > ((~(var_2)))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            for (unsigned int i_8 = 1; i_8 < 18; i_8 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 3; i_9 < 19; i_9 += 1) 
                    {
                        arr_30 [i_6] [i_6 - 1] [i_6 - 1] [i_7] [i_6 - 1] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_8] [i_9 - 3])) ? (((/* implicit */int) ((((/* implicit */int) arr_27 [i_6] [i_6] [i_9])) > (((/* implicit */int) var_7))))) : (((/* implicit */int) ((short) (unsigned short)780)))));
                        var_24 = ((/* implicit */unsigned int) ((signed char) arr_21 [i_6 + 1] [i_8 + 2]));
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 1; i_10 < 19; i_10 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_6] [i_6 + 2] [(signed char)7] [i_6] [i_6])) ? (((/* implicit */int) arr_34 [i_10 + 1] [i_10] [i_10] [i_10] [i_10] [i_9])) : (((((/* implicit */_Bool) (short)22050)) ? (((/* implicit */int) arr_26 [i_6] [i_6] [i_6 + 2] [i_6])) : (((/* implicit */int) arr_27 [i_6] [i_8] [i_6]))))));
                            var_26 += ((/* implicit */long long int) (+(((/* implicit */int) arr_34 [i_9] [i_7] [i_8 + 2] [i_6 - 1] [i_10] [i_7]))));
                        }
                        var_27 += (+(((/* implicit */int) ((unsigned char) (_Bool)1))));
                    }
                    arr_35 [i_6 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_7])) ? (((/* implicit */int) arr_34 [i_6] [i_8 + 2] [18ULL] [i_8 + 2] [i_8] [i_7])) : (((/* implicit */int) arr_34 [i_7] [i_8 - 1] [(signed char)6] [i_8] [i_8] [i_7]))));
                    arr_36 [i_6 + 2] [i_7] [i_7] = ((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_28 [i_7])))));
                }
            } 
        } 
        arr_37 [7U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_6] [i_6 + 2] [7ULL] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_6])))))) : (2432454234372742139ULL)));
        var_28 += ((/* implicit */unsigned int) arr_23 [1ULL] [i_6 + 1]);
    }
}
