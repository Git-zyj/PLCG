/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163543
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)32)), (2037040410)))) ? (((((/* implicit */_Bool) (short)32765)) ? (var_9) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (var_9)))))));
    var_11 = ((/* implicit */signed char) -455039213);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 2; i_1 < 20; i_1 += 3) /* same iter space */
        {
            var_12 = ((/* implicit */int) max((var_12), (min((((/* implicit */int) (unsigned char)58)), (((((-536132297) + (2147483647))) >> ((((-(((/* implicit */int) (unsigned char)197)))) + (198)))))))));
            var_13 &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) 2147483642)) + (((((/* implicit */_Bool) ((short) (short)32767))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
        }
        /* vectorizable */
        for (short i_2 = 2; i_2 < 20; i_2 += 3) /* same iter space */
        {
            arr_8 [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) ((arr_0 [i_2 - 1] [i_2 + 1]) ? (((/* implicit */int) arr_0 [(short)14] [i_2 - 2])) : (((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 1]))));
            arr_9 [i_2] = ((/* implicit */long long int) ((1040187392ULL) / (((/* implicit */unsigned long long int) ((2147483642) / (((/* implicit */int) (unsigned short)25)))))));
        }
        for (short i_3 = 2; i_3 < 20; i_3 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((576460752303423487ULL), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0])) && (((/* implicit */_Bool) 1040187392ULL)))))) : (67495824U)))) ? (var_4) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-31))))));
            arr_12 [i_3] = ((((/* implicit */int) min((((/* implicit */short) ((unsigned char) var_6))), ((short)32640)))) * ((((~(((/* implicit */int) arr_6 [i_0] [i_0])))) * (((/* implicit */int) ((67108863) != (((/* implicit */int) (_Bool)1))))))));
            /* LoopSeq 1 */
            for (int i_4 = 2; i_4 < 19; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        {
                            var_15 *= ((/* implicit */int) min((((/* implicit */unsigned long long int) (short)9401)), (arr_18 [4U] [i_3 + 1] [(signed char)19] [i_3] [i_3])));
                            arr_22 [i_0] [i_0] [i_3] [i_4] [i_0] [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((0) | (((/* implicit */int) (short)-1073))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_21 [i_5] [i_0] [i_6] [i_5] [i_6] [i_4 - 2] [i_0])), ((short)28203))))) : (((((/* implicit */_Bool) arr_21 [i_5] [20] [(_Bool)1] [i_5 - 1] [i_3] [i_4 + 1] [(short)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10699))) : (2641280231U)))));
                            arr_23 [i_0] [i_4] [i_4] &= ((/* implicit */int) ((signed char) -1219774383));
                            arr_24 [i_6] [i_6] [i_5] [i_5] [i_6] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) ((var_1) && (((/* implicit */_Bool) (short)-10688))))), (arr_15 [i_5] [(_Bool)1] [(_Bool)1]))))) ^ (min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_3))), (((/* implicit */unsigned int) min((arr_21 [i_5] [i_3 + 1] [i_3 + 1] [12ULL] [i_6] [i_6] [i_0]), (((/* implicit */unsigned char) (_Bool)1)))))))));
                        }
                    } 
                } 
                var_16 |= ((/* implicit */unsigned short) (unsigned char)0);
            }
        }
        for (short i_7 = 2; i_7 < 20; i_7 += 3) /* same iter space */
        {
            var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)16), (arr_26 [i_7 - 1])))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14292))) + (17275766154703682831ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-3420))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) (short)-7688)))))))));
            var_18 = ((/* implicit */long long int) var_0);
            arr_29 [i_7] [i_7] = var_2;
        }
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)0) && ((_Bool)1))))) : (4294967295U)))) ? (((((/* implicit */int) (unsigned char)19)) / (((/* implicit */int) arr_27 [i_0] [i_0] [i_0])))) : (((/* implicit */int) min((var_1), (arr_3 [i_0] [i_0]))))));
        arr_30 [i_0] = ((/* implicit */short) (unsigned char)1);
        arr_31 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29787))) : (6U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)131)))))));
    }
}
