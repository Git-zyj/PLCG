/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177976
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
    var_19 = ((/* implicit */unsigned long long int) (-(((long long int) var_12))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) arr_0 [i_0])) % (1360069675))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) (short)31652)) << (((2622494306U) - (2622494295U)))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_5), (arr_1 [i_0])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_22 *= ((/* implicit */long long int) var_16);
            arr_5 [i_1] [i_0] = ((/* implicit */short) ((arr_0 [i_0]) ? (-1360069676) : (((/* implicit */int) ((signed char) (unsigned char)255)))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((-1LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)60))))) | ((-(var_15)))));
            var_23 = ((/* implicit */int) ((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1])))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */int) (-(arr_8 [i_0] [(signed char)9] [i_0])));
            var_25 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_0 [i_2]))))) > (9890954204272975940ULL)));
            /* LoopSeq 4 */
            for (short i_3 = 1; i_3 < 16; i_3 += 3) /* same iter space */
            {
                var_26 += ((/* implicit */long long int) ((((/* implicit */int) var_0)) != (-1360069676)));
                arr_12 [i_3] [i_3] [i_2] [(signed char)7] |= ((/* implicit */short) var_17);
                var_27 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) (_Bool)1)))));
            }
            for (short i_4 = 1; i_4 < 16; i_4 += 3) /* same iter space */
            {
                arr_16 [i_4] [(short)0] [i_4] = (~(arr_9 [i_4 - 1] [i_4 + 1] [i_4 + 1]));
                var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_4] [8ULL])))))));
                var_29 = ((/* implicit */int) ((unsigned int) var_17));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 2; i_6 < 13; i_6 += 3) 
                    {
                        {
                            arr_21 [i_4] [i_2] [(short)16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_11) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (((447816578U) * (arr_9 [i_6 + 2] [i_5] [i_0])))));
                            arr_22 [i_0] [i_2] [6ULL] [i_6] &= (!(((/* implicit */_Bool) ((1068844491U) / (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            arr_23 [i_6] [(short)2] [4ULL] [i_4] [4ULL] [i_2] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (447816587U)))) ? (((/* implicit */int) arr_10 [i_6 + 1] [i_6] [i_6 + 4] [i_4 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) -1360069675)) || (((/* implicit */_Bool) var_9)))))));
                            arr_24 [(_Bool)1] [12LL] [12LL] [(_Bool)1] [i_2] [12LL] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_5] [i_4 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_2] [i_0] [(_Bool)1]))) : (var_4)));
                        }
                    } 
                } 
                var_30 = ((/* implicit */long long int) (-(((var_7) ? (-405560523) : (((/* implicit */int) var_16))))));
            }
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                var_31 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-123))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) : (447816574U)));
                var_32 = ((/* implicit */short) (-(((/* implicit */int) (signed char)69))));
            }
            for (unsigned int i_8 = 1; i_8 < 15; i_8 += 3) 
            {
                arr_31 [i_2] = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) - (1125899873288192ULL)))));
                var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((1052871623U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [2] [(short)0]))))))));
                var_34 = ((/* implicit */unsigned int) arr_1 [i_0]);
            }
            var_35 = ((/* implicit */unsigned long long int) (+(1941670269U)));
        }
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
        {
            var_36 -= ((/* implicit */unsigned char) ((((arr_19 [i_0] [i_0] [i_0] [i_9] [i_9]) ? (-168021691) : (((/* implicit */int) arr_19 [i_0] [i_9] [i_0] [i_9] [i_9])))) ^ ((~(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_9] [i_9]))))));
            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) 7599249718968629351ULL))));
            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [i_0]))))) ? (((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_9] [i_9])) << (((/* implicit */int) var_0)))) : (((((/* implicit */int) (short)-1)) + (((/* implicit */int) arr_28 [i_0]))))));
        }
    }
}
