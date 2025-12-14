/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135936
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((var_6) / (var_14))))) ? ((+(min((((/* implicit */unsigned int) var_16)), (var_4))))) : (((((/* implicit */_Bool) 2147483647)) ? (4294967295U) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15914))) | (3736328489U)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_18 &= ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            var_19 = arr_3 [i_0 - 1];
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_1] [i_0])) ? (((/* implicit */unsigned int) arr_0 [i_2])) : (134217727U))), (((/* implicit */unsigned int) var_8))))) ? (((((/* implicit */_Bool) 1250341768)) ? (min((2915094245U), (((/* implicit */unsigned int) (unsigned short)0)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)49625)) ^ (((/* implicit */int) (unsigned short)35730))))))) : (((((/* implicit */_Bool) ((var_13) - (-2147483642)))) ? (var_12) : (((((/* implicit */_Bool) arr_0 [2])) ? (((/* implicit */unsigned int) var_6)) : (var_4)))))));
                var_21 = (-(((((/* implicit */_Bool) arr_5 [i_1 + 3] [i_0 - 1] [i_0])) ? (arr_5 [i_1 - 3] [i_0 - 1] [i_0]) : (-1538554830))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_7 [2] [5U])) ? (813012995U) : (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [12U] [i_2 + 2]))))))) && (((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_2 + 1] [i_2 - 1]), (((((/* implicit */_Bool) 1538554821)) ? (arr_4 [i_0 + 1]) : (((/* implicit */int) arr_7 [i_1] [i_0 - 2])))))))));
            }
            arr_8 [i_0 - 2] [i_0] [i_0] = ((((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1 - 3])) ? (((/* implicit */int) arr_7 [i_0 - 1] [3])) : (arr_4 [i_0]))) != (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_1 - 4] [4]) : (((/* implicit */int) arr_7 [3] [i_1 - 1]))))))) / (((((/* implicit */_Bool) (~(arr_6 [i_0] [i_0 + 1] [i_0 - 3] [i_0 - 2])))) ? ((~(arr_5 [i_1] [i_1 - 4] [i_1 + 2]))) : (((((/* implicit */_Bool) arr_7 [i_0 - 3] [(unsigned short)1])) ? (arr_0 [i_0 - 2]) : (((/* implicit */int) var_7)))))));
        }
        for (int i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            var_23 = arr_5 [i_3] [i_3] [i_0 - 1];
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)48520)) ? (((((/* implicit */_Bool) 268402688U)) ? (((/* implicit */int) (unsigned short)17021)) : (-1))) : (((/* implicit */int) (unsigned short)40036))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
        {
            var_25 *= var_11;
            var_26 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_4])) ? (arr_1 [i_0] [i_4]) : (((/* implicit */int) (unsigned short)15912)))) << (((((((((/* implicit */_Bool) arr_12 [i_4])) ? (arr_5 [(unsigned short)6] [i_4] [i_0 - 2]) : (arr_1 [i_0 - 2] [0U]))) + (1601877317))) - (28)))))), ((((!(((/* implicit */_Bool) (unsigned short)64600)))) ? (((((/* implicit */_Bool) var_14)) ? (arr_3 [i_4]) : (((/* implicit */unsigned int) arr_9 [4] [(unsigned short)5] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 3] [0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_4]))))))))));
            arr_13 [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48518)) ? (((((/* implicit */_Bool) (unsigned short)46989)) ? (((/* implicit */int) (unsigned short)41674)) : (((/* implicit */int) (unsigned short)65530)))) : (((((/* implicit */_Bool) (unsigned short)49625)) ? (((/* implicit */int) (unsigned short)17036)) : (2147483647)))))) ? (min((arr_1 [i_0 + 1] [10U]), ((-(arr_11 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [(unsigned short)4]))) : (arr_3 [i_0])))) && (((/* implicit */_Bool) min((arr_12 [i_0]), (((/* implicit */unsigned int) arr_1 [7U] [i_0]))))))))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_0])) ? (arr_1 [i_0 - 2] [(unsigned short)5]) : (arr_0 [i_5]))) > (arr_11 [i_0])));
            arr_16 [6U] &= ((/* implicit */unsigned short) ((((((arr_9 [i_0] [i_0 - 2] [i_5]) | (arr_1 [i_0 - 3] [i_0]))) + (2147483647))) << (((arr_1 [i_0 - 1] [i_0 - 2]) - (1947820037)))));
        }
        arr_17 [i_0] = ((/* implicit */int) max((((min((((/* implicit */unsigned int) (unsigned short)48520)), (0U))) % (((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_3 [0]))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_5 [i_0 - 1] [(unsigned short)6] [i_0 - 2]))) != (((/* implicit */int) ((arr_11 [i_0]) <= (arr_5 [i_0 + 1] [6] [i_0 + 1])))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        var_28 = ((/* implicit */int) max((((unsigned int) (-(arr_19 [0] [15U])))), (((/* implicit */unsigned int) arr_20 [i_6]))));
        arr_21 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)24170)) ? (127) : (((/* implicit */int) (unsigned short)65535))));
        var_29 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_6])) || (((/* implicit */_Bool) arr_19 [i_6] [i_6])))))))) ? (min((((int) var_14)), (((int) arr_18 [(unsigned short)13])))) : ((-(((((/* implicit */int) var_8)) ^ (1117571680))))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) (unsigned short)32501)))) : (((((/* implicit */_Bool) var_6)) ? (arr_18 [i_6]) : (arr_19 [i_6] [i_6])))))) ? (((((/* implicit */_Bool) var_12)) ? (1117571680) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)0)) : (arr_18 [i_6]))))) : (arr_19 [i_6] [9U])));
    }
    var_31 = ((/* implicit */unsigned int) var_9);
}
