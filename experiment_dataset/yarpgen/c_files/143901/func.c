/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143901
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
    var_14 = min((((/* implicit */int) var_10)), (((((/* implicit */int) var_2)) + (((/* implicit */int) ((((/* implicit */int) (short)-18131)) >= (((/* implicit */int) var_0))))))));
    var_15 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned char)147)))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)108)))) : (((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) 12582912U);
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_1]))));
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) + (((/* implicit */int) arr_1 [i_0]))));
        }
        for (long long int i_2 = 4; i_2 < 11; i_2 += 3) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) ((_Bool) arr_7 [i_0]));
            arr_10 [i_2] [3ULL] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (unsigned char)108)))));
        }
        for (unsigned int i_3 = 4; i_3 < 8; i_3 += 1) /* same iter space */
        {
            var_18 ^= ((/* implicit */int) ((unsigned long long int) (unsigned char)227));
            var_19 = ((/* implicit */short) arr_2 [i_3] [i_3] [i_3]);
        }
        for (unsigned int i_4 = 4; i_4 < 8; i_4 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -4080492764576195503LL)) ? (((/* implicit */int) arr_14 [(signed char)8] [1U])) : (1517675881))) & (((/* implicit */int) (unsigned char)60))));
            var_21 = ((/* implicit */int) (unsigned char)108);
            arr_18 [0ULL] [i_4] [i_4] = ((/* implicit */unsigned char) ((signed char) arr_2 [i_4] [i_0] [i_4]));
        }
        arr_19 [6ULL] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                for (int i_8 = 2; i_8 < 18; i_8 += 4) 
                {
                    {
                        arr_35 [i_5] [i_7] [i_8] &= ((/* implicit */short) (_Bool)0);
                        var_22 = ((/* implicit */unsigned long long int) max((1517675868), (((/* implicit */int) (unsigned char)147))));
                    }
                } 
            } 
        } 
        arr_36 [i_5] [i_5] = ((/* implicit */unsigned char) arr_33 [i_5] [9U] [7LL] [(unsigned short)18] [(signed char)3] [(signed char)3]);
    }
    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
    {
        var_23 += ((/* implicit */long long int) arr_23 [i_9] [(unsigned short)3]);
        arr_39 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_32 [i_9] [(_Bool)1] [16ULL] [(unsigned char)6] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))) : (-1572350374951306743LL))), (((((/* implicit */_Bool) arr_20 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) : (arr_20 [8LL])))))) ? (((/* implicit */int) arr_38 [i_9])) : (((((/* implicit */int) arr_25 [(short)7])) ^ (((/* implicit */int) max(((short)-32757), (((/* implicit */short) (unsigned char)244)))))))));
        var_24 = ((/* implicit */_Bool) 6401333988930818142ULL);
    }
}
