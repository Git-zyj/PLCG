/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101077
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
    var_11 += ((/* implicit */unsigned short) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_1)) ? (var_5) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (var_0)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_12 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (short)10621))))) : (min((arr_0 [i_0]), (arr_0 [i_0]))))) : (((/* implicit */int) (_Bool)1)));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))));
                var_14 = ((/* implicit */long long int) var_7);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))) >= (((((/* implicit */_Bool) (short)-10622)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (2404737652U)))));
                arr_9 [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_3] [i_0])) / (((/* implicit */int) min((arr_6 [i_0] [i_1]), (arr_6 [i_0] [i_1]))))));
                arr_10 [i_0] = ((/* implicit */short) min((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [4ULL] [i_0])))), (((/* implicit */int) max((var_10), (arr_3 [i_0] [(unsigned short)8] [i_3])))))), (((/* implicit */int) arr_4 [i_0] [i_1] [i_3]))));
            }
            arr_11 [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1] [i_0])) && (((/* implicit */_Bool) (signed char)-16))))), (var_2)))) ? (((((/* implicit */int) (signed char)-21)) & (((/* implicit */int) (signed char)-10)))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (arr_1 [21U] [i_0])))) ? (((arr_0 [i_0]) / (arr_1 [i_0] [i_1]))) : (((((/* implicit */_Bool) (signed char)-16)) ? (var_5) : (arr_7 [i_0]))))));
            arr_12 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) min(((unsigned char)100), ((unsigned char)77)))) / (((/* implicit */int) ((signed char) arr_8 [i_0])))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_3 [2ULL] [i_1] [(signed char)18]))));
                        arr_19 [i_0] [i_4] [i_4] [i_5] = ((/* implicit */short) ((((((((/* implicit */_Bool) (-(((/* implicit */int) (short)-10623))))) ? (arr_0 [i_4 - 2]) : (min((((/* implicit */int) (short)10641)), (var_0))))) + (2147483647))) << (((arr_16 [i_5]) - (1635434122U)))));
                        arr_20 [i_4] [i_1] [(_Bool)1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 518559539586396909LL))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_13 [i_4] [i_4] [12])) ? (((/* implicit */int) arr_3 [i_4 + 1] [i_4 + 1] [i_4 + 1])) : (arr_13 [i_1] [(short)24] [(short)3])))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) (!(((/* implicit */_Bool) (short)-10622))))) ^ (((((/* implicit */_Bool) arr_13 [i_5] [i_1] [i_4 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))));
                        arr_21 [i_4] [i_4] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_1]);
                    }
                } 
            } 
            arr_22 [i_0] [i_0] [i_0] = min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_16 [i_0])) : (arr_18 [i_0] [i_0] [i_1] [(unsigned char)22] [i_1]))), (min((var_7), (arr_18 [i_1] [6] [i_1] [i_1] [i_1]))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_23 [i_0] [i_0]))));
            var_19 += ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_6] [i_0])) ^ (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [24] [24] [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10622))) ^ (var_7))));
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned int) (unsigned char)241);
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_3))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) min(((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10611))) : (5123624616752788427ULL))) & (((/* implicit */unsigned long long int) arr_1 [i_7] [i_8])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_14 [i_8])) : (arr_7 [i_7]))))))));
                arr_39 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_8])) ? (((/* implicit */int) min((((/* implicit */short) (signed char)37)), ((short)-10611)))) : (((((arr_30 [i_7]) + (2147483647))) << (((((arr_30 [i_7]) + (423558807))) - (10)))))));
                arr_40 [(unsigned char)2] [(unsigned char)2] [i_8] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_36 [(short)11] [i_7])) : (((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-21))))) : (((((/* implicit */_Bool) ((arr_15 [i_7] [i_7] [i_7] [i_8]) ? (arr_28 [(unsigned char)7] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (short)-10612)))))) ? (((long long int) -268435456)) : (((/* implicit */long long int) arr_8 [i_7]))))));
            }
        } 
    } 
}
