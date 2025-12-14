/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139857
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
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) max((((signed char) arr_0 [i_0])), (arr_0 [i_0 - 4]))))));
        var_11 = ((/* implicit */unsigned int) (~(min((-1), (((/* implicit */int) (short)-28819))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_12 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1248716953)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28819))) : (arr_3 [i_1])))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_0 [(unsigned char)8])), (arr_2 [i_1] [i_1])))) : (((((/* implicit */_Bool) (short)21508)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (arr_3 [i_1])))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1255216376)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (1262683515U)))) ? ((+(2259580503U))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) & (2035386793U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))));
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2259580503U)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))))) - (((/* implicit */unsigned long long int) ((int) arr_2 [6LL] [i_2])))))) ? (max((2035386792U), (((/* implicit */unsigned int) arr_1 [i_2] [i_2])))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)28819)) << (((arr_3 [i_2]) + (2625250098206583061LL))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
            {
                var_15 = ((/* implicit */short) (-(((1142731904) & (arr_5 [i_4])))));
                arr_14 [i_3] [i_3] [i_4] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) (short)31744))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) 2287595502U))));
            }
            for (int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
            {
                arr_17 [i_2] [i_3] [i_5] [i_3] = ((/* implicit */unsigned long long int) 1262683529U);
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_17 = ((((/* implicit */_Bool) arr_18 [i_3] [i_5] [i_3] [i_3])) ? (arr_11 [i_3]) : (((/* implicit */int) arr_21 [i_2] [i_3] [i_5] [i_6] [i_6])));
                    arr_22 [i_3] [i_5] [i_3] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) -2012675368)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (arr_4 [i_5]))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    arr_27 [i_2] [i_2] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((1262683515U) * (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)8062)))))));
                    var_18 = ((/* implicit */int) max((var_18), (((arr_21 [i_7] [i_5] [i_3] [i_2] [(short)11]) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)32752))))));
                }
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */unsigned long long int) 1262683515U)) : (var_8)))) ? (((unsigned int) (short)(-32767 - 1))) : (((unsigned int) 1675190324493218504LL))));
                arr_28 [i_3] = ((arr_5 [i_2]) << (((arr_5 [i_5]) - (1882756833))));
            }
            var_20 ^= ((/* implicit */unsigned char) ((70368744177663ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31744)))));
        }
    }
    var_21 = ((/* implicit */_Bool) var_2);
    var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 2012675368)) ? (2546035541U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))), (((((/* implicit */unsigned long long int) var_7)) ^ (min((var_8), (((/* implicit */unsigned long long int) (short)4095))))))));
}
