/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168095
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) arr_1 [i_0])))))))));
        arr_2 [12U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_20 = ((/* implicit */unsigned long long int) (signed char)-36);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_11))));
            var_22 ^= ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) (signed char)110)), (arr_4 [i_2])))));
            var_23 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_13))) * (min((arr_9 [i_2] [i_2] [i_1]), (((/* implicit */long long int) var_18))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (+(((/* implicit */int) (signed char)127)))))));
                arr_17 [i_1] [15] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (short)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)32767)) != (388500984))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) - (17647191627879871709ULL)))));
            }
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                var_25 = ((/* implicit */signed char) 3501996858U);
                arr_22 [i_5] [i_3] [i_5] &= ((/* implicit */signed char) 388500984);
                arr_23 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (38637579U)));
            }
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                arr_27 [7U] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)24560)) + (((/* implicit */int) var_10)))))));
                arr_28 [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 792970437U)) ? (arr_12 [i_1]) : (((/* implicit */int) (signed char)-112)))) > (((/* implicit */int) (!(((/* implicit */_Bool) (short)63)))))));
            }
            arr_29 [i_1] = ((/* implicit */signed char) 792970437U);
            var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_3] [i_1])) ? (arr_21 [i_1] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) var_12)))))));
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_6 [i_3]))));
            arr_30 [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_20 [(short)12] [i_3]))));
        }
        arr_31 [i_1] [i_1] = ((/* implicit */_Bool) var_14);
    }
    for (short i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        var_28 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(15145616623249379676ULL)))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), ((short)(-32767 - 1))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-24561))))) < (((/* implicit */int) ((short) 2415800898327988331ULL))))))));
        var_29 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [(short)5]))))) : (((/* implicit */int) var_17))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_7]))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_7]))) & (var_9)))))));
        arr_34 [16ULL] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_32 [i_7])))) * (((/* implicit */int) (!(((/* implicit */_Bool) 7950503811565526786LL)))))));
        var_30 -= ((/* implicit */unsigned int) (-((((~(((/* implicit */int) (short)-24561)))) - (((/* implicit */int) arr_33 [i_7]))))));
    }
    var_31 = ((/* implicit */int) var_10);
}
