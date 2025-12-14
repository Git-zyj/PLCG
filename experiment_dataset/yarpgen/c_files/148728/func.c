/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148728
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
    var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_9))))))) | (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))))) : (0ULL)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((/* implicit */int) (_Bool)0)), (1073725440))))));
        var_20 = ((/* implicit */_Bool) var_2);
    }
    for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
    {
        var_21 = ((/* implicit */signed char) arr_3 [(unsigned short)14]);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 13; i_2 += 3) 
        {
            for (short i_3 = 2; i_3 < 14; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [(unsigned short)14])) * (((/* implicit */int) arr_5 [12]))))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_5 = 1; i_5 < 13; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */_Bool) ((int) arr_5 [i_2]));
                            var_24 = ((/* implicit */signed char) arr_9 [i_2] [i_2]);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(0ULL))))))) != (((((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) + (((/* implicit */int) ((arr_6 [i_2]) > (var_1))))))));
                            arr_16 [i_1 + 1] [i_1 + 1] [i_3] [i_4] [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 + 2] [i_2])) ? (arr_4 [i_1] [i_4] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))))) ? (((((/* implicit */_Bool) var_5)) ? (6ULL) : (((/* implicit */unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1954749262) < (arr_14 [(unsigned short)9] [(unsigned short)9] [i_3] [i_4] [i_2])))))))));
                        }
                        for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            arr_20 [i_1 - 1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (signed char)-19);
                            var_26 = ((/* implicit */short) arr_15 [i_2]);
                            var_27 &= 2147483647;
                            var_28 |= ((/* implicit */_Bool) 6ULL);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            var_29 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) 14489794061453413463ULL)) ? (((/* implicit */unsigned long long int) var_5)) : (var_15))));
                            var_30 = (-(((int) arr_18 [i_8] [i_3 - 2] [i_3] [12] [i_3 - 2])));
                            arr_23 [i_8] [i_2] [i_1] [i_2] [i_1] = ((/* implicit */short) arr_2 [i_1 + 2]);
                        }
                        var_31 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))), (min((((/* implicit */unsigned long long int) arr_11 [i_4] [i_2] [i_3] [i_2] [i_1])), (max((var_9), (((/* implicit */unsigned long long int) var_2))))))));
                    }
                } 
            } 
        } 
    }
}
