/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167345
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
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)14)) ? (6563308389794477185ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(-1824824096)))) || (((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) (unsigned short)57235))))))))));
            var_18 = ((/* implicit */long long int) (~(65805517969911219ULL)));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                arr_9 [i_0] [i_0 - 2] [i_0] [i_0] = (-(var_1));
                var_19 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)26227)) && (((/* implicit */_Bool) (short)10161))))), (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2])) ? (arr_8 [i_0] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) - (max(((+(18380938555739640397ULL))), (((/* implicit */unsigned long long int) ((arr_2 [i_1]) != (arr_1 [i_0]))))))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                arr_12 [i_0] = ((/* implicit */unsigned int) -1824824116);
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_0] [i_1] [i_0])), ((+(((/* implicit */int) (unsigned short)65535))))))))))));
                    arr_16 [i_0] = ((/* implicit */unsigned short) var_5);
                }
                arr_17 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) 1824824082)) < (min((((/* implicit */long long int) arr_14 [i_1] [i_0] [i_1] [i_1])), (((long long int) 1824824118))))));
                arr_18 [i_0] [i_0] = ((/* implicit */long long int) 65805517969911227ULL);
            }
        }
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)10187))));
        var_22 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [(signed char)6] [i_0])) ? ((+(18380938555739640397ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-1), (arr_7 [14LL] [7U] [i_0] [i_0])))))))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_9)))))));
    }
    for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_6 = 2; i_6 < 18; i_6 += 3) 
        {
            var_24 += ((/* implicit */signed char) max(((+((-(var_4))))), (((/* implicit */long long int) (unsigned short)18096))));
            var_25 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_5 - 2] [(unsigned short)10] [(unsigned short)10])) || (((/* implicit */_Bool) arr_23 [i_5 - 2] [14ULL] [i_6]))))), (min((12ULL), (var_1)))));
            arr_24 [0U] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5 - 3] [i_6 - 1])) ? (((/* implicit */int) (unsigned short)18096)) : (1824824086)))) || (((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_5]))) ^ (var_9))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_7)), (arr_21 [2ULL] [2ULL])))))))));
        }
        var_26 |= ((/* implicit */int) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)9))))) & (max((((/* implicit */unsigned long long int) arr_19 [i_5] [i_5])), (var_9))))) | (((/* implicit */unsigned long long int) (~(var_13))))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                {
                    arr_34 [i_8] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_7] [i_8]))));
                    arr_35 [i_7] [14] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7] [i_8] [i_9] [i_9])) ? (((/* implicit */int) arr_21 [i_7] [6ULL])) : (601473307)))) || (((/* implicit */_Bool) arr_6 [i_7] [i_7] [i_8] [i_9]))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 3; i_11 < 12; i_11 += 4) 
                        {
                            {
                                arr_40 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) arr_27 [i_7] [i_8]);
                                arr_41 [i_8] [i_7] |= ((/* implicit */signed char) (short)-10144);
                                arr_42 [i_11] [2] [i_9] [11LL] [i_7] = ((/* implicit */short) (+(-1824824096)));
                                var_27 = (-(((/* implicit */int) (short)10159)));
                                arr_43 [i_7] [i_10] [i_11] = ((/* implicit */signed char) ((unsigned short) (~(arr_39 [i_11 - 2] [(signed char)7] [i_8] [i_7]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_44 [i_7] = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned short)26465)))) * ((~(((/* implicit */int) arr_3 [i_7]))))));
        arr_45 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_7] [i_7])) && (((/* implicit */_Bool) arr_25 [i_7] [i_7]))));
    }
    /* LoopNest 3 */
    for (unsigned char i_12 = 4; i_12 < 10; i_12 += 3) 
    {
        for (unsigned long long int i_13 = 3; i_13 < 11; i_13 += 2) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                {
                    var_28 = ((long long int) (-(arr_28 [i_12] [i_12])));
                    arr_54 [i_12] [i_12] [i_12] [i_12] = ((((/* implicit */_Bool) 1824824100)) ? (((/* implicit */int) (signed char)11)) : (2147483647));
                }
            } 
        } 
    } 
}
