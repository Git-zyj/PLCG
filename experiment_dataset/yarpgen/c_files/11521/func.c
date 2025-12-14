/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11521
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
    var_13 += ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) var_3)) < (var_5))))))) ? (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_3)) : (1536692131U))))))) : (var_6)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (arr_0 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) (~((+(-8123078443669964247LL))))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_15 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) var_11))) | (var_7)))));
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) % (arr_1 [i_1])));
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        arr_8 [i_2] &= ((/* implicit */long long int) ((int) ((786204810795377879ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) arr_1 [(signed char)1]);
        arr_10 [i_2] [i_2] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [i_2]) : (((/* implicit */int) var_9))))) * (((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    var_16 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_6 [i_2] [6LL]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))) % (max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_0)))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_17 &= ((/* implicit */int) -8123078443669964270LL);
                        arr_20 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_6))) ? (((((/* implicit */_Bool) arr_4 [i_5])) ? (8123078443669964270LL) : (((/* implicit */long long int) arr_1 [i_5])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139)))))) ? ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_4 [0])) : (arr_0 [8ULL] [i_3]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) arr_4 [i_2]))))))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_3] [i_4])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_4])) ? (arr_6 [i_2] [i_4]) : (arr_6 [(short)9] [i_2]))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_23 [i_2] [i_3] [i_2] [i_2] &= ((/* implicit */unsigned int) (!(((_Bool) (short)21363))));
                        arr_24 [i_4] [i_4] [(unsigned char)6] [i_4] = ((/* implicit */signed char) ((((unsigned int) arr_15 [i_2])) != ((+(arr_16 [(_Bool)1] [(_Bool)1] [(_Bool)1])))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            var_19 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */long long int) arr_27 [(unsigned short)0] [0U] [i_4] [i_3] [0U] [0U] [(unsigned short)0])) : (var_1))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_6] [i_3] [i_4] [i_6] [i_6] [i_7])) ? (arr_27 [i_2] [(signed char)10] [(signed char)10] [i_3] [(unsigned char)10] [i_7] [(signed char)10]) : (((/* implicit */int) arr_11 [i_2])))))))) != (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_12)), (var_4)))), (max((var_10), (arr_25 [i_3] [i_3] [i_3] [8] [i_7])))))));
                            var_20 += ((/* implicit */long long int) ((signed char) (unsigned char)127));
                        }
                        var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((var_10) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))))) : (((/* implicit */unsigned long long int) ((arr_7 [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49294))))))));
                    }
                }
            } 
        } 
    }
}
