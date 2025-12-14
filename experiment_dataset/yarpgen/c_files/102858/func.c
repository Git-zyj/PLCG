/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102858
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
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((long long int) var_2)) == (((/* implicit */long long int) var_7)))))));
    var_20 = ((/* implicit */long long int) ((unsigned char) var_17));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_21 += ((/* implicit */long long int) ((_Bool) ((signed char) var_6)));
        arr_4 [i_0] = ((/* implicit */long long int) ((arr_1 [i_0]) % (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) var_13))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_23 = ((/* implicit */short) ((((((/* implicit */int) arr_6 [1U] [i_1])) + (2147483647))) >> (((((/* implicit */int) var_1)) - (26779)))));
        var_24 = ((/* implicit */unsigned long long int) var_9);
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) var_12);
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                for (unsigned int i_5 = 1; i_5 < 18; i_5 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) arr_17 [i_5 + 1] [i_5] [i_5 - 1] [(_Bool)1] [i_5] [i_5 + 1]);
                        arr_18 [i_2] [i_2] [i_5] = ((/* implicit */long long int) arr_14 [i_2] [i_2] [i_2]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_26 = var_0;
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_2] [i_5 + 2] [1LL])) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)45842))))) : (((((/* implicit */_Bool) 623137890U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))) : (-1335667227947061121LL)))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 2; i_7 < 19; i_7 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_12 [i_7])) : (((/* implicit */int) var_13))))))));
                            arr_24 [i_5] = ((/* implicit */signed char) arr_14 [i_2] [(unsigned char)7] [(unsigned char)7]);
                            var_29 = ((/* implicit */long long int) ((unsigned char) var_10));
                            var_30 = ((/* implicit */unsigned int) max((var_30), ((-(var_7)))));
                        }
                        for (signed char i_8 = 2; i_8 < 19; i_8 += 3) /* same iter space */
                        {
                            arr_27 [(_Bool)1] [i_3] [i_5] [(signed char)7] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) ((short) var_6)))));
                            var_31 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_26 [i_5 - 1] [i_5] [i_5] [(unsigned char)7] [i_5])) : (((/* implicit */int) arr_26 [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_9 = 3; i_9 < 18; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 3) 
            {
                for (unsigned short i_11 = 1; i_11 < 20; i_11 += 1) 
                {
                    {
                        arr_35 [2U] [16U] [i_10 - 1] [i_9] = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_10 - 1] [i_9] [i_10])) ^ (((/* implicit */int) arr_33 [4LL] [i_2] [i_9] [i_10 + 1] [i_11 + 1]))));
                        var_32 -= ((/* implicit */signed char) ((((((long long int) arr_30 [16LL] [(unsigned short)18] [4U])) + (9223372036854775807LL))) << (((arr_30 [i_2] [i_2] [i_11]) - (12403946201463472257ULL)))));
                    }
                } 
            } 
            arr_36 [i_9] [i_9] = ((/* implicit */long long int) ((((_Bool) arr_32 [i_9 - 1] [i_2])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_14 [i_2] [i_9 - 3] [i_9 - 3]))) : (((/* implicit */unsigned int) (~(var_8))))));
        }
    }
}
