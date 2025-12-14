/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133221
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((arr_5 [i_0]) + (var_13))), (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (((min((arr_2 [i_1]), (((/* implicit */unsigned int) (unsigned short)65528)))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [9LL] [i_3])) && (((/* implicit */_Bool) arr_7 [i_0] [i_1]))))))));
                            var_14 = ((/* implicit */unsigned char) min((((max((17260854931481795003ULL), (((/* implicit */unsigned long long int) 2147483647)))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned char)137))))))), (((/* implicit */unsigned long long int) min((min((4146173758U), (((/* implicit */unsigned int) -498009145)))), (((/* implicit */unsigned int) arr_4 [(short)1] [i_1] [i_1])))))));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_3])) : (var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (unsigned char)245)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38713)))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) max((((min((var_13), (((/* implicit */unsigned int) (short)-18837)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), ((!((!(arr_0 [i_4] [i_4 - 1])))))));
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            var_18 = (unsigned short)54209;
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(((((/* implicit */_Bool) 1206457759U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
            arr_18 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_3)))))) ^ ((-(arr_2 [i_4 + 2])))))) ? (((/* implicit */unsigned long long int) (-((((_Bool)1) ? (913312162) : (((/* implicit */int) arr_12 [i_4] [i_4]))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_4])) << (((((/* implicit */int) var_11)) - (5556)))))), (var_10)))));
        }
        for (unsigned short i_6 = 2; i_6 < 11; i_6 += 4) 
        {
            var_20 = ((/* implicit */long long int) ((((((var_8) + (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) arr_9 [i_6 - 2] [i_6] [i_6] [(short)0] [i_4] [i_4])) : (((/* implicit */int) var_11)))))) + (2147483647))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1992230769U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14795123571999523551ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_4] [i_4] [i_6]), (((/* implicit */unsigned char) arr_1 [i_4])))))) : (var_4)))));
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((1836839818550566155LL) < (((/* implicit */long long int) arr_13 [i_4] [i_6 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_12 [i_4] [i_6]))))) : (max((((/* implicit */unsigned long long int) arr_13 [i_4] [i_4])), (var_7))))))));
        }
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((((-(((/* implicit */int) arr_17 [i_4 - 1])))) % (((/* implicit */int) arr_14 [i_4 - 1])))))))));
                        var_23 *= ((/* implicit */short) (!(((/* implicit */_Bool) min(((~(var_4))), (((/* implicit */unsigned int) min((arr_27 [i_4]), (var_9)))))))));
                        arr_29 [i_7] [i_8] [i_7] [i_7] &= ((/* implicit */unsigned char) 13U);
                    }
                } 
            } 
            arr_30 [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_6 [i_4 + 1] [i_4 + 1] [(unsigned char)12])) == ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_4] [(_Bool)1] [i_7] [i_7] [0U])))))))));
        }
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_3 [i_4])), (((max((((/* implicit */unsigned long long int) (_Bool)1)), (10ULL))) + ((~(var_7))))))))));
        arr_31 [i_4] [(unsigned char)2] |= ((/* implicit */unsigned short) (((~(((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [(unsigned char)2]))) : (var_4))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_4 + 2] [i_4 + 2])) ? (((((/* implicit */int) var_2)) - (((/* implicit */int) arr_6 [i_4] [i_4 + 2] [i_4])))) : (((/* implicit */int) (unsigned char)78)))))));
    }
    for (unsigned char i_10 = 1; i_10 < 10; i_10 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) ((7897565070582205099ULL) <= (var_7)))) : (((/* implicit */int) (unsigned char)7))))), ((((!(((/* implicit */_Bool) 2139768619)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (min((0U), (((/* implicit */unsigned int) arr_0 [(short)24] [i_10]))))))));
        var_26 ^= ((/* implicit */_Bool) (unsigned short)3610);
    }
    for (unsigned char i_11 = 1; i_11 < 10; i_11 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (short)8969)) ? (-1110038599222556930LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_11] [(unsigned char)8] [i_11]))))) >= (((/* implicit */long long int) ((arr_1 [i_11]) ? (23U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))), ((-(-1851299532)))))) : (4294967272U))))));
        arr_37 [0LL] [0LL] = ((/* implicit */long long int) (-(((arr_1 [i_11 + 1]) ? (((((/* implicit */_Bool) var_11)) ? (arr_20 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_11])))))));
    }
}
