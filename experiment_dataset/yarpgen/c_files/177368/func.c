/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177368
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
    var_11 = var_0;
    var_12 = ((/* implicit */signed char) (-((-(var_2)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        var_13 = max(((-(var_0))), (((/* implicit */unsigned int) -1157826778)));
        arr_4 [i_0] = ((/* implicit */unsigned short) -1157826778);
        arr_5 [i_0] = ((/* implicit */int) (-(min(((+(arr_1 [i_0] [i_0 - 2]))), (min((((/* implicit */unsigned int) arr_0 [8] [1])), (arr_1 [i_0 + 2] [i_0 + 1])))))));
    }
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        arr_10 [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned int) -1157826778)) > (((((/* implicit */_Bool) 2036293867U)) ? (2036293867U) : (((/* implicit */unsigned int) -1334297903))))))), (((int) var_5))));
        var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) + (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1])))))))));
        var_15 = ((((((/* implicit */_Bool) ((unsigned char) arr_9 [i_1]))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_10)) < (arr_1 [i_1] [i_1])))) : (var_5))) + (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)100)), (arr_1 [i_1] [i_1])))) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)90)))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 3; i_2 < 14; i_2 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)39485))))) ? (((((/* implicit */int) arr_2 [i_2])) << (((2258673428U) - (2258673425U))))) : (((/* implicit */int) ((243600505) == (var_2))))));
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            arr_17 [i_2] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_2 + 2]))));
            arr_18 [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) arr_16 [i_2] [i_2]);
        }
        for (unsigned int i_4 = 3; i_4 < 14; i_4 += 4) 
        {
            arr_22 [i_2] [i_4] [i_4 - 1] = ((/* implicit */unsigned char) 668647174U);
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                var_17 = ((/* implicit */int) ((((/* implicit */int) ((arr_12 [i_2]) < (var_10)))) != (((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) arr_2 [i_2])) : (var_9)))));
                arr_25 [i_2] [i_4] [6] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3049017302U)) ? (((/* implicit */int) arr_24 [i_5] [i_4] [i_4] [i_5])) : (-602921245))))));
                arr_26 [i_2] = ((/* implicit */int) arr_20 [i_2 + 2]);
            }
            for (int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    var_18 = ((/* implicit */int) (+(arr_14 [i_2])));
                    var_19 = ((/* implicit */unsigned int) ((unsigned short) ((1425078045U) >> (((1975284230U) - (1975284211U))))));
                    arr_31 [i_2 - 2] [i_2] [i_2] [i_2] = ((unsigned char) var_5);
                    arr_32 [i_2] [i_4 - 3] [i_2] [i_4 - 3] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned int) var_5)) == (1432278820U))))));
                }
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    arr_35 [i_2] [i_2] [i_2] = var_4;
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_6] [i_8]))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_2])))));
                    var_21 = (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_2] [i_4] [i_6] [i_8]))) <= (var_8)))));
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((arr_21 [i_4] [i_8]) << (((arr_13 [i_2] [i_2 + 2] [9]) - (27128598U))))))));
                }
                arr_36 [i_2] [i_4 - 3] [i_2] = ((/* implicit */unsigned short) 1048898205U);
                var_23 = ((/* implicit */int) (+((~(arr_13 [(signed char)11] [i_4] [i_6])))));
            }
        }
    }
    for (unsigned int i_9 = 3; i_9 < 14; i_9 += 2) /* same iter space */
    {
        arr_39 [(unsigned char)12] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_27 [i_9]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))) % (arr_21 [i_9 + 2] [i_9 + 1])))))));
        var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_9] [i_9])) ? (arr_16 [10] [i_9]) : ((-((-(arr_23 [i_9] [i_9] [i_9 + 1] [i_9])))))));
        arr_40 [i_9] = arr_14 [i_9];
    }
    var_25 = ((/* implicit */unsigned short) var_3);
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((max((((/* implicit */unsigned int) var_10)), (668647174U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) == (var_3)))))))) ^ ((-((-(var_6)))))));
}
