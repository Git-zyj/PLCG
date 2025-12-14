/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180585
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
    var_15 = ((/* implicit */unsigned long long int) var_6);
    var_16 = ((/* implicit */short) var_3);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_17 += ((/* implicit */long long int) (!(min((arr_0 [i_0]), (arr_0 [(_Bool)1])))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((unsigned int) min((((/* implicit */long long int) var_3)), (var_8)))))));
        arr_4 [i_0] |= ((/* implicit */unsigned int) var_4);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (-(arr_6 [i_0] [i_0])));
                    arr_12 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((var_10) << (((arr_8 [i_0]) - (505523073U))))), ((-(arr_5 [i_0] [i_1] [i_0])))))) == (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) var_11)))) : (var_14)))));
                }
            } 
        } 
        var_19 ^= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0]))))) >> (((var_5) - (3171193325976060379ULL)))));
    }
    for (int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (signed char)-7)))))))));
        arr_15 [i_3] [i_3] = ((/* implicit */short) ((unsigned int) var_4));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
        {
            arr_22 [i_4] [i_4] = ((/* implicit */int) var_2);
            var_21 -= ((/* implicit */short) (-(((/* implicit */int) var_6))));
            arr_23 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) var_10);
            arr_24 [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_7)))) ? (min((1459299076), (var_0))) : (((/* implicit */int) max((arr_19 [i_4]), (arr_19 [i_4]))))));
        }
        for (signed char i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
        {
            var_22 &= ((/* implicit */unsigned int) (signed char)(-127 - 1));
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) min((arr_26 [i_6] [i_6]), (arr_26 [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) arr_6 [i_6] [i_4])) : (((((/* implicit */_Bool) arr_21 [i_4] [i_4])) ? (min((var_5), (((/* implicit */unsigned long long int) (signed char)2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6] [i_6])))))))));
            var_24 = ((/* implicit */unsigned long long int) var_12);
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) min((((((/* implicit */int) (signed char)-3)) | (((/* implicit */int) arr_25 [i_6] [i_4])))), (var_0))))));
        }
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                {
                    arr_34 [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_32 [i_4] [(_Bool)1] [i_4]))))), (((arr_31 [i_8] [i_7] [i_4]) ? (((/* implicit */int) arr_31 [i_4] [i_7] [i_7])) : (((/* implicit */int) (unsigned char)255))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) (~(max((arr_8 [i_4]), (arr_8 [i_7])))));
                                arr_39 [2U] [i_4] [i_4] = ((/* implicit */short) 8300361857909339486ULL);
                            }
                        } 
                    } 
                    arr_40 [i_4] [i_4] = ((/* implicit */unsigned short) var_3);
                }
            } 
        } 
        var_27 -= ((/* implicit */short) ((unsigned long long int) var_7));
        arr_41 [i_4] = ((/* implicit */int) var_4);
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4])) ? (arr_9 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_4] [i_4] [i_4])) ? (arr_38 [i_4] [i_4] [i_4]) : (var_3)))) : (((((/* implicit */_Bool) arr_38 [i_4] [(signed char)6] [i_4])) ? (arr_9 [i_4] [i_4] [(signed char)21]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
    }
    var_29 = ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) (signed char)2)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
    {
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_0)) - (((((/* implicit */_Bool) 10146382215800212130ULL)) ? (var_8) : (var_8)))));
        var_31 = ((/* implicit */unsigned long long int) var_6);
    }
}
