/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156092
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
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) max((var_1), (((/* implicit */unsigned long long int) var_9)))))) < (((((/* implicit */_Bool) var_4)) ? (max((var_3), (((/* implicit */unsigned long long int) var_7)))) : (7030700251009724037ULL)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_17 = 1115800867U;
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) max((var_15), (max((arr_1 [i_0] [i_4]), ((~(((/* implicit */int) (unsigned short)10622)))))))))));
                            arr_14 [i_0] [i_2] = ((/* implicit */signed char) var_1);
                            arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3] [i_2] = ((/* implicit */signed char) ((arr_4 [i_4] [i_2]) < (((/* implicit */int) (signed char)68))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))) / (min((-7325824601447984630LL), (((/* implicit */long long int) arr_13 [i_3 + 1] [i_3 + 1] [i_0]))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_4 [i_1] [i_0]) == (((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) arr_5 [i_1])) : (1175195363U)))));
        }
    }
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_18 [i_5 + 1]);
        arr_19 [i_5] = ((/* implicit */int) (-(7030700251009724037ULL)));
        arr_20 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2071524496236561631LL)) ? (((/* implicit */int) arr_18 [i_5 - 1])) : (((/* implicit */int) arr_18 [i_5 + 3]))));
    }
    for (long long int i_6 = 2; i_6 < 23; i_6 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_7 = 2; i_7 < 22; i_7 += 3) 
        {
            arr_25 [i_6] = ((/* implicit */int) (~(arr_21 [i_6 + 1] [i_7 + 3])));
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_22 [i_6 - 2]))));
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_21 [i_7] [i_7 - 1]) : (((/* implicit */unsigned long long int) -6649993941298890592LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)32559)) <= (arr_22 [i_6]))))) : (arr_21 [i_6 + 1] [i_7 + 3])));
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                for (long long int i_9 = 1; i_9 < 23; i_9 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_10))));
                        arr_32 [i_6] [i_7] [(_Bool)1] [i_9] = ((/* implicit */int) ((arr_24 [i_6 - 1]) == (arr_24 [i_9 + 2])));
                        arr_33 [i_6] [i_6] [i_6 + 1] [i_9] = (+(((/* implicit */int) arr_23 [i_6 + 2])));
                    }
                } 
            } 
            arr_34 [i_6 - 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_7 + 1] [i_7 - 2] [i_6 - 1] [i_6 - 2])) ? ((-(arr_30 [i_7] [i_6] [i_6]))) : (arr_30 [i_6 - 2] [i_7 - 1] [i_6 + 2])));
        }
        arr_35 [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_6 - 2])) || (((/* implicit */_Bool) (-(arr_29 [i_6] [i_6] [i_6] [i_6] [i_6 + 1] [i_6])))))))));
        arr_36 [i_6 - 2] [i_6] = ((/* implicit */_Bool) max((((arr_30 [i_6] [i_6 + 2] [i_6]) | (arr_30 [i_6 - 2] [i_6 + 2] [i_6 - 2]))), (((/* implicit */int) arr_27 [i_6] [i_6 + 2] [i_6 + 2] [i_6]))));
    }
}
