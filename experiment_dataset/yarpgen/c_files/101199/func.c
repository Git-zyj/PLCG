/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101199
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
    var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (1242815671156463975ULL)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        arr_3 [(signed char)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) ((signed char) (unsigned short)50254)))))) : (((/* implicit */int) arr_1 [i_0]))));
        var_15 -= ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) min((var_10), (((/* implicit */unsigned int) var_9))))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            arr_6 [(signed char)6] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8))))), (((((/* implicit */int) (short)27558)) + (516387599)))));
            var_16 = ((/* implicit */unsigned long long int) min((((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_12)))), (((/* implicit */int) min((((/* implicit */short) arr_2 [i_0])), (var_12))))));
            arr_7 [(unsigned short)7] [(unsigned short)7] [i_1] = ((/* implicit */short) arr_5 [i_1 + 2] [i_1 + 2]);
        }
        for (signed char i_2 = 3; i_2 < 12; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 11; i_3 += 1) 
            {
                var_17 = (((!(((/* implicit */_Bool) min((arr_8 [i_3]), (var_3)))))) ? ((+(3417873944233473373ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((short) 3ULL))) < (((/* implicit */int) (unsigned short)15296)))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15282))) : (var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-126)), ((unsigned short)34253))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) (_Bool)1))))), (var_6)))));
                var_19 ^= ((/* implicit */unsigned long long int) var_12);
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            arr_20 [i_0] [i_5] [i_3] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_15 [i_0] [9] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) ((580868568277539954ULL) + (var_1))))))));
                            var_20 += (unsigned short)10586;
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) max((((unsigned int) ((unsigned int) var_13))), (((/* implicit */unsigned int) (((-(((/* implicit */int) arr_14 [i_5] [i_4] [i_0] [i_2 - 3] [i_0] [i_0])))) - ((+(((/* implicit */int) var_3))))))))))));
                        }
                    } 
                } 
            }
            var_22 += ((/* implicit */short) (~(arr_11 [i_0] [i_2] [i_0])));
            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) var_3)))));
        }
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [(signed char)9] [i_0])) / (var_1))))) ? (var_8) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] &= ((/* implicit */short) ((signed char) (-(((((/* implicit */_Bool) (signed char)19)) ? (4255462524U) : (arr_9 [i_6] [i_6]))))));
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                for (unsigned short i_9 = 4; i_9 < 12; i_9 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) ((signed char) (signed char)25));
                        arr_31 [i_6] [(short)1] [i_8] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1)))))));
                    }
                } 
            } 
        } 
        arr_32 [i_6] [i_6] = ((/* implicit */int) (((~(((var_10) & (var_7))))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7541)))));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
    }
    var_27 = ((/* implicit */unsigned short) var_3);
    var_28 += ((/* implicit */signed char) var_5);
}
