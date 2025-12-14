/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143919
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 7; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_3] [(unsigned char)4] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (signed char)127)), (((((/* implicit */_Bool) (short)-28846)) ? (arr_12 [i_0] [i_3] [4U]) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [7LL] [(signed char)4]))) % (452504699U))))))));
                                arr_14 [i_0] [i_0] [0LL] [i_0] [i_0] [i_0] [i_0] = 7365690245249241044ULL;
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max(((~(11ULL))), (((/* implicit */unsigned long long int) (signed char)-116)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    arr_18 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_1] [i_1 + 1] [i_5])) ? (((/* implicit */unsigned long long int) arr_9 [i_1 + 2] [i_1 + 2])) : (min((arr_4 [i_0] [i_1 + 3]), (((((/* implicit */_Bool) (unsigned short)59216)) ? (7365690245249241044ULL) : (((/* implicit */unsigned long long int) 22U))))))));
                    var_21 = ((/* implicit */unsigned char) max((17ULL), (((/* implicit */unsigned long long int) (unsigned char)83))));
                    var_22 += ((/* implicit */short) ((((/* implicit */int) ((11634954106747235282ULL) > (((/* implicit */unsigned long long int) 4150145072U))))) + (((/* implicit */int) max((((/* implicit */unsigned short) (short)32097)), ((unsigned short)14654))))));
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    var_23 &= ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            {
                                arr_25 [i_8] [i_8] [i_6] [i_0] [i_8] = ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96))) : (15127400357349304691ULL));
                                arr_26 [i_0] = ((/* implicit */unsigned int) ((((arr_22 [i_8] [i_7] [i_6] [i_6] [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-23366))))) ? (((arr_11 [i_8] [(unsigned short)9] [i_0] [i_1 + 1] [i_0]) | (arr_23 [(unsigned char)3] [i_1 + 2] [i_6] [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_6])) ? (arr_23 [(unsigned char)5] [i_1] [i_6] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_9] [i_9] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [(unsigned short)8] [(signed char)7] [(unsigned short)8] [i_0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)57))) > (arr_4 [i_1] [i_1]))))));
                    var_25 = ((/* implicit */unsigned int) (unsigned char)107);
                    arr_30 [i_9] [i_0] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) (signed char)-107))));
                    var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(unsigned char)4] [(short)2] [i_0] [i_1 - 2] [i_1 - 2])) ? (62914560U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9] [i_1 - 2] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17924))) : (arr_4 [i_0] [i_0]));
                }
            }
        } 
    } 
    var_27 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (7561658917565767377LL))))))) || (((/* implicit */_Bool) var_5)));
}
