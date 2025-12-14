/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1656
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
                    arr_8 [i_1] [i_2 - 2] = ((min((min((((/* implicit */long long int) (_Bool)1)), (arr_5 [i_0] [i_1] [(unsigned short)1] [(unsigned short)1]))), (((/* implicit */long long int) ((arr_5 [i_0] [i_0] [3] [8]) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_0])))))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36919)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)27))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 14117477148254863798ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) : (var_0)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        var_17 -= ((/* implicit */unsigned long long int) arr_10 [i_3]);
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            for (signed char i_5 = 2; i_5 < 13; i_5 += 1) 
            {
                {
                    var_18 *= ((/* implicit */_Bool) (signed char)15);
                    /* LoopSeq 3 */
                    for (long long int i_6 = 4; i_6 < 13; i_6 += 4) 
                    {
                        var_19 ^= (-(((/* implicit */int) var_14)));
                        var_20 -= ((/* implicit */signed char) min((((/* implicit */unsigned char) (signed char)-4)), ((unsigned char)214)));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_21 *= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)52349))));
                        var_22 = ((/* implicit */unsigned int) var_12);
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) 3824521564U))));
                    }
                    for (unsigned short i_8 = 1; i_8 < 13; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_1))));
                        var_25 |= ((/* implicit */signed char) (~(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))));
                    }
                }
            } 
        } 
        var_26 += ((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_0))));
    }
    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        var_27 = ((/* implicit */long long int) min((var_27), (min((((/* implicit */long long int) (((_Bool)1) ? (2127684993) : (((/* implicit */int) (unsigned char)248))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (((((/* implicit */_Bool) arr_23 [i_9])) ? (arr_23 [i_9]) : (((/* implicit */long long int) 1198248431U))))))))));
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (-1094743250237357688LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)21)))));
        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_9]))) : (arr_23 [i_9])))))))));
        /* LoopSeq 1 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (arr_25 [i_9] [i_10] [(_Bool)1]) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_14)), (var_6)))) ? ((~(((/* implicit */int) (unsigned char)131)))) : (((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) arr_27 [i_9] [(_Bool)1])) : (((/* implicit */int) var_13))))))));
            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)134)) ? (-7403853335810970970LL) : (((/* implicit */long long int) (-(arr_25 [i_9] [i_10] [i_10 - 1]))))));
            var_32 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)214))));
        }
        var_33 &= ((/* implicit */unsigned char) var_13);
    }
}
