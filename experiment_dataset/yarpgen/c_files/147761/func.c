/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147761
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */int) ((unsigned int) arr_0 [i_0]));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55506)) ? (16125993360980300384ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55504))) >= (arr_3 [i_1])))))));
        arr_5 [i_1] = ((/* implicit */int) ((short) arr_4 [i_1]));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) var_2))));
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((short) ((((/* implicit */long long int) (~(arr_3 [i_2])))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_5))) & (var_12))))));
        arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_4 [i_2])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_2]))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_7 [(unsigned char)0])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
        arr_11 [i_2] = (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_2])), (((((/* implicit */_Bool) 8632447073553307929ULL)) ? (144115188075724800LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-16565)))))))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned int i_4 = 4; i_4 < 13; i_4 += 1) 
            {
                {
                    arr_18 [i_2] [i_3] [i_4] = ((/* implicit */signed char) var_9);
                    var_22 = ((/* implicit */signed char) min((2409130146U), (((/* implicit */unsigned int) (unsigned char)0))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) var_10);
    var_24 = ((/* implicit */unsigned int) ((((3194272237U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41659))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) (!(var_5)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_4)))))))) : (var_10)));
    var_25 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)10029)))) && (((/* implicit */_Bool) var_15)))))));
    /* LoopSeq 3 */
    for (short i_5 = 2; i_5 < 20; i_5 += 4) 
    {
        arr_21 [i_5 - 2] [(unsigned char)7] = ((/* implicit */unsigned char) var_4);
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((min((arr_22 [(short)10]), (((/* implicit */unsigned long long int) arr_23 [i_5 - 1] [i_6] [i_7])))) ^ (((/* implicit */unsigned long long int) ((unsigned int) arr_19 [(short)17]))))) : (((((/* implicit */_Bool) ((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_4)))) ? (arr_22 [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_26 [(unsigned char)5] [i_7] [i_7])) : (((/* implicit */int) var_17)))))))));
                    arr_27 [5LL] [i_7] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_19 [1LL])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_5]))))))) >= (((/* implicit */int) arr_26 [i_6] [i_5 + 3] [(_Bool)1]))));
                    arr_28 [(unsigned char)14] [9LL] [(signed char)8] [i_5] &= ((/* implicit */unsigned long long int) var_16);
                    var_27 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned char) arr_20 [i_5] [(signed char)20]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_24 [i_7]) > (var_2))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7] [(unsigned char)2] [i_7]))) | (arr_22 [(signed char)10]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5] [i_5] [i_5])))));
                }
            } 
        } 
        var_28 -= ((/* implicit */short) min((9104216837963281168ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
    }
    for (unsigned int i_8 = 3; i_8 < 19; i_8 += 1) 
    {
        arr_31 [i_8] [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) ((arr_22 [i_8]) * (((/* implicit */unsigned long long int) var_2))))))));
        arr_32 [i_8] [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_25 [i_8 + 1] [i_8 - 2] [i_8 - 3]) - (arr_25 [i_8 - 2] [i_8 - 3] [i_8 + 1]))))));
        arr_33 [i_8] = ((/* implicit */short) min(((+(2409130146U))), (((/* implicit */unsigned int) 4095))));
        arr_34 [i_8] [i_8] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_6)) ? (arr_30 [i_8]) : (arr_29 [i_8 - 2] [i_8])))));
    }
    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        arr_38 [i_9] [(_Bool)1] = ((/* implicit */unsigned short) ((short) ((unsigned int) 1520253672)));
        arr_39 [i_9] = min((min((((var_17) ? (arr_22 [i_9]) : (((/* implicit */unsigned long long int) var_6)))), (((((/* implicit */_Bool) var_8)) ? (var_1) : (var_11))))), (min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) arr_29 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) 486140682U)) : (var_11))))));
        var_29 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(var_5))))) / (((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_29 [i_9] [i_9])))) * (((var_8) / (var_12)))))));
    }
}
