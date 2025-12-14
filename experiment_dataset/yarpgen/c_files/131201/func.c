/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131201
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        var_16 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 10318708362402011610ULL)) ? (10318708362402011610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250)))));
        var_17 = ((/* implicit */unsigned int) ((arr_0 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))) : (3220282815465018992LL)));
    }
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_11)))) ? (((((/* implicit */_Bool) var_14)) ? (1071644672U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))));
    var_19 ^= ((/* implicit */unsigned long long int) var_3);
    var_20 = ((/* implicit */long long int) (~(var_15)));
    /* LoopSeq 3 */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((3550083610U) - (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) var_9)))), (((/* implicit */int) arr_9 [i_1])))))));
                        var_22 ^= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_9 [i_4])), ((unsigned char)255)))), (((((/* implicit */_Bool) var_3)) ? (8128035711307540006ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [(unsigned char)9]))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)105)), (arr_11 [i_1] [i_1] [(short)4] [12U] [i_3]))))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */int) max((var_23), (((int) 14589834228228702015ULL))));
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_3]))))) <= (max((((((/* implicit */_Bool) 18446744073709551594ULL)) ? (((/* implicit */unsigned long long int) arr_13 [i_1] [i_2] [i_3] [i_4] [i_5])) : (arr_4 [i_2] [i_4] [20LL]))), (((/* implicit */unsigned long long int) (-(1035993660U)))))))))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-125)) ? (((((/* implicit */_Bool) arr_13 [i_1] [7LL] [i_3] [i_4] [7LL])) ? (arr_13 [i_1] [i_2] [19] [i_4] [19]) : (arr_13 [i_5] [i_4] [i_3] [i_2] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (arr_4 [i_1] [i_2] [i_4]) : (arr_4 [i_1] [i_2] [i_3]))) ^ (((arr_4 [i_1] [i_2] [i_3]) >> (((((/* implicit */int) var_12)) - (129))))))))));
                        }
                    }
                } 
            } 
        } 
        arr_17 [i_1] [i_1] = ((/* implicit */signed char) arr_8 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 9; i_6 += 1) 
    {
        var_27 &= ((/* implicit */unsigned short) (+(10318708362402011609ULL)));
        arr_21 [i_6 + 2] = ((/* implicit */int) ((unsigned long long int) arr_6 [i_6 + 2]));
        var_28 = ((signed char) (short)(-32767 - 1));
        var_29 = ((/* implicit */_Bool) max((var_29), (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)-8835))))));
    }
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        arr_26 [i_7] [i_7] = ((((/* implicit */_Bool) arr_4 [i_7] [i_7] [11U])) ? (arr_14 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (11853996755581801107ULL));
        var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)-32764))))) ? (((/* implicit */int) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7])) : (((((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_11 [i_7] [(signed char)10] [i_7] [18LL] [i_7]))))));
    }
}
