/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180184
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
    var_16 = var_6;
    var_17 = ((/* implicit */unsigned int) min(((-(1662427918547437091ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_18 -= ((/* implicit */unsigned short) ((16784316155162114525ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55070)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0] [i_0 - 1]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (+((~(var_3)))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) != (var_7)));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    for (unsigned short i_4 = 1; i_4 < 22; i_4 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 2) 
                            {
                                arr_18 [i_5] [i_4] [i_3] [i_5] [i_5] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_16 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_5] [i_4] [i_4 + 1])) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (1662427918547437077ULL))) - (3867024967828104841ULL))))));
                                arr_19 [i_1] [i_1] [i_1] [(unsigned short)17] [i_1] [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) arr_15 [i_1] [i_1] [i_3] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_2] [i_5] [i_4] [i_5 - 1])))))) : (((((((/* implicit */int) var_9)) > (((/* implicit */int) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (var_8))))) : (((((/* implicit */_Bool) var_9)) ? (var_12) : (16784316155162114524ULL)))))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                            {
                                var_19 *= ((/* implicit */unsigned int) (unsigned short)11973);
                                arr_22 [i_1] [i_1] [i_6] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) 16784316155162114526ULL);
                                var_20 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32765))) : (var_2)))) ? (((/* implicit */int) ((unsigned short) var_11))) : ((~(((/* implicit */int) var_14))))))));
                                arr_23 [i_6] [i_6] [i_6] [i_6] [i_6] [i_1] = ((/* implicit */unsigned long long int) var_1);
                                var_21 *= ((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned short)64268))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                            {
                                arr_27 [i_1] [i_1] [i_1] [i_7] = ((/* implicit */unsigned char) (unsigned short)16391);
                                var_22 &= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66))) + (arr_10 [i_4 - 1] [(unsigned short)12]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_2] [(signed char)20] [i_4 - 1])))));
                            }
                            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                            {
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)178)) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11977)))))))), (min((((((/* implicit */_Bool) arr_26 [i_4])) ? (arr_24 [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)82))))), (((/* implicit */unsigned long long int) min((var_4), (arr_25 [i_4] [i_4] [i_4] [i_4 + 1])))))))))));
                                var_24 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))))) : (1662427918547437080ULL)))));
                            }
                            var_25 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) 1662427918547437090ULL))));
                        }
                    } 
                } 
                var_26 = ((var_12) << (((((/* implicit */int) (short)4096)) - (4078))));
            }
        } 
    } 
}
