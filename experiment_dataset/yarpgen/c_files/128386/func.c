/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128386
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
    var_20 &= ((/* implicit */unsigned char) ((var_3) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
    var_21 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_10)) ? (-3581870458118456322LL) : (9138687882839958704LL))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (-(arr_1 [i_0] [i_0])));
        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) var_1);
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_23 = ((/* implicit */short) (-(((long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 3])) ? (9138687882839958721LL) : (((/* implicit */long long int) var_18)))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            arr_18 [i_1] [i_1] [i_2] [i_3 - 1] [10ULL] = (~(((/* implicit */int) ((signed char) (+(-9138687882839958705LL))))));
                            var_24 = -9138687882839958729LL;
                            var_25 -= ((/* implicit */unsigned char) (((-(((((/* implicit */unsigned long long int) var_18)) + (17508359525225345527ULL))))) + (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)-28491))) + (-9138687882839958733LL))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_7)), (425937779598994746ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? ((-(((((/* implicit */_Bool) (short)31324)) ? (14631285978856256205ULL) : (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_17 [i_5] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned char) arr_13 [16U]))))))))));
        var_27 = ((/* implicit */signed char) 17508359525225345497ULL);
        var_28 = ((/* implicit */long long int) (unsigned char)178);
    }
    for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_7 = 1; i_7 < 15; i_7 += 1) 
        {
            arr_27 [i_6] [i_7] [(unsigned char)5] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) arr_19 [i_7 + 1])), (((((/* implicit */_Bool) var_12)) ? (arr_20 [i_7 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) >> (((((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (min((((/* implicit */long long int) var_2)), (var_3))) : ((-(-9138687882839958705LL))))) + (5318512870291283026LL)))));
            var_29 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_25 [i_6] [i_7 + 2] [i_7 + 2])) ? (((/* implicit */int) arr_25 [i_6] [i_7 + 2] [i_6])) : (((/* implicit */int) var_6))))));
        }
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_23 [i_6]), (((/* implicit */unsigned long long int) arr_8 [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2234210410U)) ? (((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) var_4)))) << (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 9138687882839958728LL)) : (1544409801156951ULL))) - (9138687882839958718ULL)))))) : (((arr_23 [i_6]) >> (((min((2956817031979719904ULL), (((/* implicit */unsigned long long int) 576460752303423488LL)))) - (576460752303423449ULL)))))));
        var_31 -= ((/* implicit */unsigned int) var_13);
        var_32 = ((/* implicit */unsigned int) arr_9 [i_6] [i_6]);
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6] [i_6]))) + (((((arr_15 [i_6] [i_6] [i_6] [i_6] [i_6]) || (((/* implicit */_Bool) 11097599448733976506ULL)))) ? (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_19)) & (((/* implicit */int) var_19)))))))));
    }
    for (short i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        arr_31 [i_8] = ((/* implicit */unsigned int) arr_21 [i_8]);
        var_34 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9138687882839958704LL))));
    }
    var_35 = ((((/* implicit */_Bool) 2060756885U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))) <= (((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))) : (-22LL))))))) : (((((/* implicit */_Bool) ((938384548484206084ULL) >> (((((/* implicit */int) var_15)) - (82)))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
}
