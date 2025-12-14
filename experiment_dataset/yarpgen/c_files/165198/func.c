/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165198
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((arr_0 [i_1]) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (18374686479671623680ULL)))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) var_0)) : (var_8)))) ? (((((/* implicit */int) arr_1 [i_1])) + (((/* implicit */int) arr_3 [i_0 + 1])))) : (((/* implicit */int) (short)17537))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_16);
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_20 += ((/* implicit */long long int) 0ULL);
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            for (unsigned char i_4 = 3; i_4 < 11; i_4 += 4) 
            {
                {
                    arr_13 [i_2] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_3 - 1] [i_3 - 1]) * (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_8)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : ((-(arr_12 [i_3 + 1] [i_4 + 1] [i_4 - 2])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) var_4);
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-17537)) && (((/* implicit */_Bool) 6841591006598788095ULL))))) | (((/* implicit */int) arr_5 [i_3 + 1]))));
                    }
                    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) arr_8 [i_2] [i_2]);
                        var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2]))) < ((+(min((((/* implicit */unsigned long long int) 8530408)), (15449195493359316251ULL)))))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8757540338257902291ULL)) ? (((((/* implicit */_Bool) 8239250057149466390LL)) ? (((/* implicit */unsigned long long int) 1708522836U)) : (10843255932751807173ULL))) : (((/* implicit */unsigned long long int) 4194240LL))))) ? (((/* implicit */unsigned long long int) (+(7U)))) : ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_5)) : (var_8)))))));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((unsigned short) var_4)))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (3353820695U)))) ? (((((arr_12 [i_6] [i_6] [6U]) + (((/* implicit */unsigned long long int) var_12)))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_2] [i_6 + 3]))))))) : (((/* implicit */unsigned long long int) var_10))));
                    }
                    for (unsigned int i_7 = 1; i_7 < 9; i_7 += 2) /* same iter space */
                    {
                        arr_24 [i_2] [i_2] [i_2] [(unsigned char)0] [(unsigned char)0] [i_7 + 4] = ((/* implicit */unsigned short) min((((unsigned long long int) var_8)), (((unsigned long long int) arr_19 [i_3] [i_3 + 1] [i_4 - 1] [i_7 + 1]))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_17)), (var_11)))) ? (((((/* implicit */_Bool) -7277854451294716048LL)) ? (6627747536678229408ULL) : (14900124265479558766ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - ((-(133693440))))))));
                    }
                    var_28 -= (-(1708522836U));
                }
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_29 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3602487163U)) && (((/* implicit */_Bool) (unsigned short)61204)))))) <= (max((((/* implicit */unsigned int) arr_25 [i_8] [i_8])), (692480132U)))));
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_8])) % (((/* implicit */int) arr_25 [i_8] [i_8]))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) 11U)) : (9324831335270285686ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8] [i_8]))) | (-2506633440705684875LL))))));
        var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_26 [i_8]), (arr_26 [i_8]))))) != ((+(14158856776079479250ULL)))));
    }
    var_32 = ((/* implicit */int) var_11);
}
