/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118593
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
    var_20 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */int) (short)-18335)) - (((/* implicit */int) (short)1)))) : (((/* implicit */int) var_10))))));
    var_21 |= ((/* implicit */short) var_7);
    var_22 = ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-31664)) : (((/* implicit */int) (unsigned short)2047)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_0] [i_1 - 2]))))) ? (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) (short)-31664))))) : (((/* implicit */int) arr_5 [i_0] [i_1 + 2]))));
            var_24 = ((((/* implicit */int) ((((((/* implicit */_Bool) (short)-1)) ? (2674394762U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1 + 1]))))) >= (((/* implicit */unsigned int) (+(402624182))))))) | ((+(((/* implicit */int) arr_5 [i_1 + 1] [i_1])))));
        }
        for (short i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            var_25 |= ((/* implicit */int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 1]))))), ((-(((((/* implicit */_Bool) 2674394762U)) ? (arr_1 [11LL]) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))))));
            arr_9 [i_0] [(unsigned char)8] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2 + 2])) >> (((max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_2 - 1])), (var_3))) - (6949915023627478343ULL)))))) ? ((-((~(((/* implicit */int) var_10)))))) : (((int) max((-1701681799569740384LL), (((/* implicit */long long int) (signed char)-93))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                var_26 = ((/* implicit */long long int) ((var_15) / (var_15)));
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16))) : (288230376151711743ULL)));
            }
            for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                var_28 = ((/* implicit */int) (~(var_3)));
                arr_16 [i_0] [i_2 + 1] [i_4] = (-((+(1701681799569740396LL))));
                arr_17 [i_2] [i_2] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (short)18335)))), (((/* implicit */int) ((((/* implicit */int) arr_14 [i_2 + 1] [i_2])) <= (((/* implicit */int) arr_14 [i_2 + 1] [i_2 - 1])))))));
                var_29 = ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) arr_14 [i_0] [i_2])))));
            }
            arr_18 [i_0] = ((/* implicit */unsigned char) arr_14 [i_0] [i_0]);
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 3; i_6 < 16; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        {
                            arr_26 [i_0] [i_2 + 2] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) max((var_12), (((/* implicit */unsigned short) arr_12 [i_0] [i_6] [i_0] [i_0]))))) ^ (((/* implicit */int) var_18))))));
                            var_30 = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_12 [i_7] [i_6] [i_5] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_12)))) : (16252468724517173630ULL)))));
                            arr_27 [i_6] [i_5] [i_6] = ((/* implicit */int) (+((-(arr_8 [i_2 + 2] [i_2 - 1])))));
                            arr_28 [i_0] [i_2] [i_5] [(signed char)11] [i_6 - 2] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5])))))) ? (((((/* implicit */unsigned long long int) -2045458704)) | (288230376151711749ULL))) : (((/* implicit */unsigned long long int) var_5))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) max(((-(var_6))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))))))));
                arr_29 [i_0] [i_0] [(short)6] = ((/* implicit */int) arr_19 [i_0] [i_2 + 2] [i_5]);
            }
        }
        /* vectorizable */
        for (unsigned short i_8 = 1; i_8 < 14; i_8 += 3) 
        {
            arr_32 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_22 [i_8 - 1] [i_8 + 2])) + (2147483647))) << (((((((/* implicit */int) arr_22 [i_8 + 1] [i_8 - 1])) + (95))) - (19)))));
            var_32 = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0]);
        }
        for (short i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            var_33 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_15 [i_0] [i_9])) ? (max((arr_20 [7LL] [i_0] [i_9] [i_9]), (((/* implicit */long long int) (short)10680)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 402624208)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (arr_34 [i_9] [i_0])))))), (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_9]))) ^ (((arr_14 [i_0] [i_9]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9]))) : (arr_1 [(unsigned short)8])))))));
            arr_35 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)222))))));
            var_34 = ((/* implicit */unsigned char) max((max((arr_34 [i_0] [i_9]), (arr_34 [i_9] [i_0]))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_0] [i_9] [i_9]))))) ? (max((21U), (arr_19 [i_0] [i_9] [i_9]))) : (((/* implicit */unsigned int) (+(var_11))))))));
        }
        var_35 |= ((/* implicit */_Bool) (+(arr_24 [i_0])));
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) arr_23 [i_0] [(unsigned short)4] [(unsigned short)4]))));
        var_37 = ((/* implicit */short) ((((unsigned long long int) (short)-16)) & (((/* implicit */unsigned long long int) (-(150139503U))))));
    }
}
