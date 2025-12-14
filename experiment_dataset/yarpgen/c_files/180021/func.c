/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180021
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
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_3] [i_2 + 1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3574692557008607601ULL)) ? (((/* implicit */int) arr_9 [i_0] [i_3])) : (((/* implicit */int) arr_0 [i_0 - 2]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0 - 1] [i_3])))))));
                        var_10 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) min((arr_6 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */unsigned long long int) arr_2 [i_0] [16LL] [i_0])))))) >> (((max((((/* implicit */long long int) 1716530738)), (((long long int) var_2)))) - (1716530724LL)))));
                        arr_11 [i_3] [i_1 + 1] = ((/* implicit */unsigned char) min((min((arr_6 [i_0 + 2] [i_0] [i_1 + 1] [i_2]), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_0))));
                    }
                } 
            } 
        } 
        var_11 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (short)-4583)), (0ULL)));
    }
    for (int i_4 = 2; i_4 < 17; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (signed char i_6 = 2; i_6 < 17; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (-4031307726724391530LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51863)))));
                                arr_24 [i_4] [i_5] [i_6] [i_5] [i_4] = ((/* implicit */unsigned short) arr_21 [(unsigned short)5] [(short)9] [2ULL]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 3; i_9 < 16; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            {
                                arr_29 [i_5] [i_5] [i_6] [i_9] [i_10] = ((/* implicit */_Bool) arr_3 [i_4]);
                                arr_30 [i_4] [i_5] [i_5] [i_9] [i_5] = ((/* implicit */_Bool) max((var_9), (((((/* implicit */_Bool) ((arr_12 [i_4] [i_5]) ? (((/* implicit */int) arr_15 [i_4] [i_5])) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 4202703587U)) : (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1716530738)) % (var_5))))))));
                                var_13 = ((/* implicit */unsigned int) min((((unsigned long long int) max((((/* implicit */unsigned long long int) var_2)), (18446744073709551603ULL)))), (((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) arr_9 [i_4] [i_5]))))));
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) 18446744073709551599ULL))));
                                arr_31 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_13 [i_4] [i_4]))) ? (max((((/* implicit */long long int) arr_13 [i_5] [i_4])), (((((/* implicit */_Bool) 6267693916213744115ULL)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_4]))))))) : (max((var_5), (((/* implicit */long long int) (unsigned short)13673))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 -= ((/* implicit */int) ((2318819808U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3048)))));
        var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_20 [i_4])), (min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) arr_2 [i_4] [2LL] [i_4]))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 2) 
    {
        for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_36 [i_13] [i_12] [i_13]) : (((/* implicit */unsigned int) var_4))))), (min((arr_37 [i_11] [i_12] [i_13]), (arr_37 [i_13] [i_12] [i_13])))));
                    arr_40 [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (arr_36 [i_11] [(signed char)6] [i_13])))), (((((/* implicit */_Bool) arr_38 [i_13] [i_12] [2LL] [i_13])) ? (var_5) : (arr_37 [(unsigned char)1] [i_12] [i_13])))))) ? (((unsigned int) ((unsigned long long int) 22ULL))) : (arr_35 [i_13] [i_11])));
                    var_18 = ((/* implicit */unsigned short) arr_37 [i_11] [i_11] [i_11]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) 33554176)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)163)) >> (((((/* implicit */int) (unsigned short)13660)) - (13631)))))) : (((long long int) 3ULL)))));
}
