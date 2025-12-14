/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179867
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_4 [i_0] [i_0] |= ((/* implicit */long long int) (_Bool)1);
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((~(3286033969U))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26838))))) : ((+(4278149231U)))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                for (short i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) /* same iter space */
                        {
                            arr_15 [i_4] [i_4] [i_2 - 2] [i_3] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) 18446744073709551609ULL);
                            arr_16 [i_1] [i_0] [i_2] [19LL] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >> (0ULL)));
                        }
                        for (unsigned short i_5 = 1; i_5 < 22; i_5 += 3) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_5 + 1] = ((/* implicit */short) max((((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) min((var_10), (((/* implicit */short) var_12)))))))), (var_6)));
                            arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((min((arr_7 [i_2 + 1]), (((/* implicit */unsigned int) (_Bool)1)))) + (((((arr_9 [i_5]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38062)))))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 2; i_6 < 22; i_6 += 3) 
                        {
                            arr_25 [i_2] [i_1] [(unsigned char)0] [(unsigned char)14] [i_6 - 1] |= ((/* implicit */unsigned char) ((short) arr_0 [i_3 + 2]));
                            arr_26 [i_6] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_4);
                        }
                        arr_27 [(_Bool)1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_2) * (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_1] [i_3] [i_0] [i_0]))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_3])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((((/* implicit */_Bool) (unsigned char)5)) ? (arr_13 [i_3 + 2] [i_3 - 1] [i_2] [i_2 - 1] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))) : (2741880202U))))));
                    }
                } 
            } 
            arr_28 [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [1U] [i_1] [i_0] [i_1])) ? (arr_11 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) ? (var_3) : (arr_6 [i_0] [i_1])))));
            arr_29 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)26836)) : (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)-25)))))) >> (((((/* implicit */int) ((unsigned short) 2076105316U))) - (55901)))));
            arr_30 [i_0] = ((/* implicit */int) var_9);
        }
        for (short i_7 = 3; i_7 < 23; i_7 += 3) 
        {
            arr_34 [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 4294967272U))) ? (((/* implicit */unsigned long long int) (-(((unsigned int) 7006040858485168289LL))))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [15U] [i_7 - 3] [i_0] [i_7] [i_7 + 1]))))) - ((-(19ULL)))))));
            arr_35 [i_0] [(_Bool)1] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)25190)) | (((/* implicit */int) arr_17 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 2] [i_7]))))) ? ((~(((/* implicit */int) arr_17 [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 3] [i_7 + 1] [i_7 + 1] [i_7])))) : (((/* implicit */int) arr_17 [i_7 - 2] [i_7] [i_7] [i_7 - 3] [i_7 - 2] [i_7 - 2] [i_7])));
        }
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_39 [i_8] [i_8] = ((((/* implicit */_Bool) (+(9U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_2));
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            arr_44 [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) < (arr_11 [i_8] [i_9] [i_9] [i_8] [i_8] [i_8]))))));
            arr_45 [i_8] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (short)0))) ? ((-(var_8))) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_9] [i_8])))));
        }
    }
    var_15 = ((/* implicit */unsigned int) var_2);
}
