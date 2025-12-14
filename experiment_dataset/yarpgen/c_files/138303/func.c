/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138303
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
    var_16 = ((/* implicit */signed char) (+(((long long int) (!(((/* implicit */_Bool) 5366496136613607230ULL)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = (+(min((((/* implicit */unsigned int) (signed char)105)), (871812346U))));
        arr_3 [0LL] [0LL] |= ((/* implicit */unsigned int) var_3);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                var_17 = ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (3423154949U)));
                arr_8 [i_0] [i_0] [i_0 - 2] = ((/* implicit */_Bool) arr_0 [i_0 + 1]);
                var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 1]))));
            }
            /* vectorizable */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                var_19 += ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [i_0 - 1]))))) ^ (((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_4 [i_0 - 1] [i_0 - 2] [i_0]))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_12))));
                arr_12 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_11 [i_0] [i_0] [i_3])))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)37))) % (arr_10 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))))));
            }
            /* vectorizable */
            for (short i_4 = 3; i_4 < 22; i_4 += 3) 
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_0] [i_4])) ? (arr_4 [i_4 - 1] [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) var_7)))))));
                var_22 = ((/* implicit */unsigned int) (+(((2251782633816064ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40344)))))));
                arr_15 [i_0] = arr_5 [i_0];
                var_23 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)46351)) <= (((/* implicit */int) arr_6 [i_4 - 1] [i_4 - 3] [i_4 - 1]))));
            }
            arr_16 [12LL] |= ((/* implicit */unsigned char) ((arr_11 [i_0] [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_0] [(short)17] [i_1]) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)25192)) ? (((/* implicit */int) (short)0)) : (arr_0 [i_1]))))))))));
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (~(((/* implicit */int) arr_1 [(short)10] [(short)10])))))));
            arr_17 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % ((~(((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40344))) : (1650025694U)))))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        var_25 += ((/* implicit */long long int) (short)8253);
        arr_20 [i_5] = ((/* implicit */unsigned int) (unsigned short)0);
        arr_21 [i_5] [(unsigned char)9] = ((/* implicit */long long int) arr_6 [i_5] [i_5] [i_5]);
        arr_22 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3423154950U)) & (var_3)));
        var_26 = ((/* implicit */unsigned short) var_9);
    }
    var_27 = ((/* implicit */unsigned short) ((_Bool) var_2));
}
