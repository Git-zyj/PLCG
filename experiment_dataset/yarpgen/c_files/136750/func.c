/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136750
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) (+(1259599212U)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */long long int) ((int) max((((/* implicit */long long int) 3035368064U)), (var_5))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            arr_13 [i_2] |= ((/* implicit */long long int) 3035368083U);
                            var_19 = ((/* implicit */int) min((1259599212U), (max((1259599222U), (((((/* implicit */_Bool) 1259599226U)) ? (1259599229U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13)))))))));
                            var_20 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0]);
                            var_21 = (+(((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_11))))) ? (var_5) : (((/* implicit */long long int) 2889947269U)))));
                        }
                    }
                    arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3807721920U)) ? (3035368074U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10391)))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_21 [22LL] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 596332297U)) ? (2951181521609577714ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 92488624)) - (-3906847229823939817LL)))))), (((/* implicit */unsigned long long int) (short)10397))));
                                arr_22 [i_0] = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) 1721547102)) ? (arr_1 [(unsigned char)5] [i_5]) : (arr_11 [i_6] [i_6]))), (((((/* implicit */_Bool) 3035368068U)) ? (3035368083U) : (4276794554U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_2] [i_6] [i_6])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)18750)))))));
                                arr_23 [i_1] [i_2] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [20] [i_1 + 2] [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_1])) * (((/* implicit */int) (unsigned short)22862))))) ? (((((/* implicit */_Bool) 3698634999U)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)17962))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_19 [i_1] [i_1] [i_1 + 1] [i_1 + 2] [i_1 - 2] [0ULL])))))));
                            }
                        } 
                    } 
                    arr_24 [i_0] = ((/* implicit */unsigned short) 1820427521);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_7 = 3; i_7 < 18; i_7 += 2) 
    {
        var_22 = ((/* implicit */signed char) arr_16 [(unsigned char)16] [i_7] [i_7]);
        var_23 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_10)) ? (arr_17 [i_7 - 1] [i_7 - 3]) : (((/* implicit */unsigned long long int) -1721547108))))));
        var_24 = (unsigned char)135;
    }
    /* vectorizable */
    for (short i_8 = 4; i_8 < 11; i_8 += 1) 
    {
        arr_31 [i_8] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3035368063U)) ? (140703128616960ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17)))));
        /* LoopNest 2 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                {
                    arr_38 [i_8] [i_8] [i_8] = ((((/* implicit */int) (unsigned char)3)) + (((/* implicit */int) var_2)));
                    arr_39 [i_8] [i_8] [i_10] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) % (arr_9 [i_8 - 3] [i_8 + 2] [i_8] [i_8 - 3] [i_8])));
                }
            } 
        } 
        arr_40 [i_8] [i_8] = ((/* implicit */signed char) var_14);
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_8 - 4])) : (((/* implicit */int) arr_2 [i_8 + 1]))));
    }
    var_26 = ((/* implicit */long long int) (-(max(((-(((/* implicit */int) var_12)))), (((/* implicit */int) var_15))))));
}
