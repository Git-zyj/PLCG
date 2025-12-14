/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132273
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
    var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
        var_12 *= ((/* implicit */unsigned char) min((((int) arr_1 [i_0] [i_0])), ((+(arr_0 [(unsigned short)1])))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) (short)4080);
        var_14 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_4 [i_1])) ? (2251799813668864ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))), (((/* implicit */unsigned long long int) min((arr_4 [i_1]), (arr_4 [i_1]))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
    {
        for (unsigned char i_3 = 3; i_3 < 9; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (signed char i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned long long int) (+(((long long int) arr_8 [i_3]))));
                                arr_15 [i_4] [i_5] [i_4] [2LL] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((arr_7 [i_2]), (((/* implicit */unsigned char) var_3))))) : (((/* implicit */int) var_7)))) : (arr_8 [(unsigned char)3])));
                                var_16 = -2465216696295191146LL;
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_3] [2LL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((2465216696295191113LL), (((/* implicit */long long int) var_8))))) ? (min((max((((/* implicit */unsigned long long int) (short)-17811)), (var_9))), (min((arr_5 [i_2]), (((/* implicit */unsigned long long int) 2465216696295191146LL)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)0))))), (var_4))))));
                    var_17 = ((/* implicit */int) min((((/* implicit */long long int) max((((((/* implicit */_Bool) arr_10 [i_2 + 2])) ? (((/* implicit */int) arr_7 [6ULL])) : (((/* implicit */int) var_7)))), (((((/* implicit */int) (unsigned char)95)) - (((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) arr_7 [i_3 + 2])) ? (((/* implicit */long long int) arr_8 [4LL])) : (min((var_0), (((/* implicit */long long int) var_8))))))));
                    arr_17 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1412086779)) ? (-2465216696295191146LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16)))));
                }
            } 
        } 
    } 
}
