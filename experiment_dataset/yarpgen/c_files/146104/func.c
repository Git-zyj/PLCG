/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146104
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_0] [(signed char)3] [i_0] = ((/* implicit */unsigned int) (signed char)-106);
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((signed char) (~(-1382174120)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 4; i_4 < 14; i_4 += 4) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_1] [(unsigned char)5] [i_4 - 3] = ((/* implicit */unsigned int) ((short) min((((unsigned int) var_8)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) (signed char)-88)) : (var_1)))))));
                            arr_17 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_6 [i_1] [i_1 + 3]))))) / (((((/* implicit */int) arr_14 [i_0] [i_1 + 3] [i_0] [i_3])) | (((/* implicit */int) arr_8 [i_1 + 2] [i_1 - 3] [i_4 - 1] [i_4 - 4]))))));
                        }
                        for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            arr_21 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (+((~(arr_4 [(unsigned short)3] [i_1 + 3])))));
                            var_15 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((unsigned long long int) -7824145181828325631LL)) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4023981360U))))))))) < (((((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_3] [i_5] [i_3] [i_1 - 3])) & (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)91)), ((unsigned char)255))))))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [(short)15] [(short)15] [i_0])) + (((/* implicit */int) arr_18 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_2])) ? (min((-1944628317977556410LL), (-1LL))) : (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((unsigned int) min((4294967295U), (((/* implicit */unsigned int) (_Bool)1))))))));
                            var_17 = ((/* implicit */unsigned long long int) max(((+((-(((/* implicit */int) var_4)))))), ((+(min((var_1), (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] [(_Bool)1]))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
                    {
                        arr_25 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_5 [i_0] [i_0] [i_2]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)5821)) : (var_5)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) * (arr_19 [i_0])))));
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) arr_3 [i_0]));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_8 = 2; i_8 < 13; i_8 += 3) 
                        {
                            var_18 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)255)) ? (arr_23 [i_7] [i_0] [i_1] [i_8 + 3] [i_8 - 1]) : (arr_23 [i_7] [i_0] [i_7] [i_8 + 3] [i_0]))) * (((arr_23 [i_7] [i_2] [i_7] [i_8 + 3] [i_7]) / (var_11)))));
                            var_19 -= ((((arr_4 [i_8 + 2] [i_1 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_7] [i_1] [i_7] [i_7] [i_7] [i_7] [i_1]))))) == (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)174))))));
                            arr_33 [i_0] = ((/* implicit */unsigned char) min(((~(((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))))))), (((/* implicit */unsigned long long int) ((unsigned int) min((var_4), (((/* implicit */unsigned short) (signed char)73))))))));
                            arr_34 [i_0] = ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (4163967708U)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (var_11))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0] [(signed char)2])) << (((9544065878985563698ULL) - (9544065878985563682ULL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-3)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_4))))) : (((arr_5 [i_2] [i_0] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))) : (1542135035U))))))));
                            arr_39 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) var_5)) & (arr_4 [i_1] [i_1 + 1]))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) arr_29 [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 3])) : (((/* implicit */int) var_9)))))));
                        }
                        arr_40 [i_0] [i_0] [(short)15] [(short)15] = ((/* implicit */long long int) (+(((8902678194723987917ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)511)) ? (arr_13 [i_0] [i_1 + 3] [i_1 + 3] [i_1] [i_1 + 3]) : (6294650245564188604LL))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967293U)) ? (arr_42 [i_0] [i_1] [i_0] [i_1 - 2]) : (((/* implicit */long long int) 1836532099U))));
                        arr_45 [i_10] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)5837))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) ((_Bool) (short)32736))) : (((/* implicit */int) (!(((/* implicit */_Bool) 8902678194723987913ULL))))))))));
                    }
                    var_23 -= ((/* implicit */unsigned char) min((((((/* implicit */int) arr_30 [10] [i_1 - 2] [i_0])) - (((/* implicit */int) arr_30 [(_Bool)1] [i_1 - 2] [(_Bool)1])))), ((+(((/* implicit */int) arr_22 [(short)4] [i_1 + 3] [i_1 + 3] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
}
