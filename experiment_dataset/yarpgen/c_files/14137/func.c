/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14137
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_13))));
        var_15 *= ((/* implicit */short) min((min((((/* implicit */int) min((arr_1 [i_0] [0ULL]), (((/* implicit */signed char) arr_0 [10U]))))), (((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)11)))))), (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-32)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [8LL] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_6)), (var_7)));
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) -7102148970941875571LL)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (unsigned short)49152)))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_2])) : (((/* implicit */int) arr_5 [i_1] [i_1 - 1] [i_1 - 1]))))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) var_3);
        var_18 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17099)) ? (arr_10 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)17)))))), (((((/* implicit */_Bool) 2305843009212645376LL)) ? (((/* implicit */unsigned long long int) ((var_12) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3])))))) : (((18ULL) | (9563545328766868036ULL)))))));
        var_19 = ((/* implicit */int) max((min((((/* implicit */unsigned short) arr_0 [i_3])), (arr_5 [i_3] [i_3] [i_3]))), (((/* implicit */unsigned short) var_8))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            for (unsigned short i_5 = 3; i_5 < 11; i_5 += 4) 
            {
                for (unsigned char i_6 = 3; i_6 < 9; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((long long int) ((arr_14 [i_3]) >= (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [(signed char)9] [i_4]), (((/* implicit */unsigned char) arr_18 [i_6 - 1] [i_5 - 2])))))))));
                        var_21 |= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)16388), (((/* implicit */unsigned short) arr_18 [i_4 - 1] [(signed char)7])))))) * (((arr_11 [i_3] [i_5 - 3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)11] [i_4 - 1]))))))) | (arr_13 [i_5 + 1])));
                        var_22 = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)245)), ((+(((/* implicit */int) arr_1 [i_3] [(signed char)4]))))));
                        arr_22 [i_5] [i_6 - 1] [i_5] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65532)), (16289227334413933354ULL)))) ? (2632981341U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41))))), (((/* implicit */unsigned int) ((arr_6 [i_5 - 3] [4ULL] [11ULL] [i_5 - 3]) ? (((/* implicit */int) arr_6 [i_5 - 3] [i_5] [i_5 - 2] [i_5 + 1])) : (((/* implicit */int) arr_6 [i_5 - 1] [i_5] [i_5 - 3] [i_5 - 3])))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) arr_11 [(short)5] [4LL]);
        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (4226233679656131040ULL))))));
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7] [i_7]))) | (var_12))))));
    }
    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
    {
        arr_28 [i_8] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)49152))));
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_13 [i_8]))));
    }
    var_27 += max((((/* implicit */long long int) (+((~(3831323656U)))))), (var_12));
}
