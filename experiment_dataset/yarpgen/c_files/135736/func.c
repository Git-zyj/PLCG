/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135736
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
    var_11 = ((/* implicit */unsigned long long int) var_8);
    var_12 = ((/* implicit */int) (unsigned short)16284);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) var_10);
                    arr_9 [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-23751)) ? (var_9) : (1070565019557980220LL)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [(_Bool)1])) : (5291497679439692095ULL)))))) ? ((+(((/* implicit */int) (short)18596)))) : ((+(((/* implicit */int) arr_7 [i_0 + 4])))));
                    var_14 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_2])), (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)23744))))) : (var_10)))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6410120792197179360LL)))))) == (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0]))))), (min((arr_8 [10LL] [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2] [i_3]))))))));
                        var_15 = ((/* implicit */signed char) ((((arr_6 [i_1 + 1] [11U] [11U]) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) ? (((((((/* implicit */int) (short)13757)) > (((/* implicit */int) (_Bool)0)))) ? (arr_2 [i_0 + 1]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_3 [i_0] [i_0 - 2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) : (((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)251)), ((short)-25628)))) ? (min((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_0] [i_1]))) : (min((((/* implicit */unsigned long long int) (short)-25628)), (var_0)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) var_9);
        arr_15 [i_4] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_4]))))) ? (((/* implicit */int) (signed char)117)) : (((((/* implicit */_Bool) max((var_6), ((signed char)-118)))) ? (((/* implicit */int) (short)6142)) : (((/* implicit */int) min((((/* implicit */short) (signed char)-94)), (var_4)))))));
        arr_16 [i_4] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_4] [i_4])) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (short)13757)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2750)) && (((/* implicit */_Bool) arr_0 [i_4] [i_4])))))))) ? (max((arr_5 [i_4] [i_4]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_4] [(signed char)13])) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((arr_1 [i_4]) && (((/* implicit */_Bool) 17423335931031537443ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 10; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((((((/* implicit */int) (signed char)-61)) + (2147483647))) << (((((/* implicit */int) (signed char)115)) - (115))))))))));
                    arr_23 [i_4] [i_4] [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_5] [i_5 + 3])) ? (((/* implicit */unsigned long long int) 6079442310665731319LL)) : (arr_8 [i_6] [i_5 - 1]))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)12819)))))));
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4] [i_4])) || (((((/* implicit */_Bool) arr_18 [i_4])) && ((!(((/* implicit */_Bool) var_1))))))));
    }
}
