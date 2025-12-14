/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158742
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
    var_16 = ((/* implicit */signed char) var_10);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (signed char)126))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) (signed char)126)))))));
        arr_3 [i_0] = (~(((unsigned long long int) ((_Bool) var_0))));
    }
    for (signed char i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */short) min(((-(max((18446744073709551608ULL), (((/* implicit */unsigned long long int) (signed char)110)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_0 [i_1]) : (14284511454386596220ULL))))))));
            arr_9 [i_1] [21] = ((/* implicit */_Bool) (signed char)-121);
            arr_10 [i_1 + 1] [(unsigned char)18] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_1 - 1])) ^ (((/* implicit */int) arr_8 [i_1 + 1]))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_7 [i_1])))) + (2147483647))) >> (((arr_0 [i_1 - 2]) ^ (arr_0 [i_1 + 2])))));
            arr_14 [i_3] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min(((~((~(((/* implicit */int) arr_12 [i_1] [i_1])))))), (min((((/* implicit */int) (signed char)120)), ((+(((/* implicit */int) (_Bool)1)))))))))));
            var_20 &= ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_1] [i_3]))))) ? (((((/* implicit */int) (short)30407)) + (-1268363898))) : (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (signed char)114)) : (1644445456))))) - (((((/* implicit */_Bool) 17999457720181384749ULL)) ? (((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_12 [i_1] [i_3])))) : (arr_2 [i_1 + 1]))));
            var_21 ^= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (var_15) : (111471615))), (((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 1]))))) ? (((/* implicit */int) arr_8 [i_1])) : (max((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_4 [i_1]))))), (arr_2 [i_1]))));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_22 += ((/* implicit */int) (+((((-(arr_16 [(short)6] [i_4]))) / ((+(arr_16 [7ULL] [7ULL])))))));
        var_23 = (!(((/* implicit */_Bool) (-((+(-1644445457)))))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_24 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned short)59489)), (447286353528166867ULL)));
            arr_22 [i_5] = ((/* implicit */signed char) var_3);
            arr_23 [i_5] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)85))) : (var_14)))))) ? (arr_19 [i_4] [i_5]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_21 [i_5]) / (var_13)))) ? (((((/* implicit */int) (signed char)-87)) / (-121855249))) : (((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */int) arr_18 [i_5] [i_5])) : (((/* implicit */int) (_Bool)0)))))))));
        }
        for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 2) 
        {
            var_25 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_24 [i_4] [i_4] [i_6])), (var_0))))) : (((((/* implicit */_Bool) var_6)) ? (arr_21 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) != (((((/* implicit */unsigned long long int) 673306201)) ^ (2534783207804149860ULL)))));
            arr_27 [(signed char)22] [i_6] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? ((-((-(749094893195813220ULL))))) : (arr_19 [i_4] [i_6])));
        }
        var_26 = ((/* implicit */unsigned long long int) (unsigned short)59491);
    }
    var_27 = ((((((/* implicit */_Bool) (+(var_4)))) ? (var_14) : (var_6))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14425288753582469907ULL)) ? (((/* implicit */unsigned long long int) var_4)) : (var_14)))) ? (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_2))))));
    var_28 = ((/* implicit */signed char) (-2147483647 - 1));
}
