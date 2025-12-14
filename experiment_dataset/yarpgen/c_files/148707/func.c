/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148707
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((/* implicit */long long int) ((unsigned char) (short)24661))), (var_2))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) arr_9 [(_Bool)1] [(unsigned short)8] [(unsigned short)8] [i_3]);
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2884193398910989029LL)) ? (((/* implicit */int) (unsigned short)9780)) : (((/* implicit */int) (short)-30915))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (max((((/* implicit */unsigned long long int) var_14)), (((36028797018963968ULL) >> (((((/* implicit */int) (short)21198)) - (21140))))))))))));
                    }
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [4U] &= ((/* implicit */int) ((((max((((/* implicit */unsigned long long int) (short)3637)), (5410620449538326277ULL))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)46941)), (275455268)))))) + (((/* implicit */unsigned long long int) arr_9 [i_0] [i_4] [i_2] [i_2 + 2]))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2 + 2])) ? (134217727U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-29054)))));
                            arr_19 [i_2] [i_2] [(short)1] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) >= (-9044407426937484499LL)));
                        }
                        for (short i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                        {
                            var_22 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)45998)), (1629135999U)));
                            var_23 -= ((/* implicit */long long int) (short)7);
                            var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned int) (unsigned char)255))) || (((/* implicit */_Bool) min((-1022975814), (((/* implicit */int) (unsigned char)65))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (arr_11 [(unsigned char)2] [i_1] [i_1] [(short)4])))) ? (((((/* implicit */_Bool) 3288874541U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_6))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)13268)) ^ (((/* implicit */int) (unsigned short)6339)))))));
                        }
                        for (short i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) (((!(((((/* implicit */_Bool) arr_23 [i_0])) || (((/* implicit */_Bool) (signed char)(-127 - 1))))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) ((_Bool) 469821052U))) : (((/* implicit */int) (unsigned char)21)))) : (((((/* implicit */_Bool) arr_23 [i_2 - 1])) ? (((/* implicit */int) arr_23 [i_2 + 3])) : (((/* implicit */int) arr_10 [0U] [i_2 + 1] [i_7] [8ULL]))))));
                            var_26 = ((((/* implicit */_Bool) max((arr_3 [i_2 + 1]), (arr_3 [i_0])))) ? (min(((((_Bool)0) ? (-4611686018427387904LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14456))))), (((/* implicit */long long int) 838380637)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)1)) < (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [(short)8] [i_1] [8] [5] [7ULL])) && (((/* implicit */_Bool) 4ULL))))))))));
                        }
                        var_27 |= ((/* implicit */signed char) ((((int) ((-3258179954577250819LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) <= (((/* implicit */int) arr_25 [i_4] [i_4]))));
                    }
                    arr_26 [i_0] [i_2] [(unsigned char)6] = ((/* implicit */int) (!((!(((/* implicit */_Bool) 18446744073709551615ULL))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            for (short i_9 = 3; i_9 < 9; i_9 += 4) 
            {
                {
                    arr_33 [4U] [i_9] [i_0] = ((((/* implicit */int) max((min(((unsigned short)26417), (((/* implicit */unsigned short) (signed char)-119)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9222809086901354496LL)))))))) != (((/* implicit */int) arr_2 [i_0])));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            {
                                arr_38 [i_0] [i_9] [i_9] [i_10] [i_10] = (~(((/* implicit */int) (unsigned char)99)));
                                var_28 *= ((/* implicit */unsigned short) arr_18 [i_8] [i_0]);
                                arr_39 [i_9] [i_8] [i_11] = ((/* implicit */short) min((((/* implicit */unsigned int) (signed char)62)), (3135321524U)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_40 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_0 [(unsigned short)0] [i_0]))));
    }
    for (int i_12 = 0; i_12 < 24; i_12 += 3) 
    {
        var_29 -= ((/* implicit */short) var_3);
        arr_43 [i_12] [6LL] |= (unsigned short)27934;
    }
    var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
}
