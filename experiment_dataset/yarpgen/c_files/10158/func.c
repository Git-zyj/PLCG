/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10158
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
    var_11 = ((/* implicit */unsigned short) min(((unsigned char)214), ((unsigned char)41)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        arr_3 [(short)8] = ((/* implicit */short) var_2);
        var_12 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (unsigned short)42719)) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) arr_0 [i_1]))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (short i_4 = 1; i_4 < 23; i_4 += 4) 
                    {
                        {
                            var_14 = ((((/* implicit */int) arr_13 [i_2] [i_3 + 1] [i_4 - 1] [i_3 + 1] [i_4 - 1])) != (((/* implicit */int) (unsigned char)42)));
                            var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_2] [i_1] [i_3 + 1] [i_3] [i_4 - 1]))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) -1237797107);
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) 6971621333606110761ULL)) ? (arr_4 [i_0] [i_0] [(_Bool)1]) : (arr_12 [i_2] [i_0] [i_0] [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 23; i_5 += 1) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) (unsigned short)59528);
                            var_19 = ((/* implicit */_Bool) arr_12 [i_0] [i_5] [i_2] [i_0] [i_0]);
                            var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_4 [(unsigned char)12] [i_0] [i_2])))))) * (arr_16 [i_0] [i_5 - 1] [i_5 - 1] [i_6 - 1])))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
                {
                    arr_22 [i_0] [i_1] [(_Bool)1] [i_1] [i_1] [i_7] = ((/* implicit */unsigned long long int) (~(var_3)));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        var_21 = (!(((/* implicit */_Bool) (unsigned char)203)));
                        var_22 = ((/* implicit */unsigned char) ((signed char) 11475122740103440866ULL));
                    }
                }
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)42)))) ? ((~(((/* implicit */int) (short)-18583)))) : (((/* implicit */int) var_7)))))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? ((+(((/* implicit */int) (unsigned short)13995)))) : (((/* implicit */int) (unsigned char)166))));
                    var_25 += ((/* implicit */signed char) ((((/* implicit */long long int) 1237797077)) | (arr_16 [i_0] [i_1] [i_2] [i_9])));
                }
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned char) arr_26 [i_1]);
                    arr_31 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [15U] [i_1])) ? (arr_16 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214))))))));
                    arr_32 [14ULL] [i_1] [i_1] [i_10] [i_0] [9] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_29 [i_0]))));
                }
            }
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((int) arr_5 [i_1] [i_1])))));
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_29 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            var_29 = arr_2 [i_0];
        }
        arr_33 [i_0] &= (!(((/* implicit */_Bool) (unsigned char)22)));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */_Bool) 68719474688LL);
        arr_36 [i_11] = ((/* implicit */_Bool) var_9);
    }
    var_31 += ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) 739331601)) || ((_Bool)1))) ? (((/* implicit */int) (short)-9876)) : (((/* implicit */int) (unsigned short)37643)))), (((/* implicit */int) (_Bool)0))));
    var_32 *= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_4))))));
}
