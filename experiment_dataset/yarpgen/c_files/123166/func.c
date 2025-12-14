/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123166
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_2);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                var_13 *= ((/* implicit */unsigned long long int) var_5);
                arr_10 [i_0] [i_1] [i_1] [i_2] = ((unsigned short) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (9681243548170013639ULL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    arr_13 [13LL] [2] [i_2] [i_2] [i_3] = ((/* implicit */short) 144115188075855871LL);
                    arr_14 [i_0] = ((/* implicit */unsigned char) var_11);
                    arr_15 [i_2] = ((/* implicit */unsigned int) (unsigned short)31);
                    arr_16 [i_0] [i_1] [3U] [i_3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_1 [9ULL])))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    arr_17 [i_0] [(signed char)13] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_3])) ? (arr_5 [i_0] [i_1]) : (arr_5 [i_0] [i_3])));
                }
            }
            arr_18 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!((_Bool)1)))), (arr_1 [i_1])))) : (max((((/* implicit */unsigned long long int) (unsigned short)13224)), ((+(var_11)))))));
            arr_19 [i_0] = ((/* implicit */unsigned int) (short)8309);
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    {
                        arr_26 [i_0] [(signed char)9] [(unsigned short)1] [(unsigned char)5] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))) : (max((var_1), (((/* implicit */unsigned long long int) (_Bool)1)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(signed char)3] [3LL] [i_4])))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_4] [i_5] [i_6])) ? (((int) (_Bool)1)) : (((/* implicit */int) arr_25 [i_0] [i_4] [11] [8U])))), ((((~(((/* implicit */int) (signed char)105)))) & (((/* implicit */int) arr_25 [(signed char)6] [i_1] [11ULL] [(signed char)6]))))));
                            var_15 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [(_Bool)1] [i_1] [(unsigned short)5] [i_6])) ? (((((/* implicit */_Bool) -474723390)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15717974945021479880ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                            arr_31 [i_0] [i_1] [i_1] [i_4] [7LL] [i_6] = ((/* implicit */unsigned int) (+((-(min((((/* implicit */unsigned long long int) (_Bool)0)), (var_1)))))));
                            arr_32 [i_0] [i_1] [1ULL] [(short)2] [(unsigned short)12] [(unsigned short)12] [i_6] = ((/* implicit */_Bool) min((((var_4) | (((/* implicit */int) var_9)))), ((+(474723411)))));
                            arr_33 [i_0] [3ULL] [i_4] [i_5] [(unsigned char)2] = ((/* implicit */unsigned short) (((+(min((((/* implicit */int) arr_0 [i_1])), (1068548987))))) + (((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) arr_27 [i_0] [i_0] [i_1] [i_4] [2ULL] [i_6] [(signed char)6])) : (((((/* implicit */int) (unsigned char)186)) - (((/* implicit */int) (signed char)-117))))))));
                        }
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((((((/* implicit */_Bool) (short)196)) ? ((~(6013893261022863943ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_34 [i_7])))))), ((~(var_12))))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((arr_34 [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-211)) >= (((/* implicit */int) (unsigned short)4157)))))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)105)))))))));
    }
    var_18 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 18442240474082181120ULL)))))), ((+((-(((/* implicit */int) var_7))))))));
}
