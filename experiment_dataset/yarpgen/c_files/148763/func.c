/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148763
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
    var_15 = ((/* implicit */short) var_8);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) ((max((var_13), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))))) - (min((max((((/* implicit */unsigned int) arr_1 [i_0])), (var_14))), (((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
        var_17 = ((/* implicit */unsigned short) (!((((~(var_13))) != ((~(var_13)))))));
        var_18 = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned char) var_6))))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((((/* implicit */long long int) 4294967295U)) < (-6475313559652768992LL))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (signed char i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_4 = 2; i_4 < 12; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) (!(arr_7 [i_2] [i_2] [i_2])));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_5) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) arr_5 [i_1])) : ((~(arr_10 [i_1] [i_2] [i_3] [i_3 + 2] [i_4] [i_4])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned short) (+((~(var_7)))));
                            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_4] [i_3 - 2] [i_1] [i_1]))));
                            var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                            var_25 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1])) : (var_10)))));
                        }
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) var_3);
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) ^ (((/* implicit */int) arr_20 [i_1 - 1] [i_6 + 1] [i_1]))));
                            var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [(unsigned char)6] [13]))));
                        }
                    }
                    var_29 = ((/* implicit */unsigned short) ((var_2) % (arr_12 [i_1 - 2])));
                }
            } 
        } 
        var_30 = ((var_10) + (((/* implicit */int) var_9)));
    }
    /* vectorizable */
    for (unsigned int i_8 = 1; i_8 < 8; i_8 += 3) 
    {
        var_31 = ((/* implicit */int) arr_6 [(unsigned char)14]);
        var_32 = arr_11 [i_8] [12] [12] [4U] [i_8] [i_8];
        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_8] [i_8] [i_8] [i_8]))))) ? (var_14) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)250)))))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 1; i_10 < 19; i_10 += 2) 
        {
            for (unsigned short i_11 = 1; i_11 < 21; i_11 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned short) (!(var_6)));
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_12)) <= (((((/* implicit */_Bool) arr_24 [i_10 - 1] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_9]))) : (var_2)))));
                }
            } 
        } 
        var_36 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) + (arr_28 [i_9])));
        var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_30 [5ULL] [i_9]))));
    }
    var_38 = ((/* implicit */signed char) var_12);
    var_39 = ((/* implicit */unsigned long long int) (((~((~(-1))))) | ((~((~(-1)))))));
}
