/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145081
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (+(((/* implicit */int) var_2)))))));
    var_12 -= ((/* implicit */unsigned short) (short)(-32767 - 1));
    var_13 = ((/* implicit */_Bool) (short)32767);
    var_14 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) var_4)))) < ((-(((/* implicit */int) var_8))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) arr_0 [i_0 - 2]);
        arr_3 [i_0 - 2] [(unsigned short)2] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_1 [i_0 - 1])))) | (((/* implicit */int) max((arr_0 [i_0 - 2]), (arr_1 [i_0 - 2]))))));
    }
    for (unsigned short i_1 = 3; i_1 < 16; i_1 += 2) 
    {
        arr_6 [(short)11] = ((/* implicit */short) arr_4 [i_1]);
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)16162)), (((((/* implicit */int) (unsigned short)25227)) - (((/* implicit */int) (short)32767))))))) ? ((((((_Bool)1) || (((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (short)32767)))) : (((((/* implicit */_Bool) 8338962803275417525ULL)) ? (((/* implicit */int) (unsigned short)20461)) : (((/* implicit */int) (unsigned short)27767))))));
            var_17 = ((/* implicit */unsigned short) ((unsigned char) arr_5 [i_1 - 3]));
        }
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)40309))))))) ? (((/* implicit */int) ((arr_8 [i_3 + 1] [(unsigned short)12]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [i_1]))))))) : (((/* implicit */int) min((((/* implicit */short) arr_4 [(unsigned short)3])), (min((((/* implicit */short) arr_9 [(unsigned short)15])), (var_1)))))))))));
            arr_11 [i_1 - 2] [i_3] = ((_Bool) ((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_3 + 1])) ? (arr_8 [i_1 - 2] [i_3 + 1]) : (0ULL)));
        }
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (short i_6 = 3; i_6 < 16; i_6 += 2) 
                {
                    for (long long int i_7 = 1; i_7 < 16; i_7 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) min((max((11729699060891652466ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_19 [i_1 + 1] [i_7 + 1] [i_5] [(unsigned short)9] [i_7] [(unsigned short)2])), (arr_10 [i_7 + 1] [i_7 - 1]))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */int) max(((unsigned short)32767), ((unsigned short)37267)))) == (((/* implicit */int) (unsigned short)37267))));
                            var_21 = (((+(arr_17 [i_1 - 2]))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65514)) ? (((/* implicit */int) arr_21 [i_7] [i_7] [i_5] [i_7] [i_1])) : (((/* implicit */int) arr_21 [i_1] [i_7] [i_5] [i_7] [i_1]))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (unsigned short)24226))));
            }
            arr_22 [8ULL] = ((((/* implicit */_Bool) ((unsigned short) arr_17 [i_1 - 1]))) ? (arr_17 [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_17 [i_1 - 1]) <= (arr_17 [i_1 - 1]))))));
            var_23 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((arr_18 [(unsigned char)1] [i_1 - 1] [i_1 + 1] [i_1]) <= (arr_18 [i_1] [i_1 - 2] [i_1 - 2] [i_1]))));
            var_24 += ((unsigned short) ((unsigned long long int) ((((/* implicit */int) (unsigned short)4057)) / (((/* implicit */int) (unsigned short)37267)))));
        }
    }
}
