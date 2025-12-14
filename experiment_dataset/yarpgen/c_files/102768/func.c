/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102768
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned char) min((min((max((2987218136912843910ULL), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)12])))), (2987218136912843917ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)23211)) + (((/* implicit */int) (_Bool)1)))))));
        var_11 ^= ((/* implicit */unsigned int) 1569699466155976009ULL);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) arr_0 [i_0])))))))) > (((/* implicit */int) (((+(((/* implicit */int) var_2)))) == (((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(unsigned short)0] [(unsigned short)0])) & (((/* implicit */int) arr_3 [(unsigned short)6] [(unsigned short)6]))))) ? ((~(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
        /* LoopNest 3 */
        for (long long int i_2 = 4; i_2 < 10; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (unsigned char i_4 = 4; i_4 < 11; i_4 += 4) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) ((_Bool) (signed char)27));
                        var_14 += ((/* implicit */signed char) (~((-(((/* implicit */int) arr_5 [i_1] [i_2] [i_3]))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (((-(var_6))) >> (((var_1) - (7087971059435762015ULL))))))));
    }
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        arr_16 [(_Bool)1] [i_5] = ((/* implicit */short) var_4);
        var_16 *= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)0))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            var_17 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)75)) || (((/* implicit */_Bool) arr_17 [i_5] [(unsigned char)4] [i_6])))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_5] [i_5] [i_6])))))));
            arr_20 [i_6] [10ULL] [(_Bool)1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_6] [i_6] [i_5]))));
            var_18 = var_9;
            arr_21 [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_5] [(unsigned short)6] [i_5] [i_5])) && (((/* implicit */_Bool) arr_12 [i_6] [i_6] [(unsigned short)4] [i_5])))))) : (min((var_7), (var_7)))))) || (((/* implicit */_Bool) arr_3 [i_5] [i_6]))));
        }
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_19 *= ((/* implicit */short) (+((~(3111617328769474605ULL)))));
            arr_25 [i_7] [(unsigned short)9] = ((/* implicit */_Bool) arr_14 [i_5] [i_7]);
        }
        /* LoopSeq 1 */
        for (signed char i_8 = 3; i_8 < 9; i_8 += 1) 
        {
            var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) -9LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)23))) : (arr_12 [i_5] [(unsigned short)6] [(unsigned short)6] [i_8 - 1])));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [0ULL] [i_8 + 1] [i_8 - 1])) && (((/* implicit */_Bool) -5211817974728650855LL)))))) >= (2987218136912843931ULL))))));
        }
    }
    var_22 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))) != (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((1U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)41)))))) ? (((unsigned long long int) (unsigned short)39189)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)118)), (5372166314141574083LL)))) : (max((var_6), (16399200036300852357ULL)))))));
}
