/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106647
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
    var_20 = (!((!(((/* implicit */_Bool) var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_21 += ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_2 [i_1 + 2] [10LL])))), (((/* implicit */int) arr_2 [i_1 + 1] [i_1]))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2 - 2] [i_3 - 2] [i_1 + 2])) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2 - 1] [i_3 + 1] [i_1 + 2]))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3682214054U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35089))) : (14772740954458320798ULL)));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned char) (+((~(((((/* implicit */_Bool) (unsigned char)53)) ? (-4114662562805787819LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))))));
                        arr_11 [10U] [i_1] [i_2 + 1] [i_4 - 2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_1] [i_1]))))) <= ((+(((/* implicit */int) (short)31948))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5 - 2] [i_1 + 1]))) : (4191041229U)));
                        var_26 = ((/* implicit */unsigned short) ((5889248403704313970ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5 - 2] [i_5 - 2] [i_2 + 1] [i_1 + 1] [i_1])))));
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 23; i_6 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned long long int) (signed char)-126);
                        var_28 = ((/* implicit */unsigned short) ((short) ((((260487214) == (((/* implicit */int) (short)-27584)))) ? ((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_6 + 1])))) : (((/* implicit */int) (short)10719)))));
                        var_29 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2 + 1] [i_6 + 1])) << (((((arr_9 [i_0] [i_1]) ? (8939480261846049980ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43027))))) - (8939480261846049960ULL))))))));
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) min(((+(((((/* implicit */int) arr_2 [i_0] [i_0])) << (((3659846587U) - (3659846563U))))))), ((-(((/* implicit */int) (short)-2572)))))))));
                        arr_16 [i_0] [i_0] [i_0] [i_2 - 2] [i_2] [i_6] = ((/* implicit */unsigned int) -4896261372737067409LL);
                    }
                    var_31 = ((/* implicit */short) var_11);
                }
            }
        } 
    } 
}
