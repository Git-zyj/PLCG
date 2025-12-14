/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164208
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_16 = ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = arr_1 [i_0];
        var_17 = min((((/* implicit */int) arr_1 [i_0])), (min((arr_0 [i_0]), (((((/* implicit */_Bool) 5542284502752016104LL)) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        arr_6 [(signed char)4] |= ((/* implicit */int) arr_4 [i_1] [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned short) ((signed char) arr_3 [i_1]));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_18 = (+(((/* implicit */int) arr_11 [i_1])));
            /* LoopSeq 1 */
            for (long long int i_3 = 2; i_3 < 11; i_3 += 1) 
            {
                arr_16 [(unsigned short)4] [i_2] [i_1] = min((((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_4 [i_1] [9]))))))), (((((/* implicit */_Bool) arr_10 [i_2] [i_1])) ? (arr_9 [i_1] [i_1] [i_3 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1]))))));
                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 - 2])) ? (((/* implicit */long long int) arr_9 [i_3 - 1] [i_1] [i_3 - 2])) : (arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 - 2])))));
            }
            var_19 = ((/* implicit */signed char) arr_0 [i_2]);
            arr_18 [i_1] [i_1] [i_1] = (signed char)-91;
        }
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        arr_21 [i_4] = (~(max((((((/* implicit */_Bool) arr_12 [i_4] [i_4] [11] [0U])) ? (arr_5 [i_4]) : (((/* implicit */unsigned int) 942042602)))), (((/* implicit */unsigned int) 1397603829)))));
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_20 = ((/* implicit */signed char) (+(((int) arr_15 [i_5] [i_5] [i_4] [i_4]))));
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4])) ? (arr_20 [i_4]) : (arr_20 [i_5])))))))));
        }
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) -1397603846)) ? (((((/* implicit */_Bool) 2970442718U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 6556576775904704649LL)) ? (1397603829) : (arr_8 [(unsigned short)10] [i_6])))) : (6556576775904704647LL))) : (((/* implicit */long long int) 1397603819))));
            arr_26 [i_4] [(signed char)3] [i_4] = ((/* implicit */unsigned int) arr_20 [i_6]);
            var_23 = ((/* implicit */signed char) arr_13 [i_4] [i_4] [i_4]);
        }
    }
    var_24 = ((/* implicit */int) max((var_24), ((~(((/* implicit */int) (!(((/* implicit */_Bool) 1324524585U)))))))));
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 9; i_7 += 4) 
    {
        for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    arr_35 [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) arr_31 [i_7] [i_7 - 1]))), ((+(((((/* implicit */_Bool) 2970442737U)) ? (-1397603859) : (((/* implicit */int) arr_4 [i_7] [i_8]))))))));
                    var_25 = ((/* implicit */unsigned short) (~(-1397603803)));
                }
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    var_26 = ((/* implicit */long long int) arr_29 [i_7]);
                    arr_39 [i_10] [i_7 - 2] [i_7 - 2] = ((/* implicit */int) arr_9 [i_7] [i_8] [i_10]);
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) min((((((/* implicit */_Bool) arr_25 [i_7 + 3])) ? (arr_23 [i_7 - 3] [i_7 + 2]) : (arr_23 [i_7 + 3] [i_7 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_7 + 1] [i_8])) ? (((((/* implicit */_Bool) 1084535282)) ? (1397603811) : (2147450880))) : (((/* implicit */int) arr_37 [i_7] [i_8] [i_8] [i_10]))))))))));
                    var_28 = ((/* implicit */unsigned short) (-(min((2233742117628062045LL), (((/* implicit */long long int) (signed char)88))))));
                }
                /* LoopSeq 2 */
                for (signed char i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    var_29 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) 1397603789)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-9)) ? (-1309764507) : (((/* implicit */int) arr_24 [i_8] [i_8]))))) : (7461828663641972082LL))));
                    var_30 += ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_3 [i_7 + 1]), (arr_12 [i_7] [i_7 - 3] [i_7] [i_7 + 2]))))));
                }
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    arr_44 [i_7] [i_8] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [(unsigned short)10]))))) ? ((~(((/* implicit */int) (signed char)-30)))) : (min((((/* implicit */int) arr_14 [i_7] [i_7] [i_7 - 3] [i_7 - 2])), ((~(((/* implicit */int) (signed char)-63))))))));
                    var_31 = ((/* implicit */signed char) (+(arr_15 [i_7] [10] [i_8] [i_7 - 1])));
                }
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned int) var_7);
    var_33 = ((/* implicit */unsigned int) var_12);
}
