/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119869
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((var_8) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)1))))) : (((((unsigned long long int) (signed char)68)) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_8)), ((signed char)106)))))))));
                    var_12 = var_0;
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned char) max((min((((unsigned int) var_7)), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned int) min((min((((/* implicit */int) var_7)), (2094867047))), (((/* implicit */int) var_7)))))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((((/* implicit */_Bool) -1905772079)) ? (arr_8 [i_3]) : (var_5))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 2; i_5 < 21; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(max((-2094867050), (2094867048)))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)206))) : (((/* implicit */int) var_9))));
                                arr_22 [i_7] [i_4] [i_5] [i_6] [i_7] [i_6] = ((/* implicit */unsigned short) (+((+(((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)49)))))))));
                                arr_23 [i_7] [11ULL] [20ULL] [(unsigned short)21] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)121)) * (((/* implicit */int) (signed char)121))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_19 [i_4] [i_5] [i_5 - 2] [i_5 - 2] [14] [23ULL] [i_5 + 1])))) >= (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (var_6)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_5 - 2] [16] [i_7])))))))));
                                arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((8191ULL), (((/* implicit */unsigned long long int) var_8)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_8)), (var_7))))) : (((min((arr_8 [i_6]), (((/* implicit */unsigned long long int) var_8)))) >> (((((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))))) - (4213911789894958344ULL)))))));
                            }
                        } 
                    } 
                    arr_25 [i_5] [18ULL] [i_5] [i_5] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned short)3810))))));
                    arr_26 [i_3] = max((((/* implicit */unsigned long long int) ((int) arr_8 [i_5 - 1]))), (((((/* implicit */_Bool) arr_20 [i_5 + 2] [4] [i_5 - 1] [i_5 + 1] [(short)14] [i_5 + 1] [i_5])) ? (min((var_4), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_11)))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 22; i_9 += 4) 
                        {
                            {
                                arr_31 [i_3] [i_4] [i_5] [i_4] [i_9] = ((/* implicit */_Bool) (+((-((~(((/* implicit */int) var_9))))))));
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (unsigned short)35495)) : (((/* implicit */int) ((signed char) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_32 [i_3] = ((((/* implicit */_Bool) min((max((var_4), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (-(2094867047))))))) ? (max((((/* implicit */unsigned long long int) var_2)), (arr_8 [i_5 + 1]))) : (((((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)121)) ? (var_1) : (var_0)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_11 = 2; i_11 < 23; i_11 += 4) 
        {
            for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) (unsigned char)3);
                    arr_40 [i_10] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                }
            } 
        } 
        arr_41 [i_10] = (+(4503599627370495LL));
        arr_42 [i_10] [i_10] = ((/* implicit */int) (((-(var_10))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_11)) : (var_10)))));
    }
    /* LoopSeq 1 */
    for (short i_13 = 0; i_13 < 17; i_13 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (var_4))))), (max((((/* implicit */int) ((unsigned short) arr_13 [i_13] [i_13] [(unsigned char)17]))), ((+(((/* implicit */int) (unsigned char)247)))))))))));
        var_19 = ((/* implicit */int) (signed char)127);
        var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-114)) ? (-2094867047) : (((/* implicit */int) (_Bool)1))))))), (var_5)));
        /* LoopNest 3 */
        for (unsigned int i_14 = 0; i_14 < 17; i_14 += 4) 
        {
            for (long long int i_15 = 2; i_15 < 13; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 1; i_16 < 15; i_16 += 4) 
                {
                    {
                        arr_56 [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (unsigned char)231)) / (((/* implicit */int) var_7)))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((-2094867051) & (((/* implicit */int) var_9))))), (arr_43 [i_15]))))));
                        var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_13] [i_14] [i_15 + 3] [1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2094867038)))))) : (arr_51 [i_15 + 4] [i_15 - 1] [i_15 + 1] [i_16 - 1])))) & (min((((7272159760593231583LL) << (((((/* implicit */int) (_Bool)1)) - (1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 16391398681427624188ULL)) && (((/* implicit */_Bool) var_4)))))))));
                        arr_57 [11LL] [11LL] [(short)14] [11LL] [i_14] = ((/* implicit */_Bool) ((short) min(((_Bool)1), (((_Bool) var_0)))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_2))));
    }
}
