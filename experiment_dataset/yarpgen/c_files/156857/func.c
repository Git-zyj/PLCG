/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156857
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
    var_14 = ((((/* implicit */int) var_10)) != (((/* implicit */int) var_5)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_15 ^= ((/* implicit */int) ((arr_1 [i_0 - 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_6))))));
        var_16 ^= ((/* implicit */unsigned long long int) 1U);
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0 - 1]))));
                var_17 += ((arr_3 [i_0] [(unsigned char)18] [i_0]) ? (((/* implicit */unsigned long long int) arr_2 [4ULL])) : (1563817333490229861ULL));
            }
            var_18 = ((/* implicit */int) 16882926740219321755ULL);
            var_19 -= ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 - 1])) >= (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_0 + 1] [i_1 + 2]))));
        }
        arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(unsigned char)10])) && (((((/* implicit */int) var_8)) > (((/* implicit */int) (_Bool)1))))));
        arr_12 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_3])) > (((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_3]))));
        arr_13 [i_3] [i_3] = ((/* implicit */int) var_12);
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))));
        var_22 = ((unsigned char) arr_4 [i_3] [i_3]);
    }
    for (int i_4 = 2; i_4 < 8; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 3) /* same iter space */
        {
            var_23 |= var_11;
            arr_18 [i_5] [i_5] = ((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_8)) ? (arr_16 [i_4] [i_4] [i_4]) : (arr_14 [i_4] [i_4]))))))));
        }
        for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((arr_15 [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))), (min((((/* implicit */unsigned long long int) arr_6 [i_4])), (((((/* implicit */_Bool) arr_5 [i_6])) ? (arr_11 [i_4]) : (((/* implicit */unsigned long long int) arr_10 [i_4]))))))));
            arr_21 [i_4] [i_6] = ((/* implicit */signed char) ((int) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_4])) ? (arr_16 [i_4] [i_6] [i_4]) : (((/* implicit */int) arr_3 [i_4] [i_4] [i_6])))))));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 7; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 8; i_8 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_9 = 2; i_9 < 6; i_9 += 2) 
                        {
                            var_25 = ((/* implicit */long long int) arr_24 [i_4] [i_6] [i_4] [i_6] [i_9]);
                            arr_28 [i_6] [i_9] = max((((/* implicit */int) ((_Bool) min((1756720411U), (((/* implicit */unsigned int) arr_27 [i_4] [i_8] [i_4] [i_8] [i_8])))))), ((((!(((/* implicit */_Bool) (unsigned char)255)))) ? (max((arr_19 [i_8] [i_7] [i_4]), (var_3))) : (((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) arr_7 [i_4] [i_7] [i_8] [i_8])))))));
                            arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((arr_19 [i_4] [i_6] [i_6]) != (arr_19 [i_4 + 1] [i_6 - 3] [i_8 + 2])))), (max((((/* implicit */unsigned long long int) arr_2 [i_9])), (arr_11 [i_9 + 1])))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_2)) : (arr_15 [i_4 - 1])));
                            var_27 = ((/* implicit */int) var_9);
                            var_28 = arr_15 [i_7];
                            var_29 = ((/* implicit */signed char) arr_23 [i_4] [i_7] [i_7] [i_7]);
                            var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_31 [i_4] [i_4] [i_8 + 2] [i_10] [i_10])) >= (((/* implicit */int) arr_31 [i_8] [i_8] [i_8 + 2] [i_8 + 2] [i_8]))));
                        }
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_4] [i_7] [i_4]))) : (arr_2 [i_4])))) ? (((/* implicit */int) min((arr_5 [i_4]), (((/* implicit */unsigned short) arr_7 [i_4] [i_6] [i_7] [i_7]))))) : (((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_8]))))) >= (max((((((/* implicit */_Bool) var_0)) ? (1563817333490229861ULL) : (arr_11 [i_6]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_4] [i_4] [i_4])))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_11 = 1; i_11 < 9; i_11 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned int) var_4);
                            arr_35 [i_4] [i_6] [i_4] [i_11] [i_4] = ((/* implicit */unsigned char) arr_11 [i_4]);
                            arr_36 [i_11] [i_6] [i_6] [i_8] [i_6] = ((/* implicit */unsigned short) arr_17 [i_4]);
                            arr_37 [i_4] [i_4] [i_4] &= ((signed char) ((var_7) <= (((/* implicit */int) (unsigned char)0))));
                            var_33 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_4 - 1])) ? (arr_26 [i_4 + 1]) : (-1329633698)));
                        }
                        for (unsigned short i_12 = 3; i_12 < 8; i_12 += 1) 
                        {
                            arr_40 [i_4] [i_6] [i_4] [i_8] [i_8] [i_12] = ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)0)))) % (((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_2 [i_4]) : (arr_2 [i_4]))));
                            arr_41 [i_4] [i_6] [i_6] [i_8] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((arr_6 [i_4]) != (((/* implicit */int) var_5))))), (((unsigned char) arr_24 [i_4] [i_4] [i_4] [i_8] [i_8]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (var_12)))) ? (((((/* implicit */_Bool) 314157119)) ? (var_7) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) min(((unsigned char)1), ((unsigned char)0))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */int) var_1)) : (var_2)))) ? (((arr_3 [i_4] [i_4] [i_4]) ? (((/* implicit */long long int) arr_15 [i_7])) : (-5179228134950034718LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_6] [i_7] [i_7])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
                        }
                    }
                } 
            } 
        }
        var_34 &= ((/* implicit */unsigned short) max(((-(arr_26 [i_4]))), (((/* implicit */int) ((((/* implicit */unsigned int) var_7)) != (661031911U))))));
    }
}
