/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170223
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [(short)10] = ((/* implicit */unsigned short) ((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (!(min((arr_1 [i_0]), (arr_1 [5ULL]))))))) : (((long long int) ((int) 1945160850U)))));
        var_19 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0]))))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1945160850U)) ? (-1637979166) : (((/* implicit */int) (signed char)54))))) ? (((/* implicit */int) max(((signed char)0), ((signed char)9)))) : (((/* implicit */int) arr_1 [i_0]))))));
        var_20 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) max(((signed char)72), ((signed char)0)))) ? (((/* implicit */int) ((_Bool) arr_2 [i_0]))) : (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned short) var_14))))))));
        var_21 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 3; i_2 < 11; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_1] [i_2 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_4]))) : (arr_4 [4ULL]))), (((/* implicit */long long int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_8 [i_1] [i_2]), (arr_13 [i_1] [i_2 + 1] [6] [i_4] [i_1] [i_1])))) && (((/* implicit */_Bool) arr_14 [i_1] [i_2 + 3] [i_3] [i_4])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -378190200)) ? (((/* implicit */int) (unsigned char)182)) : (1637979165)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_1] [i_2 - 1]) <= (arr_5 [i_1]))))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (arr_4 [i_1]) : (403645136613820625LL)))))));
                        var_23 = ((/* implicit */signed char) (!((_Bool)0)));
                    }
                } 
            } 
        } 
        var_24 = max((max((max((734539225), (((/* implicit */int) (signed char)-52)))), (arr_8 [(unsigned short)0] [(unsigned short)0]))), (378190199));
        var_25 = ((/* implicit */_Bool) arr_11 [i_1] [10] [i_1] [i_1]);
        var_26 -= ((/* implicit */unsigned int) arr_11 [2ULL] [2ULL] [i_1] [i_1]);
    }
    var_27 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-67)), ((-(((/* implicit */int) (signed char)0))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) min(((unsigned char)182), (((/* implicit */unsigned char) (signed char)0)))))));
    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                {
                    var_29 = ((/* implicit */long long int) min((var_29), ((((-(min((arr_19 [i_5] [i_6]), (arr_15 [i_6]))))) << (((((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned int) (signed char)0)), (1945160850U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2046)) ? (((/* implicit */int) (short)-79)) : (((/* implicit */int) (signed char)53))))))) - (1945160848U)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) max(((unsigned short)0), (((/* implicit */unsigned short) ((_Bool) (signed char)48)))));
                                arr_29 [i_5] [i_8] [i_7] [i_7] [i_8] [i_9] = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (signed char)75))));
                                var_31 -= ((/* implicit */unsigned long long int) var_3);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */short) ((min((var_8), (((/* implicit */int) arr_21 [i_7] [i_7] [i_6] [i_5])))) % (((((/* implicit */int) arr_27 [8LL])) + (max((arr_18 [i_6]), (((/* implicit */int) var_11))))))));
                    var_33 = ((/* implicit */int) arr_27 [10]);
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((signed char) -403645136613820626LL))), (arr_19 [i_5] [i_6]))))));
                }
            } 
        } 
    } 
}
