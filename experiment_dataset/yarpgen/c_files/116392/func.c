/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116392
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
    var_10 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65530)) / (((/* implicit */int) (unsigned short)65527))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-26922), ((short)-29387))))) : (max((13611087457194094104ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        var_11 ^= (((-(max((arr_2 [i_1]), (((/* implicit */unsigned long long int) arr_11 [(signed char)1] [(signed char)1] [i_2] [i_2] [1ULL])))))) | (max(((~(var_7))), (((/* implicit */unsigned long long int) (~(var_9)))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_12 = ((/* implicit */long long int) var_7);
                        var_13 += arr_4 [i_0] [i_0];
                    }
                    var_14 += ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                    arr_15 [i_2] [i_0] = ((/* implicit */long long int) (signed char)-94);
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_15 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_0] [(unsigned char)6])) : (((/* implicit */int) var_8))))))), (max((max((var_0), (var_2))), (((((/* implicit */_Bool) var_2)) ? (4835656616515457506ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_16 ^= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_2 + 1] [i_5] [i_6])) ? (((/* implicit */int) arr_13 [i_0] [(_Bool)1] [6LL] [i_5])) : (((/* implicit */int) (_Bool)1)))));
                            arr_21 [i_0] [i_0] [i_2 - 1] [i_5] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-102)), (var_2)))) ? (((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_2 + 1] [i_6])) : ((+(((/* implicit */int) var_6)))))) : ((+(((/* implicit */int) max((var_8), (((/* implicit */short) (_Bool)1)))))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            arr_24 [i_7] [i_1 + 1] [i_7] [i_5] [i_7] = ((/* implicit */long long int) max((((signed char) arr_11 [i_1 - 1] [i_2 + 1] [i_1] [i_1 - 1] [i_1 - 1])), (((/* implicit */signed char) ((((/* implicit */int) (signed char)111)) == (((/* implicit */int) (_Bool)1)))))));
                            arr_25 [i_0] [i_0] [i_0] [8LL] [8LL] [8LL] [i_7] = ((/* implicit */short) max((max((var_0), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (unsigned short)17787)) || (((/* implicit */_Bool) var_2))))))));
                            arr_26 [i_7] [i_1 - 1] [i_2] [i_1 - 1] [i_7] = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) arr_20 [17U] [i_1 - 2] [(short)16] [(unsigned char)7] [i_7]))), (((((/* implicit */_Bool) 11471115102126493629ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_1 + 2] [i_1 + 1] [i_2 - 1] [i_2 - 1]))))));
                            arr_27 [i_0] [i_7] [i_2] [(_Bool)1] [6LL] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                        }
                        arr_28 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */int) (unsigned char)1)), ((~(((/* implicit */int) (_Bool)1)))))));
                    }
                    var_17 = ((/* implicit */unsigned short) (short)6);
                }
            } 
        } 
    } 
}
