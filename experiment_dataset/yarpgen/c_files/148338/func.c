/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148338
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
    var_20 = ((/* implicit */unsigned char) (+(var_12)));
    var_21 |= ((/* implicit */long long int) var_2);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) 3692889073119252435ULL);
            var_23 -= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        }
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            var_24 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
            arr_11 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
        }
        for (long long int i_3 = 4; i_3 < 23; i_3 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) var_17);
            arr_15 [i_0] [i_0] [(unsigned short)18] |= var_13;
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                for (unsigned short i_5 = 2; i_5 < 23; i_5 += 3) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) var_2)) : (-1329701240)))))));
                        arr_21 [i_0 + 1] [i_0 + 1] [i_0] [i_5] = ((/* implicit */unsigned long long int) arr_18 [i_3] [(short)4] [i_0]);
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_16)))))))));
                    }
                } 
            } 
            arr_23 [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
        }
        var_27 |= ((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) arr_3 [i_0]))), (min((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])), ((+(((/* implicit */int) arr_19 [i_0 + 1] [i_0] [i_0] [i_0 + 1]))))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_16 [i_6] [i_6]), (arr_16 [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)6]))) : (arr_26 [i_6])));
        var_29 = ((/* implicit */unsigned short) (~(var_8)));
        var_30 -= ((/* implicit */_Bool) (unsigned short)11522);
        var_31 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(var_11))), (((/* implicit */int) (unsigned short)22079))))) ? (((((/* implicit */_Bool) max((arr_8 [10]), (arr_8 [22ULL])))) ? (((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)22086)))) : (min((1329701240), (var_19))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_32 = ((/* implicit */int) min((var_32), ((-(((/* implicit */int) arr_27 [i_7]))))));
        /* LoopSeq 3 */
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            arr_32 [i_8] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */int) arr_3 [i_7])) : (((/* implicit */int) arr_3 [i_7])))));
            var_33 *= ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_7] [2ULL] [i_7]))) / (arr_2 [(signed char)0])))));
        }
        for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 1) 
        {
            var_34 = var_17;
            var_35 = ((/* implicit */unsigned short) arr_25 [i_9] [(_Bool)1]);
            var_36 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
            var_37 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_10 [i_7] [i_7] [(unsigned char)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_12)))));
            arr_35 [i_7] [i_9] = (unsigned char)8;
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_38 = ((/* implicit */unsigned char) (signed char)4);
            arr_38 [i_7] [i_7] = ((/* implicit */unsigned char) arr_8 [(unsigned char)20]);
            arr_39 [i_7] [i_10] [i_10] = ((/* implicit */_Bool) arr_1 [i_7] [i_7]);
        }
        arr_40 [i_7] [i_7] = var_13;
    }
}
