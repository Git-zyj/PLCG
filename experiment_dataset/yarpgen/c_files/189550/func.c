/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189550
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
    var_14 = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_9)))))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)35)))) : (min((((((/* implicit */int) var_11)) >> (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0] [i_1])))))))))));
                        var_16 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1] [i_1])) % (arr_3 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))));
                        var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((((/* implicit */int) (signed char)-29)), (1625096428))), ((+(((/* implicit */int) var_1))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))));
                    }
                    for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_12);
                        var_18 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) var_11)))) < (((/* implicit */int) var_5)))) ? (((var_4) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_4])))) : ((+(((int) var_7))))));
                        var_19 = ((/* implicit */unsigned long long int) (~(min(((~(((/* implicit */int) var_0)))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))))));
                    }
                    for (short i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
                        var_20 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) max((var_2), (((/* implicit */unsigned char) var_4))))), (max((((/* implicit */unsigned short) var_0)), (arr_6 [i_0] [i_0] [i_2]))))))));
                    }
                    var_21 -= ((/* implicit */unsigned short) var_0);
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_6]))));
                    var_23 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_6] [i_0] [i_6])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_12 [i_6] [i_1] [i_6] [i_0] [i_6]))));
                    var_24 = ((/* implicit */unsigned long long int) var_12);
                    arr_24 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_13 [i_0] [i_0] [i_0] [i_1])))));
                }
                var_25 -= ((/* implicit */_Bool) var_2);
                var_26 += ((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_1] [i_1]);
            }
        } 
    } 
    var_27 -= ((/* implicit */long long int) (-((-(((/* implicit */int) var_0))))));
}
