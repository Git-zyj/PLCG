/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11910
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) % (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            arr_10 [i_0 - 2] [i_1] [i_4] = ((short) (!(((/* implicit */_Bool) var_2))));
                            var_11 -= ((/* implicit */signed char) (((~(((/* implicit */int) var_6)))) < (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0])))));
                            var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) ((unsigned char) (unsigned short)31124)))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_3 [i_0 - 2]))))));
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) arr_0 [i_0 - 3]))));
                            arr_14 [i_0] [i_1] [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) arr_0 [i_0]);
                        }
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)34425)))))));
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        arr_17 [i_6] [i_2] [i_1] [(short)12] [i_0 - 3] [i_0 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) max(((unsigned short)31121), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) arr_0 [i_2 - 1])))))));
                        var_16 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_1 - 1] [(unsigned char)4] [i_0 - 2]))) | (4294967295U))));
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) var_3)));
                        var_18 = ((/* implicit */unsigned short) (~(((unsigned long long int) ((arr_18 [i_0 - 1] [i_1 - 2] [i_2] [i_2] [i_0 + 1]) | (var_9))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 1) 
                        {
                            var_19 = ((unsigned char) ((((/* implicit */int) arr_15 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 1])) << (((((/* implicit */int) arr_8 [i_0] [i_8] [i_7 + 1] [i_2] [i_1] [i_1] [i_0])) - (169)))));
                            var_20 = ((/* implicit */int) var_2);
                        }
                        for (int i_9 = 3; i_9 < 12; i_9 += 4) 
                        {
                            arr_28 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)212))))) - (arr_21 [i_9] [i_9 + 1] [i_9 + 1] [i_9 - 3] [i_9 + 1] [i_9 - 1])));
                            var_21 = ((/* implicit */unsigned long long int) min((26LL), (((/* implicit */long long int) ((unsigned short) arr_13 [i_7 + 2] [i_7 - 1])))));
                        }
                        var_22 = ((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_7 - 1] [i_7] [i_2]);
                        var_23 |= 1426990342936461846LL;
                    }
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1 - 2] [i_2])) ? (((unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_20 [i_0] [i_1 + 1] [i_2 - 1] [(unsigned char)7] [i_0] [i_0 - 2])) : (var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (var_1)))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) var_4);
}
