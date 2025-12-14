/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10600
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_9))));
    var_20 &= ((/* implicit */unsigned short) var_13);
    var_21 = ((/* implicit */signed char) ((2034183194U) > (((/* implicit */unsigned int) min((var_0), (((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) 1786150405U))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_10 [(_Bool)1] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) ((var_8) || (((/* implicit */_Bool) var_7))))))), ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) arr_1 [16LL])) : (1846925555)))));
                            arr_11 [i_0] [i_0] [i_0 + 1] [i_3] |= ((/* implicit */signed char) (~((+(var_9)))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_7 [i_1] [i_3]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 24; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_4 - 1] [i_5 + 1])) * ((~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_14))))))));
                                arr_21 [(_Bool)1] [i_1] [i_1] [i_0] [3LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) (unsigned short)65514))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_17)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) max((var_14), (((/* implicit */unsigned char) var_18))))) : (((/* implicit */int) arr_1 [i_4 + 2]))))) : (((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_4)))));
                                arr_22 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) ((var_13) / (((/* implicit */int) ((var_15) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))), (max((((((/* implicit */_Bool) -2995622000286988561LL)) ? (((/* implicit */unsigned int) var_13)) : (arr_14 [i_0] [(signed char)16] [i_4] [i_6]))), (((/* implicit */unsigned int) min((var_18), (var_17))))))));
                                arr_23 [i_1] [i_1] [i_5] [i_5 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) + (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_4] [i_5 - 1]))) ^ (-2995622000286988575LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            {
                                arr_28 [i_0] [i_1] [i_4 - 1] [i_7] [i_0] = ((/* implicit */signed char) -8681879721797865807LL);
                                arr_29 [i_1] [i_1] [i_0] [(short)17] [11ULL] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */int) (signed char)-115)) : (arr_27 [i_0] [i_8] [i_7] [i_4] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_4)))));
                                arr_30 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (unsigned short)32768)))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) (unsigned short)32751)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_14 [i_0 - 1] [i_1] [i_4] [i_4 - 1]))) : (arr_2 [i_0]))) : (var_11)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        for (unsigned short i_10 = 3; i_10 < 21; i_10 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_11 = 2; i_11 < 20; i_11 += 3) 
                {
                    for (unsigned short i_12 = 1; i_12 < 20; i_12 += 2) 
                    {
                        for (signed char i_13 = 1; i_13 < 21; i_13 += 3) 
                        {
                            {
                                arr_42 [i_9] [(signed char)7] [i_9] [i_12] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) var_14)) != (max((arr_18 [i_13] [i_12 + 1] [i_11 - 1] [i_10 + 1] [i_10] [i_9] [i_9]), (((/* implicit */int) var_14))))))) : (((/* implicit */int) ((min((((/* implicit */unsigned long long int) 2995622000286988565LL)), (arr_33 [i_9] [i_10 + 1] [i_9]))) != (((/* implicit */unsigned long long int) (~(2995622000286988568LL)))))))));
                                arr_43 [i_11] [i_12 - 1] [i_12] = ((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_9] [i_12] [i_9] [i_9] [i_9] [i_9])))))) ? (var_13) : (var_0)))) : (max((((/* implicit */unsigned int) ((signed char) arr_39 [i_13] [i_13 - 1] [i_12 + 1] [i_11 + 2] [i_10] [i_9]))), (arr_31 [i_9])))));
                                var_23 = ((/* implicit */int) ((arr_9 [i_9] [i_9] [i_10] [i_9] [i_12 + 2] [i_13]) / (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                                arr_44 [i_12] = ((/* implicit */int) var_7);
                                arr_45 [i_9] [i_12] [i_11] [i_9] [i_13 + 1] [i_10 - 3] [i_9] = ((/* implicit */int) var_15);
                            }
                        } 
                    } 
                } 
                arr_46 [i_9] [i_10] [i_10] = ((/* implicit */unsigned char) arr_25 [i_9] [(signed char)18] [i_9] [i_9] [i_9] [i_9]);
                arr_47 [9] [i_10] &= ((/* implicit */int) var_11);
                arr_48 [i_10 - 2] [i_9] = ((/* implicit */_Bool) (((((~(1522458778894083059LL))) + (9223372036854775807LL))) >> (((arr_8 [i_9] [i_10 + 1] [22U] [(unsigned short)0]) - (3110385877102399242LL)))));
            }
        } 
    } 
}
