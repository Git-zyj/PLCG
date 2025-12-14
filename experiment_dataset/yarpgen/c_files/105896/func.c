/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105896
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((~(-1163043069967616456LL))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
    var_18 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))))) | (((8444249301319680ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    var_19 = (!(((/* implicit */_Bool) var_2)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] [i_0] = arr_6 [i_0];
            var_20 |= ((/* implicit */unsigned int) (((+(((/* implicit */int) var_3)))) > (((int) arr_2 [i_0]))));
            var_21 -= ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) / (var_16))) <= (((/* implicit */int) ((_Bool) var_11)))));
            var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (arr_5 [i_1]) : (arr_2 [i_1])));
        }
        var_23 *= ((/* implicit */unsigned long long int) var_10);
        var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [i_0] [i_0]))))));
        /* LoopSeq 4 */
        for (unsigned short i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            arr_10 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_2 - 2] [i_0] [i_0]))));
            arr_11 [i_0] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) arr_1 [i_0])))));
            arr_12 [i_0] [i_2] [i_0] = ((/* implicit */int) ((unsigned int) arr_2 [i_0]));
        }
        for (unsigned short i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 3; i_4 < 18; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        {
                            var_25 *= var_6;
                            arr_22 [i_6] [i_4] [i_4] [15ULL] = ((/* implicit */_Bool) ((unsigned long long int) ((var_0) ? (arr_3 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                            arr_23 [i_0] [i_3 - 1] [i_4] [i_4] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                            var_27 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)15016)) || ((_Bool)1)));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
            arr_24 [i_0] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((int) arr_17 [i_0])) : (((/* implicit */int) var_9))));
            var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_16 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_16 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]))));
        }
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            arr_29 [i_0] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15011)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0]))) : (var_15)))) ? (((unsigned long long int) arr_4 [i_0] [i_0])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_7] [i_7] [9] [i_7] [i_7] [i_0]))))));
            arr_30 [i_0] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            var_30 = ((/* implicit */_Bool) (unsigned short)15016);
            /* LoopSeq 2 */
            for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                var_31 = ((/* implicit */unsigned long long int) ((((var_1) * (((/* implicit */unsigned int) 307440206)))) - (((/* implicit */unsigned int) (-(((/* implicit */int) var_12)))))));
                arr_37 [i_0] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) 1450991485168796690ULL))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))));
            }
            for (int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                arr_40 [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned long long int) (~(arr_5 [i_10])));
                var_32 *= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
            }
        }
        var_33 = ((/* implicit */_Bool) ((signed char) arr_39 [i_0] [i_0] [i_0]));
    }
    var_34 = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((/* implicit */int) var_4))));
}
