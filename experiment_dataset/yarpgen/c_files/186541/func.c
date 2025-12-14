/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186541
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
    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        var_17 *= (((+(((unsigned int) arr_1 [i_0])))) % (((/* implicit */unsigned int) max(((-2147483647 - 1)), (arr_0 [i_0 + 1])))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((unsigned char) (+(arr_0 [i_0 - 2]))));
    }
    for (signed char i_1 = 2; i_1 < 13; i_1 += 3) 
    {
        var_18 -= min((((unsigned int) 3390053794U)), (((/* implicit */unsigned int) 2147483647)));
        var_19 = ((/* implicit */unsigned char) ((unsigned int) var_5));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_15))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 14; i_5 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_2 - 1] [i_3] [(short)14] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(2147483647)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 + 3] [(unsigned char)10])) ? ((-2147483647 - 1)) : (var_9))))))) : (((/* implicit */int) (unsigned short)26998))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (-(max((((((/* implicit */_Bool) arr_11 [i_1] [(signed char)9] [(unsigned char)14])) ? (((/* implicit */int) arr_4 [i_5])) : (((/* implicit */int) arr_9 [i_3] [i_2])))), (2147483647))))))));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (+(18446744073709551615ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1]))))) : (((/* implicit */int) ((unsigned short) (unsigned char)61)))));
                    var_23 += ((/* implicit */unsigned char) 7U);
                }
            } 
        } 
        var_24 -= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)35267)))));
    }
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        var_25 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_6])) : (((/* implicit */int) arr_7 [i_6]))))), ((+(max((((/* implicit */unsigned long long int) arr_0 [(signed char)8])), (var_14)))))));
        var_26 = ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */int) var_11)) >= (((/* implicit */int) (unsigned char)254)))) ? (((/* implicit */int) arr_12 [i_6] [(signed char)14] [i_6] [i_6] [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65532))))))));
    }
}
