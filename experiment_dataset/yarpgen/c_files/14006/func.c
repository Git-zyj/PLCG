/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14006
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((~(6424175926032440171ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (13444937687632792986ULL)));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(((/* implicit */int) var_7)))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)190))))) : (((/* implicit */int) var_4))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0 + 1]);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
                        var_22 = ((/* implicit */int) ((((arr_4 [(short)3]) / (((/* implicit */unsigned int) var_12)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) -2010973788))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : ((~(arr_8 [i_0] [i_0 - 1] [(short)6] [i_0 - 1])))));
    }
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        arr_13 [i_4] = ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (unsigned char)22)))));
        var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(arr_12 [i_4])))), (((max((((/* implicit */unsigned int) var_10)), (var_11))) >> (max((arr_12 [i_4]), (((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_25 = ((/* implicit */_Bool) ((arr_15 [i_5]) % (arr_15 [i_5])));
        /* LoopSeq 2 */
        for (short i_6 = 2; i_6 < 21; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    for (long long int i_9 = 1; i_9 < 20; i_9 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (unsigned char)213))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_8] [i_8])) >> (((((/* implicit */int) (short)-21362)) + (21387))))))));
                            var_28 = ((/* implicit */signed char) arr_22 [i_5] [i_6] [i_7] [i_8] [i_9 + 2]);
                            arr_25 [i_5] [i_5] [22LL] [i_8] [i_9] = ((/* implicit */unsigned short) arr_20 [3] [i_6 - 2] [i_7] [i_5]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_29 = ((/* implicit */int) (~(arr_27 [i_5] [i_6] [i_10] [i_5])));
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            var_30 = ((/* implicit */signed char) ((var_15) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 99582228U)))))));
                            var_31 = ((/* implicit */short) arr_28 [i_5] [i_5] [i_10] [i_11] [i_12]);
                            var_32 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)6363))));
                            var_33 &= ((/* implicit */signed char) arr_17 [i_6] [i_11] [i_12]);
                        }
                        var_34 = ((/* implicit */unsigned int) ((unsigned long long int) arr_15 [i_6 + 3]));
                        var_35 &= ((/* implicit */unsigned long long int) arr_31 [i_6]);
                    }
                } 
            } 
        }
        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            var_36 = ((/* implicit */short) arr_19 [i_5] [i_13] [i_13] [i_13]);
            var_37 = ((((/* implicit */_Bool) arr_32 [i_5] [i_13] [i_13])) || (((/* implicit */_Bool) -2010973788)));
        }
        var_38 = (i_5 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) var_15)) << (((arr_31 [i_5]) - (3663035595U)))))) : (((/* implicit */long long int) ((((/* implicit */int) var_15)) << (((((arr_31 [i_5]) - (3663035595U))) - (2832619224U))))));
    }
}
