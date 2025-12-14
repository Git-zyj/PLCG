/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114289
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
    var_18 = ((/* implicit */signed char) 6160790468321583586ULL);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned char i_3 = 4; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_11 [14LL] = ((/* implicit */signed char) (unsigned short)65535);
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (-(max((arr_7 [i_3] [i_2] [i_0]), (8589934591ULL)))))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_1])), (12285953605387968029ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-1418970706507510926LL)))))))))));
                        var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) 12285953605387968045ULL))) ? ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_5 [i_1] [i_2] [(short)2])))))) : (((((/* implicit */_Bool) arr_4 [i_3 - 3])) ? (((/* implicit */int) arr_4 [i_3 + 1])) : (((/* implicit */int) var_2))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
        var_21 &= ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (max(((signed char)64), ((signed char)-125))))))));
        var_22 = ((/* implicit */unsigned char) max((((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0])))))))), (arr_10 [(signed char)20])));
    }
    for (short i_4 = 1; i_4 < 8; i_4 += 1) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))))), (var_1))))) / ((-(((long long int) var_8))))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (short i_6 = 2; i_6 < 9; i_6 += 2) 
            {
                {
                    arr_21 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)26075))) - (12285953605387968018ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        var_24 = ((/* implicit */short) var_13);
                        arr_25 [i_5] [i_5] [i_4] [i_7] [i_4] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)16)))));
                        arr_26 [i_6] |= ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) var_11)))));
                        var_25 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((var_17), ((signed char)-47)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_18 [i_6 + 1] [i_7] [i_4]))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_17 [i_4]))))));
                        var_26 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)4046)))) - (((/* implicit */int) var_16))));
                    }
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned long long int) var_9);
}
