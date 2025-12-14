/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114998
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
    var_10 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] [i_1] |= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((short) var_1))) ? (((((/* implicit */_Bool) (unsigned short)48777)) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0])) : (2833251665495813985ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_5)), ((short)-22547))))))));
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) 2833251665495813985ULL))) ? (((((_Bool) var_9)) ? (min((15613492408213737639ULL), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) min((2637186049U), (((/* implicit */unsigned int) -959717089))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8))))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */unsigned int) ((int) arr_9 [i_0] [i_0] [i_0] [i_0]));
                        arr_13 [i_0] = ((/* implicit */_Bool) ((long long int) var_6));
                    }
                    var_12 -= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (arr_9 [i_0] [i_0] [i_1] [i_0]))))));
                    var_13 = ((/* implicit */unsigned char) ((unsigned int) min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) var_2)))));
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 19; i_4 += 2) 
                    {
                        for (short i_5 = 1; i_5 < 21; i_5 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)225)) | (((/* implicit */int) (short)-22559))))))) : (((((/* implicit */_Bool) (short)22544)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1180914815U)))));
                                var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned short) (short)9388)))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (3018075052175278974LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((((((/* implicit */int) (short)-22547)) ^ (((/* implicit */int) var_9)))) % (((/* implicit */int) (unsigned char)9))))));
                                var_16 += max((((/* implicit */unsigned int) (short)22225)), (min((arr_9 [i_4 + 4] [i_2] [i_1] [i_2]), (((/* implicit */unsigned int) (short)22547)))));
                                var_17 -= ((/* implicit */unsigned char) max((((12392098574804249176ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9389))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -1584807964)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)21132)))), (((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) ((unsigned char) arr_0 [i_1]))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    var_19 |= ((unsigned char) var_7);
                    arr_21 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */_Bool) var_3);
                }
                for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    arr_24 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (977812519U)))) ? (238241741) : (min((1525432101), (var_8)))));
                    var_20 += ((/* implicit */unsigned int) max((max((((/* implicit */long long int) var_4)), (((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (((/* implicit */long long int) max((((((/* implicit */int) var_0)) - (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)95)))))))));
                }
                arr_25 [i_0] [i_0] = var_3;
            }
        } 
    } 
}
