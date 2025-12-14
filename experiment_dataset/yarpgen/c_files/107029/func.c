/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107029
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_10 [(signed char)12] [i_0] [(signed char)12] = ((/* implicit */signed char) (((((-(((/* implicit */int) var_3)))) + (2147483647))) >> (((max((arr_7 [(unsigned char)10] [i_1] [(unsigned char)10] [(unsigned char)10]), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (var_15)))))) - (740376184)))));
                    arr_11 [0U] [i_1] [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)93)) > (((/* implicit */int) (unsigned char)228))))) == (((/* implicit */int) arr_2 [i_0])))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 2; i_4 < 19; i_4 += 2) 
        {
            var_16 = (~(((/* implicit */int) var_6)));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                arr_19 [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_3] [i_4 + 1])) > (((/* implicit */int) arr_4 [i_3] [i_3 - 1] [i_4 - 2]))))), (arr_14 [0] [i_3])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        {
                            arr_26 [i_3] [i_6] [(unsigned char)19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_3 - 1] [(_Bool)1] [i_3]))))) ? (((int) ((2363942515U) >> (((/* implicit */int) (unsigned char)28))))) : (((/* implicit */int) var_1))));
                            arr_27 [(short)18] [i_4 + 1] [i_3] [i_6] [i_6] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(arr_3 [i_3])))) ? ((-(((/* implicit */int) arr_15 [i_3] [i_4 - 2] [i_5])))) : (((/* implicit */int) max(((unsigned short)37327), (((/* implicit */unsigned short) (signed char)-6))))))), (max((arr_7 [(_Bool)1] [i_5] [i_6] [20]), (((/* implicit */int) var_6))))));
                            var_17 = ((/* implicit */unsigned long long int) arr_12 [i_3]);
                            arr_28 [i_3] [i_3] [i_3] [i_6] [i_6] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-18428513) * (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) min((arr_15 [i_7] [i_5] [i_4]), (((/* implicit */unsigned short) var_14))))) ? ((-(((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_5)))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned char)69))))));
                            arr_29 [i_7] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (2363942520U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))) : ((~(arr_3 [i_3])))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) ((((-1653215488) / (((((/* implicit */int) arr_16 [i_3])) * (((/* implicit */int) arr_8 [i_3] [i_3] [i_3])))))) / ((+(((arr_21 [3] [i_4] [i_5]) / (((/* implicit */int) var_13))))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5] [i_8] [i_3])))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (16947066489448806792ULL)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) max((var_8), (((/* implicit */int) (unsigned char)155))))) == ((~(var_15)))))) : (((/* implicit */int) var_10))));
                            var_20 = ((/* implicit */unsigned char) var_2);
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)231)) ^ (-206370116)))) ? (((/* implicit */unsigned int) var_0)) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27902))) ^ (1931024780U)))));
                        }
                    } 
                } 
            }
            arr_34 [i_4] |= (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4]))))));
        }
        var_22 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((unsigned char) (unsigned char)120))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_3] [i_3 - 1]))))) : (max((((/* implicit */unsigned long long int) arr_15 [i_3] [i_3 - 1] [(unsigned char)11])), (var_4)))))));
        arr_35 [2] [i_3] &= ((/* implicit */signed char) ((((((/* implicit */int) var_2)) > (((/* implicit */int) ((signed char) arr_4 [i_3] [i_3 - 1] [i_3]))))) ? (((((/* implicit */int) arr_17 [i_3] [i_3 - 1] [i_3])) + (((/* implicit */int) arr_2 [18])))) : (((/* implicit */int) var_2))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_23 = ((unsigned char) var_3);
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((((/* implicit */int) max((((/* implicit */short) arr_2 [(unsigned char)16])), (var_7)))) ^ (((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)160)))))), (((/* implicit */int) (!(arr_1 [i_10])))))))));
        arr_38 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_10] [i_10] [i_10] [i_10])) >= (((((/* implicit */_Bool) var_10)) ? (1499677584260744801ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned short)9] [(unsigned short)9])))))))) == (((int) var_3))));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-2)) && (((/* implicit */_Bool) arr_37 [i_10] [i_10])))) ? (((/* implicit */int) arr_8 [i_10] [i_10] [(unsigned char)12])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
    }
    var_26 = var_1;
}
