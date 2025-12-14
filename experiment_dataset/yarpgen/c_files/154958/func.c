/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154958
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */long long int) max((max(((~(((/* implicit */int) (signed char)16)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) >= (arr_5 [i_0] [i_1 - 1] [i_1 - 1])))))), (((/* implicit */int) (short)8191))));
                        arr_12 [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (signed char)16))));
                        var_14 ^= ((/* implicit */short) 15571232464869628755ULL);
                        arr_13 [i_0] [(unsigned short)20] [(unsigned short)20] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)-17)) % ((~(((/* implicit */int) (signed char)16))))));
                        var_15 += ((/* implicit */long long int) (signed char)33);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 1) 
        {
            for (unsigned int i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                {
                    arr_19 [i_5] [i_5] [i_5 + 3] [i_0] = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned short) min((arr_11 [i_0] [i_4] [i_5] [i_0] [i_5 - 1] [i_5 + 3]), (arr_16 [i_5 + 1] [i_0] [i_0] [i_0])))), (((unsigned short) (signed char)30)))));
                    var_16 = ((/* implicit */unsigned short) (short)255);
                    arr_20 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_4 + 2] [i_5])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)30)))));
                    arr_21 [i_0] [i_0] [i_5 - 1] = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_4 - 2]);
                }
            } 
        } 
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (short)13452)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) : (-8388567180741274227LL)));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */int) (signed char)-9)) == (((/* implicit */int) (signed char)31))))))) | (((/* implicit */int) (signed char)8))));
    }
    /* LoopSeq 2 */
    for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_17 [i_6] [i_6])) != (((/* implicit */int) ((short) arr_23 [i_6])))))));
        arr_25 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))) : (17915084614952828701ULL)))) ? (((/* implicit */unsigned long long int) ((arr_8 [i_6] [i_6] [i_6]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)255)))))) : ((((-(var_2))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [i_6]))))))));
    }
    for (unsigned int i_7 = 3; i_7 < 20; i_7 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            for (unsigned int i_9 = 2; i_9 < 22; i_9 += 3) 
            {
                for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    {
                        arr_37 [i_7 + 2] [i_8] = ((/* implicit */short) ((min((min((((/* implicit */unsigned int) var_10)), (arr_29 [(unsigned short)10] [i_8]))), (((/* implicit */unsigned int) (signed char)-16)))) & (((unsigned int) arr_32 [i_7] [i_8] [i_9] [i_10]))));
                        arr_38 [13ULL] [i_8] [i_7 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_7 + 2])) << (((((/* implicit */int) arr_26 [i_7 - 2])) - (12731)))))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-37)), ((short)-9052)))) : (((/* implicit */int) max((arr_3 [i_8]), (arr_3 [i_8]))))));
                        arr_39 [i_8] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7] [(short)16]))) ^ (((((/* implicit */_Bool) ((10405414980850521999ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? ((~(var_11))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_35 [i_7 + 3] [i_8] [i_9] [17ULL] [i_7 + 3])))))))));
                        var_20 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((arr_31 [15ULL] [i_8] [15ULL] [i_10]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66)))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_9] [i_9 + 2])) ? (((/* implicit */int) arr_11 [i_10] [i_10] [i_9] [i_8] [i_7] [i_7])) : (((/* implicit */int) (short)256))))) * (((long long int) -1))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            for (signed char i_12 = 2; i_12 < 22; i_12 += 1) 
            {
                {
                    var_21 -= ((/* implicit */int) (!(((/* implicit */_Bool) 3211889690U))));
                    var_22 = ((/* implicit */long long int) arr_34 [i_7] [i_11] [i_7] [i_7]);
                    var_23 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_12]))) : (((((/* implicit */_Bool) arr_8 [23U] [i_11] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62713))) : (arr_18 [(signed char)17] [i_11]))))));
                }
            } 
        } 
    }
}
