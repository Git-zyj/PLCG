/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110675
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
    var_15 &= ((/* implicit */unsigned short) ((((((/* implicit */int) var_13)) == ((~(-509722047))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26189))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_9)) : (var_1))))))) : (((/* implicit */int) var_11))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)1)) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248)))));
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-12831))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (((-(18ULL))) << (((unsigned long long int) (signed char)1))))) || (((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)253)))), (((((/* implicit */int) (signed char)12)) / (var_0))))))));
        var_18 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((long long int) (short)26190)))))))));
            arr_9 [i_1] = ((var_1) >> (((((/* implicit */int) (short)-26210)) + (26260))));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                var_20 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (unsigned short)12288)))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) (signed char)-2)) : ((-(((/* implicit */int) (signed char)-1))))));
            }
            /* vectorizable */
            for (signed char i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                var_22 = ((/* implicit */signed char) arr_3 [i_4]);
                /* LoopSeq 2 */
                for (short i_5 = 2; i_5 < 11; i_5 += 4) 
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) arr_18 [i_4 - 1] [i_4 - 1])) : (((((/* implicit */int) (short)26194)) ^ (-509722038)))));
                    var_24 = ((/* implicit */unsigned long long int) var_6);
                    var_25 = ((/* implicit */int) (-(((((/* implicit */_Bool) -1976069944)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26189)))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) arr_7 [i_4]);
                        var_27 = ((/* implicit */long long int) ((((unsigned long long int) arr_6 [i_1] [i_6])) & ((~(13749150423675540644ULL)))));
                        arr_22 [i_6] [i_2] [i_4] [i_2] [i_1] = ((/* implicit */int) var_3);
                        var_28 = ((/* implicit */short) ((unsigned int) var_9));
                    }
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)27883)))))));
                        var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-23071))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_5 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_1])) % (((/* implicit */int) var_3))));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_1] [i_5 + 2] [i_4 + 1] [i_5] [i_5])) / (((/* implicit */int) arr_21 [i_7] [i_5 + 2] [i_4 + 1] [i_7] [i_7])))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_33 = ((/* implicit */int) var_13);
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 629610095213968689LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))) : (18446744073709551590ULL)))) ? ((-(-629610095213968677LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-3)))))));
                    }
                    for (unsigned char i_9 = 2; i_9 < 11; i_9 += 4) 
                    {
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-16228))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_2)) > (var_1)))) : (((/* implicit */int) arr_26 [i_9] [i_2] [i_2] [i_1]))));
                        var_36 = ((/* implicit */unsigned int) var_14);
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-26185)) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)16228)))))));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (1) : (((/* implicit */int) arr_15 [i_4] [i_4 - 1] [(signed char)3] [i_1] [10LL] [i_1]))));
                        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_5 - 2] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)34))) : (((5597392234906711412ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-57))))))))));
                    }
                }
                for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    var_40 |= ((/* implicit */int) var_11);
                    var_41 = ((((((/* implicit */_Bool) (unsigned short)24434)) ? (((/* implicit */int) (unsigned short)41101)) : (((/* implicit */int) (short)4939)))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57588))))));
                }
            }
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    arr_41 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1073725440)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)-3))));
                    arr_42 [i_11] [i_12] = ((/* implicit */unsigned short) (~(70368744177663LL)));
                    var_42 &= ((/* implicit */unsigned short) max((((int) (short)-3839)), (((/* implicit */int) (!(((/* implicit */_Bool) 5597392234906711412ULL)))))));
                    var_43 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)238)))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) == (((((/* implicit */_Bool) 68719476736ULL)) ? (-23) : (((/* implicit */int) arr_3 [(short)11])))))))));
                    arr_43 [i_11] [i_12] = ((/* implicit */unsigned short) var_9);
                }
                var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_3 [i_11]))) || (((var_1) >= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_11])))))));
            }
        }
        var_45 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)31)) & (-1073725422)));
    }
    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 2) /* same iter space */
    {
        var_46 = arr_0 [i_13];
        var_47 = ((/* implicit */short) (-(((/* implicit */int) (short)8188))));
        var_48 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_27 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) ? (arr_27 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) : (arr_27 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))) << (((((/* implicit */int) ((signed char) (unsigned short)42632))) + (125)))));
        var_49 &= ((/* implicit */short) var_6);
    }
}
