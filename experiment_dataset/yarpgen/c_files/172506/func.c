/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172506
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-14685))));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6586468557801529048LL)) ? (6586468557801529053LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (min((-6586468557801529048LL), (((/* implicit */long long int) (short)0)))) : (((/* implicit */long long int) ((unsigned int) 8433881091122354383LL))))))))));
    var_16 = ((/* implicit */unsigned int) ((_Bool) var_9));
    var_17 = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) var_1)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 += ((max((((unsigned long long int) -10)), (((/* implicit */unsigned long long int) min(((signed char)57), (((/* implicit */signed char) arr_1 [i_0]))))))) ^ (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)26285))))) : ((~(arr_3 [8LL]))))));
                var_19 = ((/* implicit */unsigned short) (unsigned char)18);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) (unsigned short)14121);
                    var_20 = ((/* implicit */_Bool) ((long long int) ((unsigned short) 262143U)));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_2] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48737))) <= (arr_4 [i_0] [i_0] [i_2 + 2] [i_3])));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16777215LL)) ? (((/* implicit */int) ((short) 16777215LL))) : (((/* implicit */int) ((unsigned char) 3404322433U)))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)12] [i_1] [i_2] [(signed char)12]))) : (-8161117722706086692LL))) << (((((/* implicit */int) (short)112)) - (90)))));
                        }
                    }
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_1] [i_0] [i_1] [i_1] = ((short) ((int) (short)-23598));
                        arr_19 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) var_1);
                    }
                }
                for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    arr_22 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) (short)28069))))) ? (((((/* implicit */_Bool) 8805960534549508711ULL)) ? ((-(((/* implicit */int) (signed char)-1)))) : ((+(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(-6294129446561615556LL)))))))));
                    var_22 = ((/* implicit */long long int) var_0);
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) max((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_11 [i_0] [(unsigned short)2] [i_6] [i_6] [(unsigned short)10])) ? (((/* implicit */int) (short)2367)) : (((/* implicit */int) var_8)))))), (16777215LL))))));
                    arr_23 [i_0] = ((/* implicit */long long int) (_Bool)1);
                }
            }
        } 
    } 
}
