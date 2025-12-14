/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153087
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
    var_17 ^= ((/* implicit */short) (+(((/* implicit */int) var_14))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            var_18 ^= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1 + 2] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_0 - 1] [i_1 + 1] [i_1 - 2])))))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 2] [i_0 - 1]))) != (min((((/* implicit */unsigned long long int) 7101204943999575973LL)), (12319728067358849113ULL))))))));
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_4 [i_1 + 2]))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) 2370379462U))));
            var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (17752283281494621918ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 - 2])))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_3 = 2; i_3 < 7; i_3 += 4) 
            {
                arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (arr_4 [i_2 + 1]) : (((/* implicit */long long int) var_13)))))));
            }
            for (short i_4 = 1; i_4 < 7; i_4 += 4) 
            {
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((unsigned int) ((unsigned short) (+(((/* implicit */int) (_Bool)1)))))))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_7 [5LL] [i_2]))));
                /* LoopSeq 1 */
                for (long long int i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    arr_14 [i_2] [6U] [i_2] [i_2] [i_2 + 1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) var_16)) == (var_1)))))));
                    var_25 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) min((var_14), (((/* implicit */unsigned short) arr_8 [i_0] [i_2 + 1] [i_2 + 1] [i_5]))))));
                    var_26 = ((/* implicit */long long int) arr_0 [i_2]);
                }
                arr_15 [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (8866674670084927547ULL)))) ? (((var_13) << (((3073113465754327627ULL) - (3073113465754327600ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 2] [i_2 + 1]))));
            }
            for (long long int i_6 = 2; i_6 < 7; i_6 += 4) 
            {
                var_27 = ((/* implicit */short) (unsigned short)25088);
                var_28 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-9308)) / (((/* implicit */int) (unsigned char)36)))) != (((/* implicit */int) ((short) var_3)))));
            }
        }
        /* LoopNest 3 */
        for (long long int i_7 = 1; i_7 < 7; i_7 += 4) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 3; i_9 < 9; i_9 += 4) 
                {
                    {
                        var_29 *= ((/* implicit */short) (!(((/* implicit */_Bool) (((~(arr_4 [i_0]))) * (((/* implicit */long long int) ((unsigned int) arr_19 [i_0 - 1]))))))));
                        arr_25 [i_9] [i_8] [i_7] [i_9] = ((/* implicit */short) arr_24 [i_9 - 2] [i_9 + 1] [i_9 - 1] [i_8 - 1] [i_7 + 3]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_10 = 1; i_10 < 9; i_10 += 4) 
        {
            for (signed char i_11 = 2; i_11 < 9; i_11 += 4) 
            {
                for (unsigned int i_12 = 2; i_12 < 6; i_12 += 4) 
                {
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_11] [i_11 - 1] [(short)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_11))))))) ? (((/* implicit */int) max((arr_3 [i_12 + 3] [(short)8] [i_10 - 1]), (arr_3 [i_12 + 3] [i_12 + 3] [i_10 - 1])))) : ((((~(((/* implicit */int) var_14)))) | (((/* implicit */int) ((short) var_4)))))));
                        var_30 = ((/* implicit */_Bool) min((var_30), ((!(((/* implicit */_Bool) 5060842976263417679ULL))))));
                    }
                } 
            } 
        } 
        arr_33 [i_0 - 1] [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) min((arr_26 [i_0]), (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_23 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29781))) : (arr_31 [i_0] [i_0] [i_0] [i_0 + 1] [i_0]))) : (min((((/* implicit */unsigned long long int) 7406751604571611167LL)), (var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)25103)))));
        var_31 = 4160749568U;
    }
}
