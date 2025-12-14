/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121560
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (((((/* implicit */_Bool) 743702503U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_10)))))) / ((~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) var_4)) : (var_11)))))));
    var_20 = ((/* implicit */unsigned int) var_18);
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3294998163U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (999969132U)))) ? (max((var_13), (((/* implicit */unsigned int) var_1)))) : (var_13)))) ? (((var_13) ^ ((~(743702503U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58352))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_22 -= ((/* implicit */_Bool) min((arr_1 [(_Bool)1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [14LL])), (var_16)))) && (((/* implicit */_Bool) max((arr_1 [6U]), (arr_1 [(signed char)14])))))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (arr_1 [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_1 [i_0])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) * (var_4))) : (min((arr_1 [i_0]), (arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) 3239108180U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_1 [i_0]))) : (var_9)))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_5 [14] = ((/* implicit */unsigned int) ((709946862) + (((/* implicit */int) arr_4 [i_1] [i_1]))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_8 [i_2] = (~(arr_1 [i_2]));
            var_24 = ((/* implicit */_Bool) arr_7 [i_2]);
        }
        for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    {
                        arr_17 [i_4] [(signed char)0] [i_4] = ((/* implicit */unsigned short) arr_10 [(unsigned char)10] [i_3]);
                        arr_18 [i_1] [(unsigned short)8] [6LL] [i_4] = ((/* implicit */int) (~(var_9)));
                    }
                } 
            } 
            arr_19 [i_1] [i_3] = ((/* implicit */unsigned int) ((arr_10 [i_1] [i_1]) ? (((/* implicit */int) arr_3 [9] [i_1])) : ((~(746472732)))));
        }
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            var_25 = ((/* implicit */int) arr_1 [i_1]);
            arr_22 [i_1] [i_1] [6] |= ((/* implicit */int) ((((/* implicit */long long int) 678109548)) < (arr_9 [3] [i_6])));
            arr_23 [i_1] [i_1] [i_1] = (-(((/* implicit */int) arr_0 [i_1])));
            /* LoopNest 3 */
            for (short i_7 = 2; i_7 < 14; i_7 += 4) 
            {
                for (short i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) arr_21 [2U]);
                            var_27 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_7 - 2])) | ((~(var_17)))));
                        }
                    } 
                } 
            } 
            var_28 = ((((/* implicit */unsigned int) 0)) + (3931473335U));
        }
        var_29 |= ((/* implicit */long long int) (+((+(var_10)))));
        var_30 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */long long int) (+(3035041060U)))) : (((((/* implicit */long long int) -746472748)) ^ (arr_24 [i_1] [i_1])))));
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (-1)));
    }
    for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        var_32 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((unsigned char) var_5))) - ((+(((/* implicit */int) arr_15 [i_10] [i_10] [i_10] [i_10])))))) == (((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_10] [10U]))))) ? (((/* implicit */int) arr_4 [i_10] [i_10])) : ((~(((/* implicit */int) (unsigned char)26))))))));
        var_33 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_10] [i_10] [i_10] [i_10]))))), ((+(((((/* implicit */_Bool) arr_30 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (arr_33 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_10] [i_10])))))))));
        var_34 = ((/* implicit */unsigned int) min((var_34), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_28 [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32176)))))) ? (((/* implicit */int) (unsigned char)140)) : (arr_20 [i_10])))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_10]))))), (arr_28 [12] [i_10] [13] [10])))))));
        var_35 = ((/* implicit */long long int) arr_0 [i_10]);
    }
    for (int i_11 = 0; i_11 < 20; i_11 += 4) 
    {
        arr_37 [i_11] = ((/* implicit */short) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (4294967295U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))) : (max((arr_1 [i_11]), (4294967295U)))))));
        arr_38 [13U] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_34 [16U]), (arr_34 [i_11])))) ? (((((/* implicit */_Bool) arr_34 [i_11])) ? (arr_34 [i_11]) : (arr_34 [i_11]))) : (var_4)));
    }
}
