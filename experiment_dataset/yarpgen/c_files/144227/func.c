/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144227
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_16))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */int) var_9)))))) * (((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned long long int) var_4))));
        arr_2 [i_0] = ((((((/* implicit */_Bool) 1692505515U)) ? (((((/* implicit */_Bool) var_3)) ? (-2406941489298395009LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) + (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_9))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_0))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << (((((int) var_13)) - (14131109)))));
    }
    for (unsigned char i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    arr_11 [i_1 - 2] [i_2] [i_1 - 2] = ((/* implicit */unsigned char) 1138368853413879335LL);
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (var_10) : (((/* implicit */int) min((var_9), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((231745294) / (((/* implicit */int) var_16))))) ? (((/* implicit */int) arr_9 [i_1 + 3] [i_1 + 2])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_1 + 3] [i_1]))))))) / (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1])) ? (4748753326714112564ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                arr_18 [i_1] [i_4] [i_4] [i_5] = ((/* implicit */short) (((((!(((/* implicit */_Bool) arr_4 [i_1])))) || (((/* implicit */_Bool) arr_13 [i_1 + 1])))) ? (((((/* implicit */_Bool) var_3)) ? (arr_5 [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 + 1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_14 [i_5]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60388)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))))));
                arr_19 [i_5] = (((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_7 [i_5] [i_1] [i_1]), (((/* implicit */short) (_Bool)1)))))))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_9 [i_4] [i_5]))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_6 = 1; i_6 < 21; i_6 += 4) 
            {
                arr_23 [i_4] = ((((/* implicit */_Bool) ((((-2406941489298395009LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_16 [i_1] [i_1 + 1] [i_1 - 2] [i_6 - 1])) - (41943)))))) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */int) arr_13 [i_6 + 1])) << (((var_14) - (16936283948787220875ULL))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 3] [i_1 + 1]))) | (arr_17 [i_1 + 1] [i_1]))))));
                            var_26 ^= var_10;
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) arr_13 [i_1 + 1]);
            }
        }
        var_28 = ((/* implicit */short) (unsigned short)65535);
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) ((short) arr_10 [i_9 - 1] [i_9 - 1] [i_9 - 1]));
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((((/* implicit */_Bool) arr_24 [i_9] [i_9 - 1] [i_9 - 1] [i_9])) ? (((/* implicit */int) arr_10 [i_9] [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) var_0)))) : (((var_4) - (var_4)))));
    }
    for (unsigned char i_10 = 2; i_10 < 9; i_10 += 1) 
    {
        var_31 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_12))));
        arr_36 [i_10] = ((/* implicit */signed char) arr_24 [i_10] [i_10] [i_10] [i_10]);
        var_32 = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_1)) ^ (2145008289)))));
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            for (unsigned short i_12 = 2; i_12 < 7; i_12 += 2) 
            {
                {
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_10 - 2] [i_12 + 1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_20 [i_10 + 1] [i_12 + 3])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 1; i_13 < 8; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 1; i_14 < 9; i_14 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) -2145008289)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_42 [i_11] [i_12] [i_13])))))) != ((-(((/* implicit */int) var_15))))));
                                var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_13 - 1] [i_13 + 3] [i_12])) ? (((/* implicit */int) arr_15 [i_13] [i_13 - 1] [i_11])) : (((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) var_11)))))));
                            }
                        } 
                    } 
                    var_36 = var_17;
                }
            } 
        } 
    }
    var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) var_15))));
}
