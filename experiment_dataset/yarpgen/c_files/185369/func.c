/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185369
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [(signed char)19] [i_0] [i_0 - 4] [i_0] = ((/* implicit */int) (((+(var_13))) + (((/* implicit */long long int) (+(((/* implicit */int) max((var_15), (((/* implicit */short) (signed char)25))))))))));
                    arr_9 [(unsigned char)7] = ((/* implicit */unsigned short) 1789815473U);
                }
            } 
        } 
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) % ((~(var_19)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 3] [i_0 - 3] [i_0 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 12127114871183877262ULL))))));
        arr_10 [i_0 - 1] = ((/* implicit */_Bool) var_19);
    }
    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 2) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned short) max(((+(arr_7 [i_3 + 3]))), (((/* implicit */int) (signed char)25))));
        arr_15 [i_3 + 4] = ((/* implicit */unsigned short) var_2);
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 4) 
            {
                for (short i_6 = 1; i_6 < 11; i_6 += 2) 
                {
                    {
                        arr_24 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5] [i_5 - 1] = ((/* implicit */unsigned char) arr_23 [i_3] [i_3 + 2] [i_4]);
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            arr_29 [i_3 + 2] [i_4] [i_5 - 2] [i_6] [11ULL] = ((/* implicit */unsigned long long int) ((unsigned short) (signed char)-25));
                            arr_30 [i_4] [i_4] [i_4] |= ((/* implicit */unsigned short) (~(arr_7 [(short)0])));
                            arr_31 [i_3 + 2] [i_3] [i_5] [i_6] [i_7] [(unsigned char)11] [i_3] |= ((/* implicit */unsigned char) (signed char)61);
                        }
                        arr_32 [i_3] [i_4] [i_3] = ((/* implicit */int) var_1);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 3; i_9 < 14; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) (+(((/* implicit */int) ((max((var_8), (((/* implicit */unsigned long long int) (unsigned short)0)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_9 - 3] [i_9 - 3] [i_4] [i_9 + 1] [i_9 - 3]))))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (var_5)));
                            var_23 |= ((/* implicit */unsigned int) var_1);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 3; i_11 < 14; i_11 += 2) 
                {
                    for (long long int i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        {
                            arr_46 [i_12] [i_11] [i_8] [i_11] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)46))));
                            var_24 = ((/* implicit */unsigned long long int) (unsigned short)22397);
                            arr_47 [(short)0] [i_11] [i_11] [i_11] [i_12] = arr_38 [i_3];
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (signed char)51))));
                        }
                    } 
                } 
                arr_48 [i_3] [i_4] [i_4] [i_8] |= ((/* implicit */_Bool) (unsigned char)0);
            }
            /* LoopNest 3 */
            for (short i_13 = 0; i_13 < 15; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 4) 
                {
                    for (unsigned short i_15 = 1; i_15 < 14; i_15 += 4) 
                    {
                        {
                            var_26 += ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3 + 1] [i_3 + 2]))) ^ (var_19)))))))));
                            arr_57 [i_3] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_26 [i_3 + 4] [i_3 - 1])) > (((/* implicit */int) arr_23 [i_3 + 3] [i_3 + 3] [i_15 + 1])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_16 = 2; i_16 < 14; i_16 += 3) 
        {
            var_27 += ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) arr_45 [i_3] [i_3 + 1])) : (((/* implicit */int) arr_45 [i_3] [i_3 - 1])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_45 [i_3] [i_3 + 3])) : (((/* implicit */int) arr_45 [i_3] [i_3 + 2]))))));
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) 3153247053885195887ULL)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)8))))) ? (arr_35 [i_3 - 1] [i_16] [i_3 + 4]) : (((/* implicit */long long int) ((var_12) / (((/* implicit */int) (signed char)24))))))) : (((/* implicit */long long int) ((unsigned int) var_5)))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_17 = 4; i_17 < 12; i_17 += 1) 
        {
            arr_62 [i_17] [(signed char)4] [i_17] = ((/* implicit */signed char) ((unsigned short) (-(7ULL))));
            arr_63 [i_3 + 3] [(short)11] [i_17] = ((/* implicit */int) var_9);
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_17 - 2])) ? (((/* implicit */int) arr_18 [i_17 - 2])) : (arr_6 [i_17 - 2] [i_17 + 1] [i_3 + 4])))) : (((((/* implicit */_Bool) arr_0 [i_17 - 2])) ? (arr_0 [i_17 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-39))))))))));
            arr_64 [i_17] [i_17] [i_3 + 3] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_18))))));
        }
        arr_65 [i_3] [i_3 + 4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((max((var_7), (((/* implicit */unsigned long long int) 122880U)))) + (((/* implicit */unsigned long long int) var_0)))))));
    }
    var_30 = ((/* implicit */unsigned short) var_4);
}
