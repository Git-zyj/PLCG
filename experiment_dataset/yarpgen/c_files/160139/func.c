/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160139
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
    var_19 = ((/* implicit */unsigned int) var_14);
    var_20 = (-(0ULL));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_21 = ((/* implicit */int) max((var_6), ((~(((((/* implicit */_Bool) 12607104160460608821ULL)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (5839639913248942795ULL)))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0] [i_0]))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]))) : (((/* implicit */int) var_5))));
        var_23 = ((/* implicit */unsigned long long int) ((60463422) & ((~(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)223))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_24 = ((/* implicit */signed char) var_4);
        var_25 = var_16;
    }
    for (short i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 3; i_3 < 20; i_3 += 3) 
        {
            for (unsigned int i_4 = 4; i_4 < 19; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    {
                        arr_17 [i_2] [i_5] [i_2] [i_5] [i_2] [i_2] = 60463432;
                        arr_18 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */int) var_1);
                        var_26 &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_14 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])) ? (arr_13 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2]) : (arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])))));
                        var_27 = ((/* implicit */long long int) min((((/* implicit */int) arr_5 [i_2])), (((((/* implicit */_Bool) arr_8 [i_3 - 2] [i_4 + 2])) ? (((/* implicit */int) (unsigned short)2126)) : (((/* implicit */int) arr_8 [i_3 - 2] [i_4 + 2]))))));
                    }
                } 
            } 
        } 
        arr_19 [i_2] [i_2] = ((/* implicit */unsigned short) (-(arr_12 [i_2])));
        /* LoopNest 3 */
        for (unsigned char i_6 = 2; i_6 < 19; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) var_1)) : (60463414))))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_2] [i_2] [i_2] [i_2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6 + 2] [i_6 + 2]))) : (((arr_4 [i_2] [i_2]) % (arr_26 [i_8]))))))));
                        arr_28 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2])), (-60463433)))) == (var_18))))) : (var_16)));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) arr_1 [i_2] [i_2]))));
                        var_30 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_0 [i_6 - 2] [i_6 - 2]) & (arr_0 [i_6 - 1] [i_6 - 1])))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))) - (var_16)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        arr_32 [i_9] [(short)0] &= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2132)) ? (((/* implicit */unsigned int) ((int) min((((/* implicit */int) var_3)), (60463433))))) : (max((((unsigned int) (unsigned char)210)), (((/* implicit */unsigned int) arr_6 [i_9]))))));
        var_31 *= max((((/* implicit */unsigned long long int) min((arr_5 [i_9]), (arr_5 [i_9])))), (12607104160460608820ULL));
    }
    /* LoopNest 3 */
    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
    {
        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            for (signed char i_12 = 0; i_12 < 17; i_12 += 4) 
            {
                {
                    var_32 -= (!(((/* implicit */_Bool) -2131517411)));
                    var_33 = ((/* implicit */unsigned long long int) (~(arr_6 [i_10])));
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
                    {
                        arr_42 [i_10] = ((/* implicit */unsigned int) (short)8191);
                        var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)28263))));
                    }
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
                    {
                        arr_46 [i_10] [i_10] [i_10] [i_10] |= var_13;
                        var_35 &= ((/* implicit */signed char) (+(max((((/* implicit */int) (unsigned short)65535)), (-1822049029)))));
                        arr_47 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */int) ((max((((((/* implicit */_Bool) 524287LL)) ? (var_15) : (5839639913248942795ULL))), (((/* implicit */unsigned long long int) var_9)))) % (((/* implicit */unsigned long long int) -1042444031053779849LL))));
                    }
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
                    {
                        var_36 = var_18;
                        var_37 = arr_41 [i_12] [i_12];
                    }
                    var_38 = ((/* implicit */int) min(((-(5839639913248942790ULL))), (((((/* implicit */_Bool) max((((/* implicit */int) arr_15 [i_10] [i_10] [i_10] [i_10])), (arr_20 [i_10] [i_10])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)221), (((/* implicit */unsigned char) var_2)))))) : (((unsigned long long int) var_16))))));
                }
            } 
        } 
    } 
}
