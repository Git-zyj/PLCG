/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182524
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
    var_14 -= var_6;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : ((~(((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [(unsigned short)22] |= ((/* implicit */long long int) 2215786041U);
    }
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) (unsigned short)55830)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-107))) : (1421792132132995318LL))) & (1421792132132995318LL))), (((/* implicit */long long int) arr_1 [i_1 + 1]))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_1 [i_1 - 1])))) - (((/* implicit */int) arr_1 [i_1 - 1])))))));
    }
    for (unsigned short i_2 = 1; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_18 = ((max((2854135688U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_2 - 1])) == (((/* implicit */int) arr_4 [i_2 + 1]))))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_6 [i_2] [i_2])), (4294967282U)))) == (((((/* implicit */_Bool) (signed char)121)) ? (-1421792132132995319LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 1]))))))))));
        /* LoopNest 2 */
        for (long long int i_3 = 3; i_3 < 9; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [4U] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 1]))) : (2791654489041087005LL))), (((/* implicit */long long int) ((unsigned int) arr_2 [i_2 - 1])))));
                                arr_18 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2] [i_2 - 1] [i_2 + 1] = ((/* implicit */long long int) arr_15 [i_2 - 1] [i_3 + 1] [i_3 - 3] [i_6] [i_2 - 1]);
                                var_19 = ((/* implicit */long long int) arr_11 [7LL] [i_3] [(signed char)6] [i_6]);
                                var_20 += ((/* implicit */unsigned short) 420750168137033618LL);
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((/* implicit */long long int) arr_7 [(signed char)10])), (max((((/* implicit */long long int) arr_5 [i_6])), ((~(9223372036854775807LL))))))))));
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) max((2854135695U), (((/* implicit */unsigned int) (signed char)-127))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1421792132132995308LL)) ? (2232751576U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_3 - 1] [i_2 + 1] [i_2] [i_2])))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (2791654489041087005LL) : (3097616728229036787LL))) : (arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1])))));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) min((arr_14 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]), (((unsigned int) arr_8 [i_2] [i_2 - 1] [i_2 + 1]))));
    }
    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
    var_25 = ((/* implicit */unsigned short) max(((~((+(var_10))))), (((/* implicit */long long int) var_4))));
}
