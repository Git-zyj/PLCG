/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153547
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((-8399415105643055576LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_9)) + (14057))))) * (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7860)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)8310))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10)))))) : (var_7))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_11);
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (+(arr_4 [i_0 + 1] [i_1])));
            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_1])))))));
            var_14 = ((/* implicit */short) var_6);
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7862)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-3053029340546334584LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)7] [i_1]))) : ((-(arr_3 [i_0] [i_1] [i_1]))))))));
        }
        for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 14; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        {
                            arr_17 [i_5] [(short)10] [i_3] [(short)8] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (unsigned short)57674))) % (((/* implicit */int) (unsigned short)7860))));
                            arr_18 [i_0] [i_2] [i_0] [i_4 + 3] [i_5] [i_2] [i_2] = ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7862))) - (var_7)));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) arr_8 [i_0 + 1] [i_2 - 2]);
            }
            arr_19 [i_0 - 1] [i_2 - 2] [i_2 - 2] = ((/* implicit */unsigned long long int) var_8);
        }
        var_17 = var_4;
        /* LoopSeq 1 */
        for (short i_6 = 1; i_6 < 13; i_6 += 1) 
        {
            var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10969))) % (arr_9 [i_0 - 3] [i_6 - 1] [i_6 + 3]));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                for (short i_8 = 3; i_8 < 16; i_8 += 2) 
                {
                    {
                        arr_27 [(unsigned char)4] [i_0] [i_0] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_8 - 2] [i_8 - 2] [i_8 - 3])) ? (((/* implicit */int) arr_15 [i_8 - 1] [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) arr_15 [i_8 - 1] [i_8 + 1] [i_8 + 1]))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)7860)) & (((/* implicit */int) arr_14 [i_8 - 2] [i_8 - 3]))));
                    }
                } 
            } 
        }
    }
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_6))) << (((min((var_5), (((/* implicit */unsigned int) ((unsigned char) var_5))))) - (175U)))));
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 3; i_9 < 17; i_9 += 2) 
    {
        for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 2; i_12 < 17; i_12 += 4) 
                    {
                        for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            {
                                var_21 *= (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-29554))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (arr_37 [16ULL] [i_11] [i_12] [i_11]))))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_9 - 3] [i_12 + 1] [i_11]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)57666)) : (((/* implicit */int) arr_28 [i_9])))) : (((/* implicit */int) var_3))));
                                arr_41 [i_9] [i_10] [i_11] [i_12] [i_12] [i_13] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57697))) | (min((((/* implicit */unsigned int) (unsigned short)57673)), (var_6)))));
                                var_23 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 108086391056891904ULL)) || (((/* implicit */_Bool) (unsigned short)57697))))), (677658149485832521ULL))), (((/* implicit */unsigned long long int) (unsigned short)57670))));
                            }
                        } 
                    } 
                    arr_42 [i_9] [i_10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)3708)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) < (max((((/* implicit */long long int) var_2)), (arr_40 [i_9] [i_9] [i_10] [i_9] [i_11]))))))) : (0ULL)));
                }
            } 
        } 
    } 
}
