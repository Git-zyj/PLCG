/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175994
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0])))))))), (arr_3 [i_0])));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                            {
                                arr_12 [i_4 + 1] [i_4] [(_Bool)1] [i_4] [i_0] = ((/* implicit */unsigned short) ((signed char) ((int) (short)-32756)));
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-75)))) ? (((((unsigned long long int) (short)0)) - (((/* implicit */unsigned long long int) -2923958372860627876LL)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */int) (short)-6)), (0)))), (2923958372860627876LL)))))))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (short)0))));
                                arr_15 [i_5] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)6] [i_2])) ? (((((/* implicit */_Bool) (unsigned short)39644)) ? (((/* implicit */int) (short)16422)) : (((/* implicit */int) (short)-16447)))) : (((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-37))))));
                                arr_16 [i_0] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5 + 1]))) > (arr_11 [i_5 + 1] [i_1 - 1] [i_0] [i_3] [i_3])));
                                var_17 = ((/* implicit */int) ((short) var_8));
                                var_18 = ((/* implicit */unsigned short) arr_13 [i_1] [i_3] [i_1] [(_Bool)1] [i_1] [(signed char)3] [i_0]);
                            }
                            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                            {
                                var_19 = ((/* implicit */long long int) ((_Bool) arr_13 [i_0] [i_0] [i_2] [(signed char)16] [i_2] [i_2] [i_0]));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_1 - 2] [i_1 + 1] [i_1 + 2]))) ? (((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_17 [i_1 - 2] [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_2 - 2] [i_1 + 1])))) : (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_2 + 1] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 2]))))));
                            }
                            /* LoopSeq 2 */
                            for (unsigned short i_7 = 1; i_7 < 22; i_7 += 4) 
                            {
                                var_21 = ((/* implicit */signed char) max(((~(((/* implicit */int) (short)-16422)))), (min((((/* implicit */int) max((var_2), (((/* implicit */short) var_3))))), ((-(((/* implicit */int) var_5))))))));
                                var_22 -= ((/* implicit */int) (_Bool)1);
                            }
                            for (int i_8 = 1; i_8 < 23; i_8 += 2) 
                            {
                                var_23 = ((/* implicit */int) var_4);
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_19 [i_1 + 1] [i_1 + 2] [i_2 - 1] [i_8 - 1]), (arr_19 [i_1 - 1] [i_1 - 2] [i_2 + 1] [i_8 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [(unsigned short)18] [i_2] [(unsigned char)18] [i_8 - 1])))))))) : (((/* implicit */int) max((arr_23 [i_2 + 3] [i_2] [i_2 + 3] [i_2 + 1] [i_2 + 3] [i_2 + 1]), (arr_23 [i_2 + 1] [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1])))))))));
                            }
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_13))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) var_3);
    var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
    var_28 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_0)) + (((/* implicit */int) ((unsigned char) -2111709645))))), (((((/* implicit */int) var_3)) % ((~(((/* implicit */int) (short)-5905))))))));
}
