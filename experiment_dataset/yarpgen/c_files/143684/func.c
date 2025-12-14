/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143684
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_1]) / (((/* implicit */int) (unsigned short)13130))))) ? (((((/* implicit */_Bool) 3063821427U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (1071525633U))) : (((/* implicit */unsigned int) (-(arr_0 [i_0] [i_0]))))));
                arr_4 [i_0] [i_0] = ((/* implicit */short) (~(arr_0 [(unsigned char)12] [i_1])));
                var_15 = ((/* implicit */unsigned short) 3993599198U);
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3348643066U)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))) ? (((((/* implicit */int) var_13)) - (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))) : (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) + (-106885482)))));
                arr_5 [i_0] [0U] [3LL] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_8 [i_3] [(short)4] [i_4]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
                    {
                        arr_15 [i_2] [i_5] = ((/* implicit */short) (+(((/* implicit */int) (signed char)92))));
                        arr_16 [i_5] [i_4] [i_4] [13U] = ((/* implicit */unsigned short) var_8);
                        arr_17 [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((arr_14 [i_2] [i_3] [i_4] [i_2]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)-25896)) : (((/* implicit */int) (unsigned char)9)))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((unsigned short) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) arr_19 [i_2] [i_3] [i_4] [i_6] [i_2] [i_3])) : (((/* implicit */int) var_0)))));
                        var_19 = ((/* implicit */unsigned short) ((arr_13 [i_6] [i_4] [i_3] [i_2]) ? (((arr_12 [i_3]) / (arr_12 [i_2]))) : (((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_3] [i_4] [(short)5]))) : (arr_12 [i_2])))));
                        var_20 = ((/* implicit */unsigned long long int) max(((unsigned short)51432), (min(((unsigned short)8828), (((/* implicit */unsigned short) (_Bool)1))))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (unsigned short)43269)) : (((/* implicit */int) (signed char)-13))))))) ? (((((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_2] [i_3] [i_2]))))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (var_3))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_2] [i_2])))))));
                        arr_20 [i_6] [i_4] [i_6] [i_6] = ((/* implicit */signed char) max((((((/* implicit */int) ((unsigned short) arr_6 [4] [4]))) & (((((/* implicit */_Bool) (unsigned short)15690)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) (signed char)-87)))))), (((((/* implicit */_Bool) arr_8 [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_8 [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_8 [i_2] [i_2] [i_6]))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        for (unsigned short i_8 = 2; i_8 < 10; i_8 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 2; i_11 < 8; i_11 += 4) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_7] [(short)8] [i_8 - 2] [i_7])) && (((/* implicit */_Bool) arr_19 [i_8] [9] [i_8] [i_8] [i_8 - 2] [i_11 + 1]))))) * (((/* implicit */int) min((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_10)))), (((arr_10 [i_7] [i_7] [i_7]) > (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
                                var_23 = ((/* implicit */unsigned int) arr_30 [(signed char)1] [i_8]);
                            }
                        } 
                    } 
                } 
                var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) + (((((/* implicit */_Bool) 0ULL)) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_8 - 2] [i_8] [i_8 - 2])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_12 = 0; i_12 < 18; i_12 += 4) 
    {
        for (short i_13 = 0; i_13 < 18; i_13 += 2) 
        {
            for (unsigned int i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 2; i_15 < 16; i_15 += 4) 
                    {
                        arr_45 [i_12] = ((/* implicit */unsigned long long int) ((535822336) / (((/* implicit */int) (short)-7))));
                        var_25 *= (short)-26761;
                        var_26 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)44)) >> (((((/* implicit */int) (short)1078)) - (1065)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(_Bool)1] [(_Bool)1])))))) : (max((((/* implicit */long long int) arr_40 [i_12] [i_13] [i_12])), (arr_41 [i_12] [i_12] [i_12] [i_12]))))));
                    }
                    var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_14])) ? (((/* implicit */int) arr_42 [i_12] [i_12] [i_12] [i_13] [i_13] [i_14])) : ((+(((/* implicit */int) var_2))))))) ? (min((((/* implicit */int) (short)32767)), (-2020936196))) : (((/* implicit */int) ((-3399412840221354362LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))));
                }
            } 
        } 
    } 
}
