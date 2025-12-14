/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185617
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_11 ^= ((/* implicit */long long int) arr_2 [(_Bool)0]);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) != (var_4))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0]))))))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0])))))));
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((-1LL) >= (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_0 - 1]), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (((/* implicit */int) ((9007199254708224LL) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0]))))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
    }
    for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_12 ^= ((/* implicit */unsigned int) arr_1 [(signed char)0]);
        arr_8 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_6 [i_1] [i_1 - 1])), ((unsigned char)178)))), (0ULL)));
        var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) max((arr_5 [i_1 - 1]), (arr_5 [i_1 - 1])))) : ((((_Bool)1) ? (((/* implicit */int) arr_5 [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1 - 1]))))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)8])))))) % (((unsigned long long int) arr_11 [i_1] [i_2] [i_3])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            {
                                var_15 ^= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) arr_13 [i_2 - 1] [i_4] [i_3] [i_4])) : (arr_14 [i_5] [i_1 - 1] [i_1])))));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_1 [(unsigned short)12]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1921202837))));
}
