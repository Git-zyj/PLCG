/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162423
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
    var_20 = ((/* implicit */signed char) var_19);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) var_6);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)85)) + (((/* implicit */int) (_Bool)1))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) arr_0 [i_0] [i_0])))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((var_9), (((/* implicit */int) var_7)))) + (((/* implicit */int) ((_Bool) var_2)))))) ? (((max((((/* implicit */long long int) var_15)), (arr_1 [(unsigned short)24] [i_0]))) * (((/* implicit */long long int) ((-375806952) & (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((arr_1 [i_0] [i_0]) > (((/* implicit */long long int) var_8)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_18)))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_0 [(_Bool)1] [i_1]) : (((/* implicit */int) arr_2 [i_1] [(signed char)5]))))) ? (((/* implicit */int) ((signed char) max((((/* implicit */long long int) arr_9 [i_1] [i_1])), (var_13))))) : (((/* implicit */int) ((_Bool) arr_6 [i_1])))));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_12 [(unsigned char)0] [i_2] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) > (max((((/* implicit */unsigned int) arr_9 [i_1] [i_1])), (var_5)))));
            var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
        }
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) var_17)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)0))))))));
            arr_17 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3] [i_3] [i_1])) / (((/* implicit */int) (unsigned char)15))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) : (min((((/* implicit */unsigned int) arr_14 [i_3] [i_1] [i_1])), (var_5)))));
            arr_18 [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_19)), ((signed char)21)))) ? ((+(((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))))))));
            arr_19 [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_17)) ? ((~(((/* implicit */int) var_3)))) : ((((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_15 [i_1] [i_1]))))))));
            var_24 ^= ((/* implicit */signed char) (_Bool)1);
        }
    }
    /* vectorizable */
    for (short i_4 = 4; i_4 < 15; i_4 += 2) 
    {
        var_25 = ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_4] [i_4])) - (((/* implicit */int) var_7))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                {
                    arr_28 [i_5] = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) var_13)))));
                    var_26 *= ((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned short)4088)))) ? (((((/* implicit */int) var_12)) / (((/* implicit */int) var_12)))) : (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                    var_27 *= var_0;
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_14)) > (arr_0 [i_6] [i_5])))) + (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_29 = ((/* implicit */int) arr_20 [i_4]);
        var_30 ^= ((/* implicit */short) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_19))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        var_31 = (_Bool)0;
        var_32 = ((/* implicit */unsigned int) (short)32767);
    }
}
