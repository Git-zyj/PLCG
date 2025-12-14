/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168524
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) -6555697118415610903LL);
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((long long int) ((_Bool) arr_1 [i_0]))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_4 [i_0] [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 4 */
            for (int i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned short) var_8);
                arr_12 [i_0] [i_2] [i_0] = arr_7 [i_0];
                arr_13 [i_0] [i_0] [i_2] [(short)1] = ((/* implicit */long long int) ((unsigned long long int) (+(arr_10 [i_0] [i_2] [i_2] [i_0]))));
                var_17 = ((/* implicit */unsigned int) (+(((unsigned long long int) 3213527754824208237LL))));
            }
            for (int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_4])))) : (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_2]))))));
                arr_16 [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3343476389U)) ? ((~(4093317086U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_2]))))) ? (((((/* implicit */_Bool) 4093317099U)) ? (arr_3 [i_0]) : (((/* implicit */int) arr_4 [i_0] [i_2])))) : (((/* implicit */int) arr_14 [(signed char)18] [1ULL] [i_4])))))));
                var_19 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0]);
                /* LoopSeq 2 */
                for (short i_5 = 1; i_5 < 15; i_5 += 3) /* same iter space */
                {
                    arr_19 [i_5] [i_5 + 4] [i_0] [i_5] = ((/* implicit */unsigned long long int) max((arr_11 [i_5 + 3]), (arr_11 [i_5 + 1])));
                    arr_20 [(_Bool)1] [i_0] [(unsigned short)9] [i_0] [(_Bool)1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((3343476389U), (((/* implicit */unsigned int) arr_11 [i_2]))))) ? (((((/* implicit */_Bool) 201650209U)) ? (4093317086U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [(_Bool)1]))))) : (((/* implicit */unsigned int) (-(var_9))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_10 [i_0] [i_2] [i_4] [i_0])))) : (951490906U));
                }
                for (short i_6 = 1; i_6 < 15; i_6 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_13))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        arr_25 [i_0] [i_0] [i_4] [i_6] [i_0] [i_6] [i_0] = (~((-(((/* implicit */int) arr_22 [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_7])))));
                        arr_26 [i_7] [i_7] [i_7] [i_7] [0] [i_7] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((arr_9 [i_6 + 4] [i_4] [(signed char)2]) % (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_0]))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_7])) == (((/* implicit */int) arr_0 [i_0])))))))))));
                    }
                    arr_27 [i_6] [i_0] [i_4] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (var_7))))) : (3343476389U)))) + ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (((/* implicit */short) (_Bool)0)))))) : (7428676316821319423ULL)))));
                }
                var_21 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_22 [i_0] [i_4] [i_4] [i_4])), (arr_10 [i_0] [i_0] [i_2] [i_0])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) 7428676316821319423ULL)) ? (((/* implicit */unsigned long long int) arr_10 [12U] [12U] [i_2] [i_0])) : (arr_17 [i_0] [i_2] [i_2] [i_2] [i_0]))))));
            }
            for (int i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_18 [i_0]) : (arr_18 [i_2]))));
                arr_30 [i_0] = arr_22 [i_0] [i_0] [i_0] [i_0];
            }
            for (int i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */_Bool) arr_18 [(unsigned char)8]);
                arr_33 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_29 [i_9] [i_9] [i_0] [i_9])))))));
                var_24 = ((/* implicit */_Bool) max((max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_2]))), (min((arr_4 [i_2] [i_9]), (arr_4 [i_2] [i_2])))));
            }
            var_25 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((long long int) var_4))) ? ((~(arr_31 [i_2] [i_2] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [1ULL]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
        }
        /* vectorizable */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            arr_36 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) -1)) : (var_4)));
            var_26 = ((/* implicit */unsigned int) (-(arr_7 [i_0])));
        }
        var_27 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)60755))))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
    }
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((var_8) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))) ? ((~(max((var_10), (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) var_6)))) : ((~(var_9))))))));
}
