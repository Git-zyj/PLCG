/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163665
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
    var_13 = var_4;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) ((var_7) < (((/* implicit */unsigned long long int) var_10)))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_0 [i_1]))))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 11779080463049571985ULL);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 &= ((/* implicit */unsigned int) (+(((var_9) ? (((/* implicit */int) (unsigned short)18509)) : (((/* implicit */int) var_4))))));
            var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)18509)) ? (((/* implicit */int) arr_9 [i_2] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0]))));
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((_Bool) arr_0 [i_2])))));
            var_17 = (unsigned short)18509;
        }
        var_18 = ((/* implicit */unsigned char) ((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0]))));
        var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19616)))))) ? (((/* implicit */int) (unsigned short)47026)) : (((/* implicit */int) (unsigned short)47027))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_1 [i_3] [i_3])))) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0])) != (((/* implicit */int) (unsigned short)19616)))))));
            arr_13 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (~(50262524255471067LL)));
            /* LoopSeq 4 */
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                var_21 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))));
                arr_16 [i_4] = ((((/* implicit */int) (unsigned short)47027)) >> (((268435455LL) - (268435435LL))));
                arr_17 [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) ((arr_9 [i_4] [i_4]) ? (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (short)25412)) : (((/* implicit */int) var_4))))) : (arr_1 [i_4] [i_4])));
            }
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_25 [i_7] = ((/* implicit */unsigned char) arr_19 [i_5] [i_5]);
                            var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_9 [i_0] [i_7]))));
                        }
                    } 
                } 
                arr_26 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (unsigned char)127);
            }
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
            {
                arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) (unsigned short)47026)))));
                arr_30 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_11)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                var_23 = ((/* implicit */short) ((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)47026))));
            }
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
            {
                var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_15 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                arr_34 [i_0] = (!(arr_9 [i_0] [i_0]));
            }
        }
        /* LoopSeq 1 */
        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)47026)) && (((var_8) || (((/* implicit */_Bool) var_5))))));
            arr_37 [i_0] = ((/* implicit */short) var_7);
            var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_28 [i_10]))));
        }
    }
    /* vectorizable */
    for (unsigned short i_11 = 1; i_11 < 10; i_11 += 1) 
    {
        var_27 = ((((/* implicit */int) arr_18 [i_11 + 2] [i_11 - 1] [i_11 - 1])) | (((/* implicit */int) arr_18 [i_11 + 1] [i_11 + 1] [i_11 + 1])));
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_11 + 3] [i_11 + 3])) || (((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11]))) != (arr_22 [i_11] [i_11] [i_11])))));
    }
}
