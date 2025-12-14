/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179565
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
    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1))));
    var_15 = ((/* implicit */long long int) (((-(((/* implicit */int) (short)29545)))) ^ (((/* implicit */int) (short)26336))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((arr_3 [9LL]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_1 + 1] [i_1] [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) (short)26336))))))))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) (signed char)-38))) + (2147483647))) >> (((-3983995390172033356LL) + (3983995390172033373LL)))))) / (((((((/* implicit */long long int) 1895165527U)) <= (arr_0 [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((58731948U) == (var_8))))) : (arr_8 [i_2] [i_3])))));
                        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_3])) == (arr_10 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1])))), (max((((unsigned short) 4236235348U)), (((/* implicit */unsigned short) ((short) var_2)))))));
                        var_19 &= ((/* implicit */int) ((((arr_6 [i_1 - 1]) | (4236235348U))) == (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))));
                    }
                } 
            } 
            arr_14 [i_0] = (~(min((((/* implicit */unsigned int) (unsigned short)11)), (3627835229U))));
            arr_15 [i_1] = ((/* implicit */long long int) max((((((((((/* implicit */int) var_9)) + (2147483647))) >> (((8896229190001178227ULL) - (8896229190001178205ULL))))) > (((((/* implicit */_Bool) (short)-28527)) ? (1235958755) : (((/* implicit */int) var_13)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)107)) ? (arr_12 [i_0] [i_0] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38)))))) <= (arr_3 [i_1])))));
        }
        /* vectorizable */
        for (long long int i_4 = 1; i_4 < 10; i_4 += 2) /* same iter space */
        {
            arr_20 [0] [0] [i_4] = ((/* implicit */short) ((unsigned char) (unsigned short)3));
            arr_21 [(signed char)0] [(signed char)0] = ((/* implicit */int) arr_3 [i_4 + 2]);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_25 [i_0] [i_5] = ((/* implicit */signed char) (((~(-671191572))) & (((/* implicit */int) (unsigned short)36410))));
            var_20 = ((/* implicit */_Bool) ((max((arr_9 [i_0] [i_5] [i_5] [i_5]), (arr_9 [(unsigned short)7] [i_0] [i_0] [3LL]))) | (((arr_9 [i_0] [i_0] [i_5] [i_5]) & (((/* implicit */int) (unsigned short)61378))))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 2; i_7 < 8; i_7 += 4) 
                {
                    {
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_1 [i_7 - 1]) ? (((/* implicit */int) (unsigned short)21019)) : (31))))))))))));
                        var_22 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (var_10)))) ? ((+(arr_24 [i_0] [i_5] [i_7 - 1]))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_27 [i_6] [i_7])), (arr_18 [i_5] [i_7])))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)16)))))));
                        arr_31 [i_0] [i_0] [i_6] [i_0] [i_6] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) max((4236235337U), (((/* implicit */unsigned int) 1940193564))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned short)61378)) ? (1048575U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15))))))));
                        arr_32 [i_0] [i_6] [i_7] = max(((~(((/* implicit */int) (signed char)-47)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11)) || (((/* implicit */_Bool) (short)23829))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_35 [i_0] [(_Bool)1] [9U] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)65524))));
            arr_36 [i_0] [i_8] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_34 [10LL] [i_8])) + (((/* implicit */int) (signed char)15))))));
            var_23 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [(unsigned char)5]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) -183940015)))))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26640)) ? (((/* implicit */int) (_Bool)1)) : (arr_16 [i_8])))) ? (((/* implicit */int) arr_34 [i_0] [i_8])) : (((/* implicit */int) (_Bool)1))));
        }
        var_25 = ((/* implicit */short) (~(max((arr_6 [i_0]), (((/* implicit */unsigned int) arr_19 [i_0]))))));
    }
    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
    {
        /* LoopNest 3 */
        for (int i_10 = 3; i_10 < 20; i_10 += 2) 
        {
            for (int i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                for (short i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    {
                        arr_50 [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 4294967281U)), (-111726055478753032LL)));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) var_1)))) >= (((/* implicit */int) ((_Bool) (unsigned char)65))))))) % (-1945045899485922002LL))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */long long int) (_Bool)1);
    }
    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((62U) | (((((/* implicit */_Bool) -4146183218833165915LL)) ? (1696740363U) : (((/* implicit */unsigned int) 134217727))))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}
