/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185772
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = arr_1 [i_0] [i_0];
        arr_3 [(short)12] &= ((/* implicit */short) max(((~(var_11))), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                {
                    var_14 += ((/* implicit */short) min((min(((+(((/* implicit */int) arr_8 [i_1])))), (((/* implicit */int) (unsigned char)1)))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2] [(unsigned char)9]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1 + 2] [i_3])) >= (((/* implicit */int) arr_4 [i_1]))))) : (((/* implicit */int) max((var_9), (((/* implicit */short) var_6)))))))));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) 477229276U))));
                    arr_11 [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) (((-(max((3760340479223513714ULL), (3760340479223513713ULL))))) % (4611686018427355136ULL)));
                    arr_12 [i_1] [(unsigned short)6] [i_1 - 2] |= ((/* implicit */long long int) min((((/* implicit */int) max((arr_6 [i_3 + 1] [i_3] [i_3 + 2]), (arr_6 [i_3 + 2] [i_3 + 2] [i_3])))), ((+(((/* implicit */int) (signed char)86))))));
                }
            } 
        } 
        arr_13 [i_1 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1267743315U)) | (max((((/* implicit */long long int) (signed char)0)), (36028797018963967LL)))))) ? ((-(max((7866359146288530795LL), (((/* implicit */long long int) (signed char)86)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0))))));
        var_16 = ((/* implicit */signed char) ((((((15100029889882061011ULL) != (14686403594486037902ULL))) && (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) var_4)))))) && (((/* implicit */_Bool) ((unsigned int) arr_1 [i_1 - 2] [i_1])))));
    }
    for (int i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        arr_18 [i_4] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */signed char) arr_5 [i_4] [i_4])), (var_6)))) + (((/* implicit */int) ((4611686018427355151ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17278))))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_10 [i_4])) / (((/* implicit */int) var_2)))), (((((/* implicit */int) arr_17 [i_4])) >> (((524287ULL) - (524263ULL)))))))) ? (((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (var_1) : (((/* implicit */int) (unsigned char)224)))) : (var_8)));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                {
                    arr_28 [i_5] = ((/* implicit */short) var_5);
                    var_19 = (~(((((((/* implicit */int) var_5)) << (((/* implicit */int) (short)30)))) << (((((((/* implicit */_Bool) var_4)) ? (1200335305) : (((/* implicit */int) var_6)))) - (1200335277))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) arr_21 [i_5] [i_5]);
    }
}
