/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104353
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) max((var_13), (var_3)));
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 24; i_2 += 1) /* same iter space */
                {
                    var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((12565664760377495971ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_2)))))))) ? ((((_Bool)1) ? (-7569428654075965754LL) : (((/* implicit */long long int) 4238654140U)))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 1) /* same iter space */
                    {
                        var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7569428654075965744LL)) ? (min(((~(var_6))), (((/* implicit */int) (signed char)-127)))) : (var_6)));
                        var_16 += ((/* implicit */_Bool) (~(((unsigned long long int) (_Bool)1))));
                    }
                    for (int i_4 = 1; i_4 < 22; i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [(signed char)12] [(unsigned short)16] [i_4] = ((/* implicit */int) max((((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-31474))))))), (((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) ((unsigned long long int) -47457288)))))));
                        arr_15 [i_4 + 2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((7569428654075965754LL), (((/* implicit */long long int) (_Bool)1))))) | (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_3)), (var_4)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))) * (var_9)))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 22; i_5 += 1) /* same iter space */
                    {
                        var_17 ^= ((/* implicit */short) (signed char)127);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            arr_20 [i_5] [i_5] [(unsigned short)6] [(signed char)17] [i_6] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-69))))));
                            arr_21 [i_0] [i_1] [(_Bool)1] [i_5] [(short)2] = ((/* implicit */unsigned long long int) ((long long int) (signed char)-86));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_1] [i_5] = ((/* implicit */unsigned char) var_11);
                            arr_26 [i_5] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_11))))));
                            arr_27 [i_5] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_28 [i_5] [23] [13ULL] [i_1] [i_5] = ((/* implicit */signed char) var_7);
                        }
                        arr_29 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned long long int) var_3);
                    }
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((var_5), (((/* implicit */signed char) (_Bool)0))))) ? ((+(var_6))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))), (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_3)))))))));
                }
                for (int i_8 = 2; i_8 < 24; i_8 += 1) /* same iter space */
                {
                    arr_33 [13U] [13U] [i_8] = ((/* implicit */signed char) (((+(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-127)), ((unsigned char)215)))))) << (((((/* implicit */int) (signed char)-47)) + (49)))));
                    arr_34 [i_8] [9] [(short)19] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)48)), ((unsigned short)36662)))) >= (((/* implicit */int) var_2))));
                }
            }
        } 
    } 
    var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))), ((~(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_12)))), ((~(((/* implicit */int) var_3))))))) : (min((((/* implicit */unsigned long long int) var_7)), (max((var_9), (((/* implicit */unsigned long long int) var_3))))))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(max((var_0), (((/* implicit */unsigned int) (signed char)123))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) min(((signed char)-2), (((/* implicit */signed char) (_Bool)1))))) ? (((16U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-7899))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28713)) ? (((/* implicit */int) var_4)) : (var_6))))))));
}
