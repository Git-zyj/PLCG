/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145961
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)249)) ? (((((/* implicit */_Bool) (unsigned short)3097)) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65516)))));
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((unsigned short)62439), ((unsigned short)3122))))));
        arr_3 [14ULL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((6506856365226103867LL), (-3037620048294277716LL)))) ? (max((((/* implicit */unsigned long long int) (unsigned short)3115)), (var_12))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)62413)), (-6175030437604533846LL))))))) ? (8ULL) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)-102)))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_22 -= ((/* implicit */unsigned short) arr_5 [i_0 + 2]);
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) 4294967274U)) ? (((/* implicit */unsigned long long int) -7)) : (arr_15 [i_0 + 2] [i_4 - 3] [i_4] [i_4 + 2] [i_4 + 2] [i_4] [i_4 - 3])))));
                            var_24 = ((/* implicit */signed char) (+(arr_14 [i_0 - 2] [i_1] [i_3 + 1])));
                        }
                        var_25 = ((/* implicit */int) 144110790029344768LL);
                    }
                } 
            } 
        }
        for (signed char i_5 = 1; i_5 < 19; i_5 += 2) 
        {
            var_26 += ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_15)))), (((((/* implicit */int) arr_1 [i_0 + 2])) & (((/* implicit */int) arr_1 [i_0 + 2]))))));
            arr_19 [i_5] [i_5] = ((((/* implicit */int) (!(arr_17 [i_0 - 2] [i_0 - 2] [i_5 + 1])))) <= (((/* implicit */int) arr_16 [i_0 - 2] [i_5] [(signed char)10])));
            arr_20 [i_5] [i_5 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-19LL) | (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)3115)))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)49473))));
            arr_21 [i_0] [i_0] [(_Bool)1] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_12 [i_0 - 2] [i_5 + 1]) : (arr_12 [i_0 + 1] [i_5 + 1]))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            arr_25 [i_6] = ((/* implicit */unsigned long long int) (unsigned short)49452);
            var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_4 [i_0 + 2] [i_6])), (arr_2 [i_0] [i_6])))), (((var_11) * (((/* implicit */unsigned long long int) -1998577349))))))) ? (min((695546221U), (((/* implicit */unsigned int) (unsigned char)249)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 1016U)) / (arr_18 [i_0] [12ULL] [i_6]))))))))));
            arr_26 [i_0] &= ((/* implicit */_Bool) min((((/* implicit */long long int) min((1474265877), (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 2] [i_6] [i_6] [i_6] [i_6]))))), (-8280042241120557736LL)));
        }
    }
    for (unsigned int i_7 = 2; i_7 < 18; i_7 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */_Bool) arr_13 [(signed char)1] [i_7 - 1] [i_7] [i_7 - 1] [(unsigned short)11] [i_7]);
        var_29 &= arr_15 [i_7 - 2] [i_7] [i_7 + 2] [i_7 + 1] [i_7 - 1] [i_7] [(signed char)3];
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (min((((/* implicit */unsigned long long int) arr_11 [i_7] [i_7])), (((((/* implicit */_Bool) ((2147483647) - (((/* implicit */int) arr_10 [i_7 + 1] [i_7] [i_7] [i_7 - 2]))))) ? (((((/* implicit */_Bool) 3599421083U)) ? (8388607ULL) : (((/* implicit */unsigned long long int) arr_5 [i_7 - 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [16U] [i_7])))))))));
        var_31 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_22 [i_7] [7ULL] [i_7 + 1])) * (((/* implicit */int) arr_22 [i_7] [i_7] [i_7 + 1]))))));
    }
    for (unsigned int i_8 = 2; i_8 < 18; i_8 += 4) /* same iter space */
    {
        var_32 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)3117))))) ? (((((/* implicit */_Bool) 12027943745212399546ULL)) ? (((/* implicit */int) arr_32 [i_8 - 1])) : (((/* implicit */int) (unsigned short)61238)))) : (((/* implicit */int) (unsigned short)62463))));
        arr_33 [i_8 - 2] = ((min((arr_5 [i_8 + 1]), (((/* implicit */unsigned int) (_Bool)1)))) < (min((arr_5 [i_8 - 1]), (arr_5 [i_8 + 2]))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 1; i_9 < 16; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                for (unsigned short i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    {
                        var_33 -= ((/* implicit */_Bool) (~(arr_40 [i_9 - 1])));
                        var_34 = ((/* implicit */long long int) arr_27 [i_11]);
                        arr_44 [i_9] [i_10] [i_11] [i_11] [(unsigned char)6] [i_12] = (~(((((/* implicit */_Bool) arr_28 [i_10] [8])) ? (arr_34 [i_9 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))));
                    }
                } 
            } 
        } 
        arr_45 [i_9] = ((/* implicit */short) ((arr_6 [i_9 - 1] [i_9 + 1] [i_9 + 1]) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14ULL)) ? (2530420250U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))))))));
        var_35 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-21784))) > (((((/* implicit */_Bool) (unsigned short)7390)) ? (arr_7 [i_9] [i_9] [i_9 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
    }
    var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) (unsigned short)62438))))) ? (((/* implicit */int) var_0)) : ((((_Bool)1) ? (((/* implicit */int) (short)18846)) : (((/* implicit */int) (unsigned short)10541))))))) ? (((/* implicit */int) (unsigned short)39546)) : (((/* implicit */int) min(((signed char)16), (((/* implicit */signed char) (_Bool)0)))))));
}
