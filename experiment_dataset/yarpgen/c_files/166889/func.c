/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166889
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
    var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)3618))) % ((-(2011188082U)))))) ? (((/* implicit */int) (short)27634)) : (((/* implicit */int) (short)27631))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_1 - 1] [i_1 - 1]), (arr_2 [i_1 + 1] [i_1 + 1])))) && (((/* implicit */_Bool) arr_1 [i_0] [i_1])))))));
                var_15 *= ((/* implicit */short) ((((var_4) >> (((((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 1] [i_1 - 2])) + (32508))))) >> (((max((var_8), (((/* implicit */long long int) (short)-28045)))) + (28046LL)))));
                var_16 = ((/* implicit */long long int) ((short) min((((/* implicit */short) var_9)), ((short)22876))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_4 = 4; i_4 < 8; i_4 += 1) 
                            {
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_5))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) arr_3 [i_1 + 2] [1LL] [i_2]))))))));
                            }
                            var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (1030093310U)))), (max((((long long int) var_10)), (((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((arr_10 [i_1] [i_0]) - (1199156784U))))))))));
                            var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                            arr_11 [i_0] [(short)5] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                        }
                    } 
                } 
                var_21 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) ((short) 1816134366U)))))) && ((_Bool)1)));
            }
        } 
    } 
    var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (var_7)));
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            var_23 ^= ((arr_17 [i_6 - 1] [i_6]) / (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6 + 1] [i_6 + 1]))));
            arr_18 [12U] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (_Bool)1))) == (((/* implicit */int) (!((_Bool)0))))));
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                for (long long int i_8 = 1; i_8 < 19; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_6 - 1] [i_8 - 1]))));
                            var_25 &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_8 + 3] [i_8 + 2] [i_6 + 1] [i_6 + 2]))));
                            arr_26 [i_5] [i_5] [i_5] [i_5] [(short)12] [i_5] = ((/* implicit */long long int) ((unsigned int) var_8));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_14 [i_11]))));
                var_27 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)-12)) : (((/* implicit */int) (_Bool)1))));
            }
            var_28 = ((/* implicit */short) var_5);
        }
        arr_33 [(_Bool)1] [i_5] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_29 [i_5])) ? (arr_29 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (arr_29 [i_5])));
    }
    for (short i_12 = 0; i_12 < 22; i_12 += 3) 
    {
        arr_38 [i_12] = ((/* implicit */short) var_2);
        var_29 = ((/* implicit */short) ((long long int) (_Bool)1));
        var_30 = ((/* implicit */_Bool) max((4294967279U), (522388562U)));
        arr_39 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_12] [i_12])) << (((-1898484453581301181LL) + (1898484453581301206LL)))))) ? (min((((/* implicit */long long int) (short)28923)), (-3807096196687128529LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1))))));
    }
    var_31 = (-(var_11));
}
