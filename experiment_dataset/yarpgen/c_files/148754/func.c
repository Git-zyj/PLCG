/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148754
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned char) -1);
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)37348)))))));
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) arr_4 [i_0]))));
            var_14 = ((/* implicit */int) min((var_14), ((-(max((((-19) & (((/* implicit */int) (signed char)-30)))), (((/* implicit */int) arr_0 [i_0]))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_15 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_2])) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0 + 1])), (((unsigned short) arr_6 [i_0] [i_2] [i_0])))))) : (9223372036854775807LL)));
            var_16 = ((/* implicit */unsigned int) min((var_16), (min((((/* implicit */unsigned int) ((arr_3 [i_0] [i_0] [i_0 - 2]) / (((/* implicit */int) arr_0 [i_0]))))), (min((((/* implicit */unsigned int) arr_3 [i_2] [i_0] [i_0])), (max((arr_5 [i_2] [i_0]), (((/* implicit */unsigned int) (signed char)-48))))))))));
        }
        /* LoopNest 2 */
        for (signed char i_3 = 1; i_3 < 23; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned char) (_Bool)1);
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_0)))) ? (288230375614840832LL) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) : (arr_11 [i_6] [i_5] [i_4] [1U] [10U]))))));
                        }
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            arr_17 [i_0] [i_3] [i_5] [i_5] [i_4] [i_5] = ((/* implicit */unsigned short) ((unsigned char) arr_5 [i_0] [i_3 + 1]));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_11 [i_0] [i_3] [i_4] [(signed char)13] [i_7]))));
                        }
                        var_20 = ((/* implicit */long long int) (unsigned char)15);
                        arr_18 [i_5] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_0] [i_0 - 2])) ? (var_1) : (((/* implicit */unsigned int) arr_8 [i_3 - 1] [i_0 + 1] [i_0 + 1]))));
                    }
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (unsigned short)0))));
                    var_22 &= ((/* implicit */int) arr_15 [14LL] [i_3] [i_0 + 1] [i_0] [i_3 - 1]);
                    var_23 -= ((/* implicit */unsigned char) (-(((long long int) ((((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0])) + (arr_10 [i_0] [i_0] [i_0] [i_4]))))));
                }
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_24 -= ((/* implicit */unsigned int) (((+(min((((/* implicit */long long int) arr_20 [(signed char)0])), (-7745654384310168870LL))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_10 [i_8] [i_8] [(_Bool)1] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (arr_3 [i_8] [(signed char)20] [i_8]))) : (((/* implicit */int) min((arr_0 [(_Bool)1]), (var_8)))))))));
        var_25 = ((/* implicit */unsigned short) ((max((arr_20 [i_8]), (arr_20 [i_8]))) ? ((-((~(((/* implicit */int) arr_14 [(unsigned short)20] [i_8] [i_8] [i_8] [i_8])))))) : (((arr_9 [i_8]) ? (((/* implicit */int) arr_9 [(signed char)17])) : (((/* implicit */int) arr_9 [i_8]))))));
    }
    var_26 += ((/* implicit */signed char) max((((/* implicit */unsigned int) var_7)), (0U)));
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        for (unsigned int i_10 = 3; i_10 < 7; i_10 += 2) 
        {
            {
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7745654384310168870LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (4294967278U)));
                var_28 |= ((/* implicit */signed char) arr_0 [i_10]);
                /* LoopNest 3 */
                for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    for (unsigned short i_12 = 1; i_12 < 9; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 1; i_13 < 9; i_13 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) 4193792U))));
                                var_30 &= min((((arr_9 [i_13]) ? ((-(((/* implicit */int) arr_7 [(signed char)1])))) : (((int) arr_14 [(unsigned short)18] [i_10] [(_Bool)0] [i_12] [(unsigned char)9])))), (((/* implicit */int) ((((/* implicit */long long int) min((1U), (var_5)))) == (((((/* implicit */_Bool) arr_11 [i_9] [i_10] [i_11] [(unsigned short)9] [(signed char)5])) ? (-7745654384310168870LL) : (((/* implicit */long long int) 2891764749U))))))));
                            }
                        } 
                    } 
                } 
                var_31 += ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_10] [(_Bool)1] [(_Bool)1] [(signed char)4])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))) : (6U)))))));
                arr_34 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_12 [(unsigned short)0] [i_10 - 1] [(unsigned short)0]))) ? (((/* implicit */int) max((arr_12 [(_Bool)1] [i_10 - 2] [(_Bool)1]), (arr_12 [18U] [i_10 - 3] [18U])))) : ((~(((/* implicit */int) arr_12 [10U] [i_10 - 2] [10U]))))));
            }
        } 
    } 
}
