/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147134
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
    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_7)))))) ? (((/* implicit */int) max(((unsigned short)36161), (((/* implicit */unsigned short) (signed char)-79))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)225))));
            var_13 = ((/* implicit */signed char) var_2);
        }
        for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (unsigned short)2044))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 2) 
            {
                arr_10 [i_2] [i_2] [i_3] [(unsigned short)3] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_3 - 1]))))) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_3))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_0] [i_2 + 2] [(_Bool)1])) : (((/* implicit */int) (unsigned char)252)))))));
                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
            }
            var_16 -= arr_7 [i_0];
            var_17 = ((/* implicit */unsigned char) (~(arr_9 [i_2])));
            var_18 = ((/* implicit */unsigned short) (~(var_8)));
        }
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            arr_14 [i_0] [(unsigned char)18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_2 [11ULL] [(_Bool)1]))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)0))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_19 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) arr_13 [i_4] [i_5])) : (((/* implicit */int) arr_6 [i_0] [i_4] [i_0])))))))));
                        arr_20 [i_6] [i_4] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
                    }
                } 
            } 
        }
        var_20 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((signed char) arr_4 [i_0]))), (max((((arr_19 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_8))), (((/* implicit */unsigned long long int) arr_7 [i_0]))))));
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0]))))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        var_22 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_7] [i_7]))));
        var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8)));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)52433))))))) : (((/* implicit */int) arr_3 [i_7] [i_7] [i_7]))));
        var_25 &= arr_16 [i_7] [i_7];
        /* LoopSeq 2 */
        for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            var_26 *= ((/* implicit */unsigned short) arr_15 [i_7] [i_8]);
            var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) min((var_8), (((/* implicit */unsigned long long int) arr_2 [i_7] [i_8]))))))));
            arr_26 [i_7] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_11 [i_8] [i_7] [i_7])), (arr_24 [i_8] [i_7])))))))));
            arr_27 [i_8] |= ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) (~(((/* implicit */int) var_9))))));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    {
                        arr_35 [i_10] [i_9] [i_8] [i_7] = var_3;
                        var_28 *= ((/* implicit */unsigned char) arr_13 [i_8] [i_10]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [4ULL] [i_11] [(_Bool)1])) ? (arr_17 [(signed char)6] [i_11] [(unsigned short)8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((unsigned short) arr_22 [i_11]))) : (((/* implicit */int) var_11))));
            var_30 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 15280503709567281579ULL)))) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) (_Bool)1))));
        }
    }
    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
    {
        var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_13 [(_Bool)1] [i_12]))))))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_12]))) : (arr_17 [i_12] [i_12] [i_12])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_39 [i_12])));
        var_33 = ((/* implicit */unsigned char) ((arr_6 [i_12] [i_12] [i_12]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_12] [i_12] [i_12])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (var_2) : (((arr_13 [i_12] [(signed char)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2)))))));
    }
}
