/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138733
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_10 &= ((/* implicit */signed char) max((arr_9 [i_0] [i_4] [i_4] [i_3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_1), (-1)))) ? (1732013125) : (((/* implicit */int) (!(((/* implicit */_Bool) 1001574318))))))))));
                                var_11 = ((/* implicit */int) ((((/* implicit */long long int) min((arr_0 [i_3 - 1]), (((/* implicit */unsigned int) var_9))))) & (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (4479995847091488928ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3 - 2] [i_3] [i_3]))) : (min((arr_11 [i_4] [i_4] [i_4] [i_4] [i_4]), (((/* implicit */long long int) (unsigned short)3214))))))));
                                var_12 = ((/* implicit */long long int) var_7);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        arr_17 [i_2] [i_1] [i_1] |= ((/* implicit */signed char) var_2);
                        arr_18 [i_0] [i_1] [i_2] [i_5] [i_1] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)3211))));
                        var_13 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) arr_4 [i_5] [i_2] [i_1] [i_0]))) / (((0ULL) - (((/* implicit */unsigned long long int) 451866911))))));
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -1732013126)))) : (var_6)));
                        arr_19 [i_0] [i_1] [i_2] [i_5] [i_5] |= ((/* implicit */unsigned short) ((int) arr_3 [i_2] [i_5]));
                    }
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        arr_23 [i_6] [i_6] [i_1] = ((/* implicit */unsigned short) ((max((max((arr_13 [i_1]), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) arr_6 [i_2] [i_2])))) != (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))));
                        arr_24 [i_6] [i_6] [i_6] [i_1] [i_6] = arr_14 [i_6];
                        var_15 = ((/* implicit */int) arr_1 [i_2]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        var_16 = ((/* implicit */int) 8388607LL);
                        var_17 &= -265203437;
                        var_18 = ((/* implicit */long long int) 2147483647);
                        var_19 = ((/* implicit */signed char) (~(-6128960978218383621LL)));
                        var_20 = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7]);
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 1; i_8 < 17; i_8 += 2) 
                    {
                        arr_31 [i_0] [i_1] [i_2] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_13 [i_1]) : (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1446))) ^ (arr_9 [i_0] [i_0] [i_2] [i_8]))), (((/* implicit */unsigned int) var_2)))))));
                        arr_32 [i_1] [i_8] [i_2] [i_8] [i_8] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_1] [i_1] [i_2] [i_8])))) * ((+(arr_1 [i_0])))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_8] [i_1] [i_0]))) : (min((((/* implicit */unsigned int) var_3)), (3443497570U)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) ((arr_13 [i_1]) != (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
                        arr_33 [i_1] [i_1] [i_8] [i_8] = ((/* implicit */signed char) (((-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (arr_8 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])))))) << (((1150112508U) - (1150112489U)))));
                    }
                    for (int i_9 = 3; i_9 < 16; i_9 += 4) 
                    {
                        arr_36 [i_0] [i_1] [i_0] = 265203437;
                        var_22 = ((/* implicit */_Bool) 1125899906580480ULL);
                        var_23 = ((/* implicit */int) (unsigned short)1473);
                    }
                    /* vectorizable */
                    for (signed char i_10 = 1; i_10 < 15; i_10 += 3) 
                    {
                        arr_40 [i_0] [i_1] [i_0] [i_10] = ((/* implicit */unsigned long long int) ((288230358971842560LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_2] [i_10])))));
                        arr_41 [i_0] [i_1] [i_2] [i_2] [i_10] |= ((/* implicit */unsigned int) (-(274388381)));
                    }
                }
                for (short i_11 = 3; i_11 < 17; i_11 += 4) 
                {
                    var_24 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) (unsigned short)18303)) : (-1183027721))) + (arr_7 [i_11] [i_11] [i_11] [i_11 - 3] [i_11] [i_11])));
                    var_25 = ((/* implicit */short) var_4);
                    var_26 -= ((/* implicit */unsigned short) (-(((/* implicit */int) min(((unsigned short)59637), ((unsigned short)40276))))));
                }
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) min((((/* implicit */long long int) min((arr_38 [i_0] [i_0] [i_0] [i_1]), ((signed char)123)))), (max(((((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) 2437777110U)))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */short) 2437777110U);
}
