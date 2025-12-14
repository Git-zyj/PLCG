/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120432
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */int) (_Bool)1);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) arr_2 [i_1]);
            arr_8 [i_0] [i_1] = ((/* implicit */long long int) ((signed char) (-(1541477885))));
        }
        var_21 = ((/* implicit */_Bool) var_14);
        arr_9 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0])) | (((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (var_9) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0])))))));
        var_22 &= ((/* implicit */unsigned char) var_0);
    }
    for (short i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_7 [i_3] [i_2])))), (arr_3 [i_2])))) : (((/* implicit */int) min((min((arr_6 [i_2]), (((/* implicit */unsigned short) var_0)))), (arr_7 [i_2] [i_2]))))));
            arr_14 [i_3] = ((/* implicit */signed char) min(((+(((/* implicit */int) var_5)))), (min((((/* implicit */int) arr_6 [i_3])), (var_14)))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_24 = ((/* implicit */long long int) var_6);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_8))));
                            var_26 = ((/* implicit */int) ((((/* implicit */int) arr_19 [i_2] [i_2] [i_4] [i_5] [i_6])) == (((/* implicit */int) ((signed char) arr_12 [i_6])))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                        {
                            arr_24 [i_2] [i_3] [i_4] [i_5] [i_7] = ((/* implicit */_Bool) arr_6 [i_2]);
                            var_27 = ((/* implicit */long long int) ((((_Bool) arr_19 [i_2] [i_3] [i_4] [i_2] [i_7])) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) arr_2 [i_3])))))));
                        }
                        for (int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((unsigned int) (signed char)-82)) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_11 [i_4] [i_4]), (arr_5 [i_2] [i_3]))))))), (((/* implicit */unsigned int) (-(var_3))))));
                            arr_28 [i_4] [i_4] [i_4] [i_3] [i_8] &= ((/* implicit */unsigned int) ((long long int) max((((/* implicit */int) arr_25 [i_2] [i_3] [i_2] [i_2] [i_2])), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) var_12)))))));
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (-(((long long int) arr_23 [i_2] [i_3] [i_4] [i_5] [i_4] [i_2] [i_5])))))));
                        }
                        arr_29 [i_2] [i_3] = ((/* implicit */int) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_14)) : (var_9)))), (9223372036854775804LL))), (((/* implicit */long long int) arr_5 [i_4] [i_4]))));
                    }
                } 
            } 
        }
        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
        {
            var_30 = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))) >= (1038462084U));
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (((((~(((/* implicit */int) arr_25 [i_9] [i_2] [i_2] [i_2] [i_2])))) + (2147483647))) >> (((((/* implicit */int) max((((unsigned short) arr_31 [i_2])), (((/* implicit */unsigned short) ((signed char) var_4)))))) - (14093))))))));
        }
        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_2]))))) ? (var_13) : ((+((-(((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
        var_33 = ((/* implicit */unsigned int) (short)-9114);
    }
    var_34 = ((/* implicit */unsigned long long int) var_0);
}
