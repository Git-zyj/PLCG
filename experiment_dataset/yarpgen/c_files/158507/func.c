/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158507
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
    var_14 = ((/* implicit */unsigned short) ((var_11) | (((/* implicit */int) (unsigned short)0))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [(short)2]))) % (arr_8 [i_3] [i_1 + 2] [i_1])));
                        var_16 = ((/* implicit */unsigned int) var_4);
                    }
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 + 3] [i_1 + 2] [i_0 - 1])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_5)) : (arr_2 [i_1])))))) ? (((/* implicit */long long int) max((arr_6 [i_0] [i_0] [i_2]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0 - 1] [i_0 - 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_1 [i_1])))) ? (((arr_2 [i_0]) / (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (unsigned short)32245)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            {
                arr_17 [14U] [i_4] [14U] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 2 */
                for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    arr_21 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) arr_20 [i_4]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        for (long long int i_8 = 3; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_18 ^= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)147))));
                                var_19 = ((/* implicit */int) arr_26 [i_4] [i_4] [i_6] [i_7 + 3] [i_8 - 2]);
                            }
                        } 
                    } 
                    var_20 = ((((/* implicit */long long int) arr_18 [i_6] [i_5] [i_4])) <= (((((/* implicit */_Bool) arr_7 [i_6] [i_4] [i_4])) ? (arr_1 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) min((var_8), ((_Bool)1))))))));
                    var_21 = arr_9 [(unsigned short)0] [i_5] [i_5] [i_6];
                }
                for (unsigned short i_9 = 4; i_9 < 16; i_9 += 4) 
                {
                    arr_32 [i_9 + 1] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (((((((-2147483647 - 1)) / (((/* implicit */int) (unsigned short)47261)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4] [i_5]))))))) + (((/* implicit */int) var_4))));
                    arr_33 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_4] [i_5] [i_5])) ? (((/* implicit */int) arr_4 [i_9 - 3] [i_5] [i_4])) : (1457395679)))) : (6974396444050560679LL)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_2))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 1505781407)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)24790)))) < (((-1576072661) | (((/* implicit */int) var_9))))))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_4] [i_9 - 4] [i_9])) ? (1966813759) : ((-2147483647 - 1))))) / (min((((/* implicit */long long int) 354296248)), (((((/* implicit */_Bool) arr_22 [i_4] [i_5] [i_4] [i_5])) ? (arr_1 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_10 = 4; i_10 < 15; i_10 += 1) 
                    {
                        arr_36 [i_4] [i_4] = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)));
                        arr_37 [i_5] [i_9] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_27 [i_10 - 4] [i_10 - 4] [i_10 - 2] [i_10 - 2] [i_10 - 3] [i_10 - 3]))));
                        arr_38 [i_4] [i_9] [i_5] [i_4] = ((/* implicit */unsigned int) -1660126367);
                    }
                    for (long long int i_11 = 2; i_11 < 15; i_11 += 1) 
                    {
                        var_23 = ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_35 [i_4] [i_5] [i_5] [i_4])) ? (max((-1966813768), (((/* implicit */int) (unsigned short)48425)))) : ((+(((/* implicit */int) arr_28 [(unsigned short)11])))))));
                        var_24 = ((/* implicit */long long int) 1671638650328930777ULL);
                    }
                }
                arr_41 [i_4] = ((/* implicit */short) var_11);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) var_4);
    var_26 = ((/* implicit */int) var_7);
}
