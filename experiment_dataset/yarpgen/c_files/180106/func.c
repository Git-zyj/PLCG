/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180106
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25))) | (1939114135U)));
                    var_12 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1])))), ((~(((/* implicit */int) arr_7 [i_2 + 1] [i_2] [i_2] [i_2 + 1]))))));
                    arr_8 [i_2] = ((/* implicit */unsigned long long int) 2461001053U);
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((unsigned int) ((4762242631581210916ULL) << (((1804551244) - (1804551229)))))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (-(2596229532U))))));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((unsigned long long int) (_Bool)1))));
                            var_16 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (~(arr_11 [(_Bool)1] [i_1] [i_1] [i_1])))), (arr_12 [i_0] [15U] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)230)))))))));
                            var_17 = ((/* implicit */unsigned int) var_5);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    var_18 = min((((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_1] [i_0] [i_1]), (arr_7 [i_0] [i_0] [i_1] [i_5])))), (((4762242631581210916ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [(_Bool)1]))))));
                    var_19 = ((/* implicit */unsigned long long int) (unsigned char)231);
                }
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(-2147483620))) >> (((((/* implicit */int) (unsigned char)147)) - (135)))))) ? ((~(var_8))) : (((/* implicit */unsigned int) var_3))));
    /* LoopSeq 1 */
    for (unsigned int i_6 = 4; i_6 < 21; i_6 += 3) 
    {
        arr_18 [i_6] [i_6] = ((/* implicit */unsigned long long int) 2461001053U);
        var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_6 - 1]))))) != (var_4)));
    }
    var_22 = ((/* implicit */int) (~(18446744073709551606ULL)));
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        for (unsigned int i_8 = 1; i_8 < 9; i_8 += 1) 
        {
            {
                var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [i_8 + 3] [18ULL])), (var_6)))), (min((13538988081824013585ULL), (((/* implicit */unsigned long long int) ((2558579230957012466ULL) != (4907755991885538024ULL))))))));
                /* LoopSeq 2 */
                for (short i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    var_24 ^= ((/* implicit */signed char) (short)(-32767 - 1));
                    var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)(-32767 - 1)))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 3; i_11 < 10; i_11 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) var_5);
                        var_27 = ((/* implicit */unsigned char) var_5);
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 1) 
                    {
                        arr_37 [i_7] [i_8 - 1] [i_8 - 1] [i_8] [i_10] [(unsigned short)1] = ((/* implicit */unsigned short) arr_24 [i_7] [i_8]);
                        var_28 = ((/* implicit */signed char) (~(4100383630114147819ULL)));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        for (unsigned long long int i_14 = 1; i_14 < 11; i_14 += 1) 
                        {
                            {
                                arr_43 [i_14] [i_14] [(unsigned char)11] [i_14 - 1] [i_14] [i_14] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) 16758294565345452492ULL)))) % (-1850156125617958662LL)));
                                var_29 = ((/* implicit */signed char) (_Bool)1);
                                arr_44 [i_7] [i_7] [i_7] [i_8] [i_7] = arr_35 [i_7] [i_7] [i_7] [i_13] [i_13];
                                arr_45 [i_8] [9LL] [8LL] [i_13] [9LL] [i_13] = ((/* implicit */signed char) 2461001053U);
                            }
                        } 
                    } 
                    var_30 = (+(((2461001053U) / (var_8))));
                    arr_46 [i_8] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_11 [i_7] [i_8] [i_10] [(unsigned char)2])) ? (var_9) : (var_9)))));
                }
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned int i_16 = 4; i_16 < 9; i_16 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_48 [(unsigned char)3] [i_8] [i_8]))))) ? (((/* implicit */int) (_Bool)1)) : (var_3)))), (((((/* implicit */_Bool) 18178069185320463244ULL)) ? (-1850156125617958662LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3))))))))));
                            arr_53 [i_16] [i_8] [(signed char)4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_7])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_52 [i_15])), (arr_51 [i_7] [i_7] [i_15] [i_8])))) : (min((-1850156125617958650LL), (((/* implicit */long long int) arr_52 [i_8 + 1]))))));
                            var_32 += ((/* implicit */unsigned char) arr_26 [i_7] [i_7] [i_7]);
                        }
                    } 
                } 
            }
        } 
    } 
}
