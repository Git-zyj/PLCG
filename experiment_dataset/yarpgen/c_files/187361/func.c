/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187361
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned char) var_0);
                        var_13 ^= (unsigned short)0;
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_14 -= ((/* implicit */int) var_11);
                        var_15 = ((/* implicit */short) min(((~(((/* implicit */int) arr_5 [i_0] [i_1])))), (max((((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_5 [i_0] [i_1])))), (((((/* implicit */_Bool) arr_11 [i_4] [i_4] [(unsigned char)13] [i_2] [i_1] [(signed char)14])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)53113))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 1; i_5 < 21; i_5 += 1) 
                        {
                            var_16 -= ((/* implicit */unsigned char) var_11);
                            var_17 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5 + 1] [i_5 - 1] [i_4] [i_2] [i_1] [i_0]))))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (arr_1 [i_2]))))))) != (((((/* implicit */_Bool) (unsigned short)12423)) ? (var_3) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            var_18 = ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53099)) || (((/* implicit */_Bool) (signed char)-82))))));
                            arr_18 [21U] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_12 [i_0] [i_1] [i_2] [i_4] [i_6]) || (arr_12 [i_6] [i_4] [i_2] [i_1] [i_0])));
                            arr_19 [2] = ((/* implicit */unsigned char) arr_0 [i_4]);
                            arr_20 [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)53113)) ? (((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 4609434218613702656LL)) ? (((/* implicit */int) arr_15 [i_0])) : (((/* implicit */int) (unsigned short)12400))));
                        }
                        var_20 = ((/* implicit */short) var_7);
                        var_21 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (unsigned char)126)))) ^ ((-(((/* implicit */int) var_7)))))) >> ((((((!(((/* implicit */_Bool) arr_16 [i_0] [14ULL] [i_2] [i_4] [i_1])))) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_1 [i_4]))))) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [18ULL])))) + (56)))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) (unsigned char)50))))) * (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) < (var_3))))));
}
