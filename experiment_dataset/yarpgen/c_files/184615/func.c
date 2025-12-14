/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184615
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
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (((var_11) ? (var_12) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (2018081508))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((arr_1 [i_0 + 1]) - (13667907744210168978ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0]))))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_21 = ((/* implicit */long long int) (short)-24642);
            arr_5 [i_0 + 2] [15ULL] [i_0] = ((/* implicit */signed char) ((arr_0 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_18)))));
            var_22 ^= ((/* implicit */unsigned char) arr_0 [i_0 - 2]);
            /* LoopNest 3 */
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 16; i_3 += 2) 
                {
                    for (signed char i_4 = 2; i_4 < 15; i_4 += 3) 
                    {
                        {
                            var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-19548)) != (((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 2] [i_2] [i_0 - 2]))));
                            arr_14 [i_4] [(unsigned char)3] [(unsigned char)3] [i_3] [i_4 + 2] = ((/* implicit */unsigned char) arr_1 [i_4]);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) arr_10 [i_0 - 1] [i_5]);
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                for (unsigned char i_7 = 3; i_7 < 15; i_7 += 2) 
                {
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)174)) > (((/* implicit */int) (_Bool)0)))))));
                        var_26 = (_Bool)0;
                        arr_25 [i_5] [(unsigned char)14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (((((/* implicit */_Bool) (unsigned char)27)) ? (arr_1 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                    }
                } 
            } 
        }
        var_27 |= ((/* implicit */unsigned char) (-(min((((/* implicit */int) min(((unsigned short)36811), (((/* implicit */unsigned short) (unsigned char)140))))), (((((/* implicit */_Bool) arr_22 [i_0] [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) var_13))))))));
    }
    for (unsigned char i_8 = 1; i_8 < 18; i_8 += 3) 
    {
        var_28 = ((/* implicit */unsigned char) (unsigned short)30995);
        arr_29 [i_8] = ((/* implicit */signed char) max(((~(((/* implicit */int) min((((/* implicit */signed char) var_11)), ((signed char)-99)))))), (((/* implicit */int) (_Bool)0))));
        var_29 = ((/* implicit */unsigned long long int) min((arr_27 [i_8] [i_8]), (arr_27 [i_8 + 1] [i_8 + 1])));
        var_30 = ((/* implicit */signed char) ((arr_27 [i_8 - 1] [i_8 - 1]) & (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)21)))))));
    }
    var_31 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) var_14)) : (-1112967400)))), (((var_18) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (3954707723U))))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) / (((/* implicit */int) (unsigned short)42351)))))));
}
