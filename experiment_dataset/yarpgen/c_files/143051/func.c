/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143051
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
    var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((((/* implicit */short) var_13)), (var_5)))) ? ((~(((/* implicit */int) var_5)))) : ((-(((/* implicit */int) (_Bool)0))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */short) ((arr_0 [i_0 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) == (arr_0 [i_0 + 1])))))));
            var_19 = ((/* implicit */long long int) ((15277950542395224672ULL) < (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (3127321389866598331LL)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21079))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21079)))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                arr_9 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_0]))) / (arr_0 [i_2]))))) && (((/* implicit */_Bool) 3127321389866598331LL))));
                var_20 = ((/* implicit */unsigned char) arr_2 [i_2]);
            }
        }
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (var_2))))) > (var_6))))));
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(8135065135217664977ULL)))) ? ((((_Bool)1) ? ((+(var_6))) : (max((((/* implicit */unsigned long long int) (unsigned short)44488)), (var_6))))) : (var_16)));
                var_22 = ((/* implicit */long long int) (~(((((var_8) <= (((/* implicit */unsigned long long int) -3127321389866598317LL)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_14))))));
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_3] [i_3])) <= ((+(((/* implicit */int) var_14))))));
            }
        }
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            arr_23 [i_0] [(signed char)4] [i_0] = ((/* implicit */long long int) 10311678938491886657ULL);
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (short)-26863))) ? ((~(63984561U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((-19LL) < (((/* implicit */long long int) ((/* implicit */int) var_11))))))))))));
            var_26 = ((/* implicit */_Bool) ((var_3) % ((-(-6459186024114386243LL)))));
        }
        var_27 = ((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_0]) ^ (var_7)));
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned char) arr_11 [13ULL] [i_0 - 1])))))) : (max((((((/* implicit */_Bool) var_16)) ? (arr_5 [i_0 + 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [(short)1]))))), (((/* implicit */long long int) max((((/* implicit */int) arr_17 [i_0])), (arr_8 [i_0] [i_0]))))))));
        var_29 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)44456)) * (((/* implicit */int) var_11))))) / (var_1)))));
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)21082)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [(unsigned char)15]))) < (-7685838212069525468LL))))))) ? ((~(((/* implicit */int) max((var_13), (((/* implicit */unsigned char) (_Bool)1))))))) : ((+(((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 4) 
    {
        var_31 = max((var_16), (((/* implicit */unsigned long long int) (((~(var_10))) + (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_11)))))))));
        arr_26 [i_7] = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (unsigned short)21092))))));
        var_32 = ((/* implicit */int) (short)18066);
        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) min(((+(var_12))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (min((var_8), (((/* implicit */unsigned long long int) 3127321389866598336LL)))))))))));
    }
    for (signed char i_8 = 2; i_8 < 17; i_8 += 2) 
    {
        var_34 = ((/* implicit */_Bool) (+(var_7)));
        var_35 = ((/* implicit */signed char) (~(1426843803)));
    }
    /* LoopSeq 2 */
    for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        var_36 = ((/* implicit */long long int) arr_31 [i_9]);
        arr_33 [i_9] = ((/* implicit */unsigned char) (+((+(((var_8) ^ (var_8)))))));
    }
    for (unsigned int i_10 = 2; i_10 < 24; i_10 += 4) 
    {
        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) % ((+(((/* implicit */int) (unsigned short)65525))))))) | (min((((/* implicit */long long int) var_13)), (max((var_3), (((/* implicit */long long int) var_14)))))))))));
        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) (+(max((max((var_16), (((/* implicit */unsigned long long int) arr_35 [i_10] [i_10])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))))))))));
        var_39 ^= ((/* implicit */unsigned short) arr_35 [i_10] [i_10]);
    }
}
