/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156123
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
    var_15 = ((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) min((((((/* implicit */int) var_8)) + (var_0))), (((/* implicit */int) min((var_8), (var_8)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) var_4);
        var_17 = ((/* implicit */unsigned short) var_10);
    }
    for (short i_1 = 4; i_1 < 18; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) ((long long int) (~(((((/* implicit */_Bool) arr_2 [1LL])) ? (((/* implicit */int) arr_3 [i_1] [i_1 + 1])) : (((/* implicit */int) var_8)))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            for (short i_3 = 2; i_3 < 18; i_3 += 1) 
            {
                {
                    arr_12 [i_1 - 2] [13] [i_1] [i_1 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) arr_10 [i_2] [i_2] [i_2] [i_2 + 2])))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 3; i_4 < 18; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 4; i_5 < 18; i_5 += 1) 
                        {
                            {
                                arr_19 [i_5] [i_1] [i_3] [i_3 - 2] [i_5 - 4] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_4 [i_1] [i_1])), (((((/* implicit */long long int) ((int) var_9))) % (((((/* implicit */_Bool) var_10)) ? (arr_15 [i_1 - 4]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                                var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(2767224160U)))) ? (-1496966183) : (1496966193))) - (-1496966183)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((arr_6 [i_2] [i_1 + 1]), (((/* implicit */unsigned int) arr_2 [i_3]))))) || (((/* implicit */_Bool) min((arr_16 [i_1 - 1] [i_1] [i_3] [i_3]), (((/* implicit */signed char) (_Bool)0))))))) ? (max((((/* implicit */unsigned int) (signed char)-7)), (min((((/* implicit */unsigned int) var_0)), (1122485762U))))) : (((/* implicit */unsigned int) ((int) var_2)))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_13 [16U] [i_1 + 1] [i_1] [16U]))));
                }
            } 
        } 
    }
    var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) -1496966201)) ? (-1496966183) : (0)));
    /* LoopSeq 4 */
    for (unsigned short i_6 = 3; i_6 < 24; i_6 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (arr_20 [i_6 - 1]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14377)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_13))))) : (arr_20 [i_6 + 1])))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((arr_22 [i_6]), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)42960)) : (((/* implicit */int) var_7)))))))) ? ((~(arr_20 [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
        arr_23 [i_6 - 3] [(_Bool)1] = ((/* implicit */unsigned int) (+(((arr_22 [i_6 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6 - 2] [i_6 - 3])))))));
        var_25 += (((!(((/* implicit */_Bool) (~(var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_21 [(short)15] [(short)15]), (((/* implicit */unsigned short) var_8)))))) : (var_6));
        var_26 = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_21 [(signed char)1] [i_6]))))), ((-(arr_20 [i_6 - 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_21 [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_21 [i_6 - 3] [i_6])))))));
    }
    /* vectorizable */
    for (unsigned short i_7 = 3; i_7 < 24; i_7 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) (-((+(0)))));
        var_28 = (~(arr_25 [i_7] [i_7]));
    }
    /* vectorizable */
    for (unsigned int i_8 = 2; i_8 < 14; i_8 += 3) 
    {
        var_29 = ((/* implicit */signed char) ((arr_6 [i_8 - 2] [i_8]) / (arr_6 [i_8 + 2] [i_8])));
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) arr_5 [i_8] [i_8 + 2]))));
        arr_28 [i_8 + 2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [8U] [8U] [i_8 - 1]))) + (3706787818U)));
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_8] [i_8] [i_8])) ? (3706787818U) : (((/* implicit */unsigned int) 724947655))))) ? (((/* implicit */unsigned int) arr_2 [i_8 + 4])) : (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [10U] [10U] [i_8] [i_8]))) : (4036559335U)))));
    }
    for (int i_9 = 3; i_9 < 24; i_9 += 1) 
    {
        arr_31 [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_20 [i_9]))));
        var_32 ^= ((/* implicit */short) max((var_4), (arr_20 [i_9 - 2])));
    }
}
