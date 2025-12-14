/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160509
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) -724151922))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */unsigned long long int) -724151917)), (arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (((!(arr_1 [i_0]))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_10))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_16 = ((/* implicit */_Bool) arr_4 [i_1]);
            arr_6 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned short) arr_4 [i_1]);
            var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))) * (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) % (724151922)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1799252643)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3832254391U)))) : (((long long int) -1747528414))))));
            var_18 = ((/* implicit */signed char) ((((arr_4 [i_0]) > (((/* implicit */long long int) var_11)))) ? (((/* implicit */long long int) (+(856458249U)))) : (arr_4 [i_0])));
        }
        for (int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) -724151897)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_7 [i_0]))))));
            var_19 = ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 724151917)))))) : (((((/* implicit */_Bool) ((unsigned char) 999282972U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))) : (((11ULL) >> (((15978081657766544802ULL) - (15978081657766544789ULL))))))));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 12; i_3 += 2) 
        {
            var_20 = ((/* implicit */int) var_1);
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (arr_10 [i_3 + 3] [i_0] [i_0]) : (arr_10 [i_3 - 2] [i_3 + 1] [i_0]))))));
            var_22 = ((/* implicit */signed char) ((arr_10 [i_3 - 1] [i_3 - 2] [i_3 + 1]) != (arr_10 [i_3 - 1] [i_3 - 2] [i_3 + 1])));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    {
                        arr_17 [i_5] [i_4 - 1] [i_3 + 2] [i_0] = ((/* implicit */_Bool) arr_5 [i_3 + 1]);
                        var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_3 - 2])) & (((/* implicit */int) arr_5 [i_3 - 2]))));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            for (unsigned char i_8 = 1; i_8 < 12; i_8 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        arr_28 [i_9] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_5);
                        var_24 = ((/* implicit */_Bool) ((unsigned long long int) 724151922));
                    }
                    arr_29 [i_8] [i_6] [i_6] [i_6] = ((max((arr_26 [i_8] [i_8] [i_8] [i_8 + 4] [i_8 - 1] [i_8 + 1]), (((/* implicit */unsigned long long int) var_8)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_8 + 3])) ? (arr_25 [i_8 - 1]) : (((/* implicit */unsigned int) -724151944))))));
                    arr_30 [i_6] = ((/* implicit */unsigned short) var_4);
                    arr_31 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -1909778918)) ? (999282972U) : (((/* implicit */unsigned int) -1909778925)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) < (-1357687293))))))) <= (arr_26 [i_6] [i_6] [i_8] [i_8] [i_6] [i_8 + 4])));
                    var_25 *= ((/* implicit */short) (-(min((arr_25 [i_6]), (arr_25 [i_6])))));
                }
            } 
        } 
        var_26 |= ((_Bool) ((unsigned int) var_8));
    }
    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
    {
        arr_34 [i_10] = ((/* implicit */unsigned int) ((((var_9) ? (((((/* implicit */_Bool) (signed char)0)) ? (724151933) : (var_4))) : (((/* implicit */int) ((((/* implicit */_Bool) -724151931)) && (((/* implicit */_Bool) 3295684323U))))))) * (((/* implicit */int) (_Bool)1))));
        var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_10])) ? (999282971U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))) ? (((/* implicit */long long int) 999282971U)) : (arr_33 [i_10]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_10]))))))));
        arr_35 [i_10] = ((/* implicit */unsigned int) arr_32 [i_10]);
    }
    var_28 |= ((/* implicit */int) var_11);
    var_29 = ((/* implicit */unsigned long long int) ((long long int) var_0));
}
