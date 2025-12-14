/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150954
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
    var_13 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)-83)), (2342327719703751444ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2]))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] &= ((int) 16104416354005800171ULL);
                    var_14 -= ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [3U] [3U]) > (((/* implicit */long long int) var_11)))))) : ((((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))));
        arr_9 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) == (arr_6 [i_0] [i_0] [23U]));
    }
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            {
                var_16 += ((/* implicit */short) (+(((((/* implicit */_Bool) arr_13 [i_3] [13U] [(short)9])) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) % (var_9)))) : ((+((-9223372036854775807LL - 1LL))))))));
                arr_15 [i_3] [i_4 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7540155033273572338ULL)) || (((/* implicit */_Bool) (short)-32753)))))) == ((~(arr_0 [i_4 - 1] [i_4 - 1])))));
                var_17 *= ((/* implicit */unsigned long long int) ((short) (+(8389661754548111874ULL))));
                /* LoopSeq 3 */
                for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    arr_20 [i_3] [i_4 + 1] [i_3] [5LL] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_3] [i_4])) : (((/* implicit */int) var_12)))) >= ((+(((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) ((long long int) -4551050381564456621LL))) ? ((+(var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) var_11))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)85)))))));
                    arr_21 [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [i_5])) ? (((/* implicit */unsigned long long int) arr_18 [i_5] [i_4])) : (var_1)))) && (((/* implicit */_Bool) ((long long int) (short)514))))))));
                    arr_22 [i_5] [i_5] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)40584))));
                }
                for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_7 = 3; i_7 < 16; i_7 += 4) 
                    {
                        var_18 *= (-(2252513010U));
                        var_19 = ((((/* implicit */_Bool) arr_2 [i_3] [i_6])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : ((-(arr_11 [i_3] [i_7]))));
                        arr_27 [i_4 + 1] [(unsigned short)16] = ((/* implicit */short) (-(((/* implicit */int) arr_17 [i_4 + 1] [i_4]))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_3] [(signed char)16] [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_5 [i_6] [i_6] [i_7])))))));
                    }
                    for (short i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        arr_31 [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_3 [i_3] [i_4 - 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6]))) : (((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) var_9))))) : ((+(var_3)))))));
                        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) arr_13 [i_4 + 1] [i_4 + 1] [i_4 - 1])) >= (arr_0 [i_4 + 1] [i_4 - 1]))) && (((/* implicit */_Bool) arr_13 [i_4 + 1] [i_4 + 1] [i_4 - 1]))));
                        arr_32 [i_3] [i_4] [i_6] [i_8] = ((/* implicit */long long int) (-(var_9)));
                    }
                    arr_33 [i_3] [i_4] [i_6] = -4551050381564456621LL;
                    arr_34 [i_3] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_3] [i_3]), (((/* implicit */long long int) arr_25 [i_6] [i_6] [i_6]))))) ? (max((((/* implicit */long long int) arr_25 [i_3] [i_4 - 1] [i_6])), (arr_0 [(signed char)18] [(signed char)18]))) : (max((arr_0 [i_3] [i_4]), (((/* implicit */long long int) arr_16 [i_3] [i_4 + 1]))))));
                    arr_35 [i_3] [i_4 - 1] [i_6] = ((/* implicit */unsigned int) (-(((var_11) * (((/* implicit */int) var_12))))));
                }
                for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(-988316589)))) >= (var_3)));
                    arr_39 [i_3] [14] [i_9] [i_9] = ((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) arr_13 [i_4 + 1] [i_4 + 1] [i_4 - 1]))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 2551636817U)) : (var_2)))));
                }
                arr_40 [15ULL] = ((/* implicit */unsigned int) ((short) arr_19 [i_4]));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (-(((((unsigned long long int) -630860030)) * (((/* implicit */unsigned long long int) (-(var_9))))))));
}
