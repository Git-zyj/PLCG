/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183860
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
    var_12 = var_3;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (var_3)));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_11);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */short) ((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)1))));
                    arr_9 [(unsigned short)3] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) var_1);
                    arr_10 [i_2] [i_0] = ((/* implicit */unsigned int) var_7);
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (var_9)))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_2 - 1])) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) var_8)))), (min((arr_6 [i_2] [i_2] [i_2] [i_2 - 1]), (min((((/* implicit */unsigned int) var_2)), (var_0)))))));
                }
            } 
        } 
        arr_12 [(short)4] = ((/* implicit */short) arr_0 [i_0]);
    }
    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 4) 
    {
        var_14 |= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) var_3)) >= (var_11))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(6284915256760282756LL)))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_4))))))) : (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_3) : (8271363193287057371LL)))) : (arr_13 [i_3 + 2])))));
        /* LoopSeq 1 */
        for (int i_4 = 2; i_4 < 23; i_4 += 3) 
        {
            arr_18 [i_4 + 1] [i_3] = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) var_10)))));
            arr_19 [i_3] [i_3 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
            arr_20 [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) var_10);
            arr_21 [i_4] = ((/* implicit */long long int) var_7);
        }
        arr_22 [i_3] = ((((/* implicit */unsigned long long int) ((min((var_3), (((/* implicit */long long int) var_0)))) / (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))) != (min((((((/* implicit */_Bool) arr_16 [i_3 + 1] [i_3] [i_3])) ? (var_11) : (arr_16 [i_3] [i_3] [i_3]))), (((/* implicit */unsigned long long int) var_0)))));
    }
    var_15 &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) % (((/* implicit */int) ((unsigned char) var_11))))) % (((/* implicit */int) var_1))));
    var_16 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (min((-6284915256760282756LL), (-6284915256760282745LL))) : (var_6)))) ? (var_8) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161))) : (-3LL)))) ? (((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) var_8))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_4)))))))));
}
