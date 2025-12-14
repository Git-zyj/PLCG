/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166039
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_19 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5546367491732060789LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5546367491732060789LL))))));
                                var_20 = ((/* implicit */short) ((unsigned long long int) arr_8 [i_0] [i_3]));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) < (var_9)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) arr_0 [i_0]);
                    arr_11 [i_0] [i_1] [18ULL] [i_1] &= var_8;
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2]))))) : (((/* implicit */int) (unsigned short)65535)))))));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_5] [i_5])), (arr_3 [i_5] [i_5])))) ? (((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [6U])) : (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_11)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned long long int) arr_12 [i_5]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_16)), ((unsigned char)244)))) : (((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_10 [i_5])) : (1816945317)))))) : (min((max((((/* implicit */long long int) var_4)), (var_9))), (((/* implicit */long long int) arr_5 [i_5] [i_5] [24ULL]))))));
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) min((((arr_3 [i_5] [i_5]) >> (((arr_1 [i_5]) - (10611983782320529698ULL))))), (((/* implicit */unsigned int) var_12)))))));
    }
    for (short i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        var_26 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6] [i_6])) ? (-5546367491732060789LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (var_6) : (((/* implicit */long long int) arr_12 [i_6])))), (var_6)));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) ((((_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_3)))))))));
                                arr_24 [i_6] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) 2984604876789882749LL))));
                                var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_8 [i_9] [(unsigned short)6])))))) : (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))) / (((/* implicit */unsigned long long int) ((var_16) ? (((/* implicit */int) var_4)) : (arr_13 [i_9]))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (min((10038824568619602785ULL), (((/* implicit */unsigned long long int) var_4)))) : (((unsigned long long int) (_Bool)0))))) ? (max((1073739776), (((/* implicit */int) (short)-21963)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)12)))))));
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        arr_27 [i_6] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6])) ? (((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) -1))))) : (max((-1073739792), (((/* implicit */int) (signed char)110)))))))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) var_8))));
                    }
                }
            } 
        } 
    }
    for (long long int i_12 = 0; i_12 < 20; i_12 += 1) 
    {
        arr_32 [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [2ULL]))));
        var_31 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_11))))))) ? (((long long int) (!(((/* implicit */_Bool) arr_3 [10LL] [10LL]))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (min((var_13), (((/* implicit */long long int) arr_8 [(short)10] [i_12]))))))));
    }
    var_32 = ((/* implicit */long long int) ((max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) var_1)))) << (((min((var_6), (((/* implicit */long long int) var_11)))) + (8349144190976190569LL)))));
}
