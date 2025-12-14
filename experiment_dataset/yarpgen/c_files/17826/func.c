/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17826
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 += ((/* implicit */short) max((min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) << (((arr_0 [i_0]) - (7089816916453227103LL)))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [9LL] [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) == (((((/* implicit */int) var_5)) | (((/* implicit */int) var_7)))))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 3) /* same iter space */
                    {
                        arr_12 [i_1] [i_1] = ((((((/* implicit */_Bool) (+(104995251)))) ? (((0LL) / (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_1] [i_0] [i_3 + 1]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1]))));
                        var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((0LL) / (((/* implicit */long long int) 104995267))))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_2] [i_3 + 1] [i_3 + 1] [i_2])) ? (((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 1] [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_3 [i_0 + 1])))) : ((+(((/* implicit */int) max((var_10), (arr_1 [i_3]))))))));
                    }
                    for (int i_4 = 1; i_4 < 11; i_4 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */_Bool) max((max((arr_11 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_0 - 1] [i_0 + 1]), (arr_11 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_0 + 1] [i_0 + 1]))), (((/* implicit */unsigned int) 104995251))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned short) ((arr_0 [i_0]) << (((unsigned long long int) 0LL))))))));
                        arr_15 [i_1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */long long int) var_15);
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 11; i_5 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2] [i_2]))));
                        arr_19 [i_0] [i_2] [i_2] [i_5] |= ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)-7806))) == (var_0))) ? (arr_8 [i_5 + 1] [i_0 - 1] [i_2] [i_0] [i_0]) : (((/* implicit */int) var_7))));
                        arr_20 [i_1] [(short)5] = ((/* implicit */unsigned long long int) arr_4 [i_5] [i_0 + 2] [i_5 - 1]);
                    }
                    var_22 = ((/* implicit */unsigned long long int) max((((unsigned int) var_14)), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-23774)))))));
                }
                for (signed char i_6 = 2; i_6 < 11; i_6 += 4) 
                {
                    arr_25 [i_1] [i_1] = ((unsigned short) 4294967292U);
                    var_23 = ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_10 [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 2]))) > (((unsigned long long int) ((140464294295966472ULL) != (((/* implicit */unsigned long long int) 2683749412893797767LL))))));
                    var_24 = ((((/* implicit */unsigned long long int) ((long long int) min((arr_18 [i_0] [0U] [i_1] [0U]), (-8815235312882574614LL))))) ^ (max((((/* implicit */unsigned long long int) arr_13 [i_0 + 1] [i_0 - 1])), ((+(var_8))))));
                    arr_26 [i_1] [i_0] [i_1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8ULL)) ? (140464294295966472ULL) : (((/* implicit */unsigned long long int) 0U))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                {
                    var_25 = ((/* implicit */short) arr_31 [i_7] [i_8] [i_9]);
                    /* LoopNest 2 */
                    for (long long int i_10 = 1; i_10 < 21; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 3) 
                        {
                            {
                                arr_39 [i_7] [i_8] [i_8] [i_10] [i_11 + 2] = ((/* implicit */unsigned long long int) (+(((long long int) -104995251))));
                                var_26 &= ((/* implicit */int) (~((-(2791665603U)))));
                                arr_40 [i_7] [20LL] [i_9] [i_7] [i_11 + 1] [i_7] [i_10 - 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-7806))))));
                            }
                        } 
                    } 
                    var_27 -= ((/* implicit */_Bool) -104995260);
                }
            } 
        } 
    } 
}
