/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181593
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((18014364149743616ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520))))));
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_10 [i_0] [i_2 + 1] [i_0]), (var_13)));
                    arr_13 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (-(max((((/* implicit */int) arr_9 [(unsigned char)0] [(unsigned char)0])), ((+(((/* implicit */int) (unsigned char)255))))))));
                    arr_14 [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(17318796091012011881ULL)))) ? (4460172039723972487ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172)))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_17 [i_3] = ((/* implicit */unsigned short) min((var_14), (var_12)));
        arr_18 [i_3] = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) arr_15 [i_3])))));
        arr_19 [i_3] [i_3] = ((/* implicit */unsigned short) arr_16 [i_3]);
        arr_20 [7] = (((+(63))) >= ((+(((/* implicit */int) var_6)))));
        arr_21 [i_3] = ((/* implicit */unsigned long long int) ((arr_16 [i_3]) + (((/* implicit */int) (unsigned char)254))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_24 [i_4] = ((/* implicit */unsigned char) arr_23 [i_4]);
        arr_25 [i_4] &= ((/* implicit */unsigned short) arr_16 [i_4]);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_33 [i_6] [i_7] = ((/* implicit */unsigned short) (_Bool)1);
                    arr_34 [i_6] [(unsigned char)11] = var_2;
                    arr_35 [i_6] [i_6] [i_6] = arr_31 [(unsigned char)6] [(unsigned char)6] [i_7 - 1];
                }
            } 
        } 
        arr_36 [(_Bool)1] = ((/* implicit */unsigned short) arr_27 [i_5] [i_5]);
        arr_37 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 879540164852426010ULL)) ? (((/* implicit */int) (unsigned char)253)) : (((((/* implicit */_Bool) (unsigned short)12115)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) arr_26 [i_5]))))));
    }
    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
    {
        arr_40 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((arr_39 [i_8]) / (((/* implicit */int) ((_Bool) 36362708))))) : (min((arr_39 [i_8]), (arr_39 [i_8])))));
        arr_41 [(unsigned short)11] [i_8] = (((!((_Bool)1))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (unsigned char)5)) : (-1))) > (arr_39 [i_8])))) : (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
        arr_42 [(unsigned char)9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (-1744198602) : (((-1) & (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 4) 
    {
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            {
                arr_47 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43583)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)0))));
                arr_48 [i_9] [i_10] = (((-(((/* implicit */int) (unsigned char)2)))) & (((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (14477178594439464717ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)65518))))));
    var_17 = ((/* implicit */unsigned char) var_0);
}
