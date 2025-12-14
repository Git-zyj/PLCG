/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133491
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
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_3 [i_1 - 2] [i_1 + 1]))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned short) var_3))) : (((((/* implicit */int) arr_5 [i_1] [i_1])) | (((/* implicit */int) arr_5 [i_1] [i_1 - 1])))))) : (((/* implicit */int) ((short) ((unsigned long long int) var_13))))));
                var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1])) || (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (((/* implicit */_Bool) var_4)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1])) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))) : (min((((((/* implicit */_Bool) var_0)) ? (var_0) : (var_2))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            {
                arr_14 [i_2] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_17 -= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_0))))));
                            /* LoopSeq 3 */
                            for (signed char i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) arr_9 [(_Bool)1] [(unsigned short)7])))))));
                                arr_23 [i_2] [i_5] [i_4] [i_4] [i_5] [i_5] [(short)4] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2]))))));
                                arr_24 [i_6] [i_6] [i_5] [i_5] [i_5] [(unsigned char)4] [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_2]), (arr_0 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [8U]))))))));
                            }
                            for (signed char i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                            {
                                arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_13)))) % (((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3])))))));
                                var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_1 [i_3 - 1] [i_3 - 1])))));
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_7 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))))));
                                arr_29 [i_5] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */unsigned int) arr_3 [i_2] [i_2])), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
                            }
                            for (signed char i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_14))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) ((short) arr_9 [i_2] [i_2])))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [(short)3] [i_3 - 1]))) : (var_15))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_17 [i_3] [i_4]), (arr_10 [i_8] [i_5])))))));
                                var_23 ^= min((((((/* implicit */_Bool) var_2)) ? ((-(var_8))) : ((-(arr_15 [i_4] [(signed char)2] [(signed char)2]))))), (var_8));
                                arr_33 [i_2] [i_5] [i_2] [8ULL] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_8] [i_3] [i_5] [3U] [i_8])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_0) : (var_2))))))), ((~((~(var_7)))))));
                            }
                            var_24 *= ((/* implicit */short) max((((/* implicit */unsigned int) arr_27 [i_4] [i_4] [0ULL] [i_4] [i_4])), (((((/* implicit */_Bool) arr_27 [i_5] [i_5] [(signed char)4] [i_5] [i_5])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_5] [i_4] [(signed char)6] [i_5] [(signed char)0])))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_14)) ? (var_0) : (arr_15 [(short)2] [(short)2] [(_Bool)1]))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))))) ? (((((/* implicit */unsigned long long int) arr_12 [i_3 + 1] [i_3 - 1])) * (arr_32 [i_3 + 1] [i_2] [i_3 + 1] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) (-(((var_15) << (((arr_1 [i_3] [(_Bool)1]) - (11924773561691544442ULL))))))))));
            }
        } 
    } 
}
