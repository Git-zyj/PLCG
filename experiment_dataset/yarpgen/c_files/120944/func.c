/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120944
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
    for (short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((6874019496864422663ULL), (arr_2 [i_0 - 2])))) || (((/* implicit */_Bool) (-(var_8))))));
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) arr_0 [i_0] [i_0 - 1]))));
        var_13 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0 + 3] [i_0 - 1])))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) arr_0 [i_0 + 3] [i_0 + 1])), (arr_1 [i_1]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_0 - 2])) : (((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_1])))))));
            var_14 = ((var_3) >> (((max((((/* implicit */long long int) arr_0 [i_0 + 1] [i_0])), (var_8))) - (744236054407570794LL))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (long long int i_3 = 3; i_3 < 20; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            arr_15 [8LL] [i_4] [i_4] [(short)9] = ((/* implicit */short) max(((((+(7966551917515258669ULL))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))))), (7966551917515258669ULL)));
                            arr_16 [i_4] [i_3 - 3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (~(((arr_7 [i_0] [i_1] [i_2] [i_4]) ^ (((/* implicit */unsigned long long int) var_10))))));
                            arr_17 [i_0 - 2] [i_2] = (+(10480192156194292959ULL));
                            arr_18 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1] [(unsigned short)14] [i_0 - 3] = ((/* implicit */unsigned char) min((7966551917515258669ULL), (((/* implicit */unsigned long long int) (unsigned short)41608))));
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) -1369908300190995761LL))))))))))));
                        }
                        var_16 -= ((/* implicit */_Bool) 1369908300190995760LL);
                        arr_19 [i_3] [i_2] [i_0] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_12 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_3 - 3])), (arr_10 [1LL]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1492103883U))))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */short) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) arr_10 [i_0])))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_18 -= ((max((max((((/* implicit */unsigned long long int) arr_8 [i_0])), (4215555661057823440ULL))), (((/* implicit */unsigned long long int) ((1492103883U) <= (633503765U)))))) % ((((-(var_3))) + (((/* implicit */unsigned long long int) ((arr_11 [i_5] [i_5] [i_0 - 2]) / (((/* implicit */int) (short)32758))))))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                var_19 = ((/* implicit */short) ((max((7966551917515258669ULL), (((/* implicit */unsigned long long int) (unsigned short)12848)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((-16LL), (((/* implicit */long long int) arr_21 [i_0] [i_0 - 2])))) <= (((/* implicit */long long int) 1968288287U))))))));
                var_20 -= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_5] [13U] [13U] [(unsigned short)4] [i_6]))))), (15LL)));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_12 [i_0] [i_0 + 2] [i_0 - 1] [i_0 - 2]), (arr_12 [i_0] [i_0 - 3] [i_0 + 2] [i_0 + 1])))) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-10)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (unsigned char)240))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_1))));
                }
                arr_27 [i_0] [(_Bool)1] [i_6] [i_6] = ((/* implicit */unsigned char) (-(-4526878084153115736LL)));
            }
        }
        var_24 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0]))));
    }
    for (long long int i_8 = 1; i_8 < 20; i_8 += 4) 
    {
        arr_31 [i_8] = ((/* implicit */long long int) var_7);
        arr_32 [i_8] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) > (arr_29 [i_8 + 3]))))));
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned char)240)))))));
        arr_33 [i_8] [i_8] = ((/* implicit */_Bool) arr_30 [(_Bool)1]);
    }
    var_26 = (short)7257;
    var_27 |= ((/* implicit */short) max((min((((((/* implicit */unsigned long long int) var_8)) / (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (unsigned char)35)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | ((+(var_3)))))));
    /* LoopSeq 1 */
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        arr_36 [i_9] = ((/* implicit */short) var_2);
        var_28 ^= ((/* implicit */signed char) arr_12 [i_9] [(short)15] [(short)15] [i_9]);
    }
}
