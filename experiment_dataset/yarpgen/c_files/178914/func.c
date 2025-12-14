/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178914
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((unsigned int) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) (unsigned short)8185)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30866))) : (5492329514872721079ULL)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_4 = 2; i_4 < 21; i_4 += 3) 
                            {
                                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (-(((/* implicit */int) arr_14 [i_4] [i_2] [i_2] [i_0])))))));
                                arr_15 [i_1] [i_0] [i_1] [i_0] [i_1] [(short)7] = (short)25579;
                                var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_3] [i_0]))))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)10269)) | (arr_10 [i_0] [i_0]))))));
                                arr_16 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((signed char) var_3));
                            }
                            for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                            {
                                arr_19 [i_5] [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) (unsigned short)8190))), (arr_10 [i_0] [i_2])))) ? ((((+(arr_5 [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_2] [12] [i_0] [i_3 + 1]) == (arr_1 [i_3]))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) * (arr_5 [i_0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_3 - 3] [i_3] [i_0])))))));
                                arr_20 [i_0] [i_1] [i_0] [i_1] [i_3] [i_3] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_4 [i_2] [i_2]))))))));
                                arr_21 [(short)0] [i_0] = ((/* implicit */unsigned int) max((arr_1 [i_1]), (((((/* implicit */_Bool) ((signed char) var_10))) ? (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_5] [i_1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_17 [i_0] [i_0] [i_2] [i_0] [i_0]), (((/* implicit */unsigned short) (short)9045))))))))));
                            }
                            /* LoopSeq 2 */
                            for (short i_6 = 1; i_6 < 20; i_6 += 1) 
                            {
                                var_14 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_0])) ? (((/* implicit */int) arr_12 [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [9LL] [2U]))))) ? ((+(((((/* implicit */int) (short)11757)) - (((/* implicit */int) var_9)))))) : ((+(((/* implicit */int) arr_7 [i_3] [i_3 + 2] [i_3 + 2] [(_Bool)1]))))));
                                var_15 = ((/* implicit */short) (-(((/* implicit */int) min((min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned short) var_8)))), (((/* implicit */unsigned short) var_3)))))));
                                var_16 |= ((/* implicit */long long int) min((((short) ((unsigned long long int) var_9))), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_1))))) > ((-(arr_1 [i_1]))))))));
                            }
                            /* vectorizable */
                            for (signed char i_7 = 3; i_7 < 20; i_7 += 2) 
                            {
                                arr_26 [i_0] [i_0] [i_3] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_11 [i_2] [i_1] [i_7] [i_0]))))));
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_7]) ? (var_6) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_0] [i_7])) ? (((/* implicit */int) arr_7 [4ULL] [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_4 [i_2] [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_2] [8LL] [i_7])))))));
                                var_18 -= ((/* implicit */short) (~(arr_5 [i_2])));
                                arr_27 [i_0] = (~(((/* implicit */int) arr_18 [i_3 - 3] [i_7 - 1] [i_7 - 1] [i_7 - 3] [(unsigned short)17] [i_7 - 3] [i_7])));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((((long long int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_4)))) ? (min((-7762661163710343375LL), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    var_20 = ((/* implicit */_Bool) var_5);
    var_21 |= ((/* implicit */unsigned short) (-((((((+(-9197204719474783633LL))) + (9223372036854775807LL))) << (((((/* implicit */int) var_1)) - (47915)))))));
}
