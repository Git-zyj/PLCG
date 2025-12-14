/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130606
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */unsigned long long int) 19236348)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1779088967U)), (var_8))))))) ? (max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) var_9)))) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (short)28625))));
                arr_5 [1ULL] &= ((/* implicit */int) (~(10947840801392233304ULL)));
                var_18 ^= ((/* implicit */short) arr_0 [i_0]);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [(signed char)13])) : (var_6)))) ? (max((var_8), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) 10947840801392233286ULL))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            arr_16 [i_3] [i_1] = arr_3 [i_0] [i_0];
                            var_20 = ((/* implicit */short) max((((unsigned long long int) (+(-704416016)))), (((/* implicit */unsigned long long int) arr_10 [i_3] [i_3] [(signed char)6] [i_3 - 2] [i_3 - 2] [i_3 - 1]))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [i_3] [i_1] [i_4])))) | (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) var_10)))) % (((/* implicit */int) (unsigned char)217))))) : (max((max((var_11), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)56)), ((short)-11002))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            arr_20 [i_0] [i_1] [i_3] [(short)4] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
                            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) -19236330))));
                        }
                    }
                    for (int i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_2]);
                        arr_25 [i_0] [i_1] [i_2] [i_6] [1] = ((/* implicit */signed char) arr_18 [i_0] [i_1] [i_0] [i_0]);
                    }
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_8 = 2; i_8 < 19; i_8 += 1) 
                        {
                            arr_31 [i_8] [i_1] [i_2] [i_7] [i_8] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((short) arr_14 [i_0] [i_0] [i_8] [i_8 + 3] [(unsigned char)9] [i_8]))), ((~(5880490080691005933ULL)))));
                            arr_32 [i_0] [19U] [i_8] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_12 [i_8] [i_2] [i_2] [i_8 + 2] [i_2] [i_2])) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)199)), (var_9)))) : (((/* implicit */int) arr_1 [(signed char)5])))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_0)) : (15135921584435904395ULL)))))));
                        }
                        for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            arr_36 [i_9] [i_7] [i_9] [i_9] [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
                            var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), ((short)23139)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-8316978136160894293LL)))) : (max((((/* implicit */unsigned long long int) var_14)), (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((19236330) & (((/* implicit */int) arr_3 [i_1] [i_9]))))))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_8)) ? (arr_11 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((17721063539253818040ULL), (((/* implicit */unsigned long long int) (signed char)3))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))) <= (arr_15 [i_0] [i_1] [i_2] [i_7] [i_9] [i_1]))) ? (((/* implicit */int) arr_23 [i_9] [i_2] [i_2] [i_9])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_14 [i_0] [(short)1] [i_9] [i_7] [i_9] [i_9]))));
                        }
                        arr_37 [i_0] [i_0] [i_0] [i_0] [(signed char)19] = ((/* implicit */unsigned long long int) var_2);
                        arr_38 [i_0] = ((/* implicit */signed char) arr_15 [i_0] [(signed char)6] [(short)7] [i_0] [i_7] [i_2]);
                    }
                }
            }
        } 
    } 
}
