/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162621
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
    var_20 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        arr_11 [(unsigned char)7] [i_1] [i_2] [i_1] [4U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -206237345))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            arr_15 [i_1] [i_1] = ((/* implicit */int) arr_7 [(signed char)4] [i_1] [12] [1LL]);
                            var_21 = ((/* implicit */signed char) arr_12 [i_0] [6U] [6U] [i_1] [i_2] [i_3] [i_4]);
                            var_22 *= (short)20224;
                        }
                        for (unsigned short i_5 = 1; i_5 < 16; i_5 += 4) 
                        {
                            var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_9 [i_0] [i_0 - 2] [(_Bool)1] [i_1 + 2] [i_5 + 1]), (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) var_14)) : (((var_7) - (((472056114305209512LL) - (((/* implicit */long long int) var_14))))))));
                            var_24 += ((/* implicit */_Bool) (~(max((arr_10 [i_0 - 3] [i_3]), (((/* implicit */long long int) (_Bool)1))))));
                            var_25 &= ((/* implicit */unsigned int) ((short) (_Bool)1));
                            var_26 = ((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1] [i_1]);
                        }
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((-2088438231839139750LL), (((/* implicit */long long int) var_16))))) ? (min((((/* implicit */unsigned long long int) -2713499059304950320LL)), (17341140816188684120ULL))) : (1195176128951627293ULL))))));
                    }
                    for (unsigned int i_6 = 4; i_6 < 15; i_6 += 1) 
                    {
                        arr_23 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)34573))));
                        var_27 ^= ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (((((/* implicit */int) (signed char)103)) << (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) min(((short)13575), (((/* implicit */short) var_8)))))))) : ((+(2424959665U))));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) arr_7 [i_0] [i_1 - 1] [i_2] [i_6 - 4]))));
                        arr_24 [i_0] [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))) <= (arr_12 [i_0] [i_0] [i_1] [i_0] [11U] [i_6] [i_1])));
                    }
                    for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((unsigned long long int) max(((-(3283070385U))), (((/* implicit */unsigned int) (unsigned short)49775)))));
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) arr_0 [i_0]))));
                        var_31 += ((/* implicit */short) (-(((((/* implicit */long long int) min((((/* implicit */int) var_12)), (-396786878)))) - (((long long int) arr_1 [i_2]))))));
                        var_32 += ((/* implicit */_Bool) ((int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)10))));
                        arr_29 [i_7] &= (!(((/* implicit */_Bool) var_5)));
                    }
                    var_33 = ((((/* implicit */_Bool) (unsigned short)31953)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((-6297296772753000321LL), (((/* implicit */long long int) var_15)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)64025)) << (((((/* implicit */int) (unsigned char)220)) - (210)))))) ? (((/* implicit */int) min(((unsigned short)64030), (((/* implicit */unsigned short) (short)30850))))) : (((/* implicit */int) arr_17 [i_0] [10] [i_1] [i_0] [i_1 - 1])))));
                    var_34 = ((/* implicit */long long int) arr_21 [i_0] [i_1] [i_1] [i_2]);
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((unsigned char) (~(((/* implicit */int) (short)31671))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                {
                    var_36 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) max(((unsigned short)55556), (((/* implicit */unsigned short) (_Bool)0)))))) | (((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 3]))))));
                    arr_36 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(short)7] [i_8] [i_9])) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [0] [i_8]))))) : (var_2)))) ? (max((arr_13 [7] [i_8] [7] [i_0] [i_0 - 2] [i_0]), (arr_13 [i_9] [i_8] [10LL] [i_8] [i_8] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1503006675951769785LL)) ? (((/* implicit */int) (unsigned short)1509)) : (((/* implicit */int) (short)31671)))))));
                }
            } 
        } 
        var_37 = max(((-(min((((/* implicit */unsigned int) var_5)), (var_19))))), (((/* implicit */unsigned int) arr_30 [i_0])));
        var_38 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (short)1786)), (2810148285U)));
    }
    var_39 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((+(((((/* implicit */long long int) 634075798)) / (var_3)))))));
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        for (signed char i_11 = 2; i_11 < 14; i_11 += 2) 
        {
            {
                var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_10])) ? (((((/* implicit */long long int) ((/* implicit */int) (short)23054))) - (-8099201296704751371LL))) : (arr_10 [i_10] [i_10])));
                /* LoopNest 3 */
                for (unsigned char i_12 = 2; i_12 < 14; i_12 += 4) 
                {
                    for (short i_13 = 2; i_13 < 14; i_13 += 2) 
                    {
                        for (short i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned char) var_7);
                                var_42 = ((/* implicit */int) (short)-29854);
                            }
                        } 
                    } 
                } 
                arr_49 [i_10] [i_10] [i_10] = ((max((986640570U), (((/* implicit */unsigned int) (short)18351)))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_11] [i_11] [i_11 + 1] [i_11]))));
            }
        } 
    } 
}
