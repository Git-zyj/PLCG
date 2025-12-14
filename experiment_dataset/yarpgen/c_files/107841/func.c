/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107841
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
    var_18 = ((/* implicit */unsigned short) var_5);
    var_19 = ((/* implicit */long long int) var_7);
    var_20 += (((((_Bool)1) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (4499201580859392LL)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (var_8)))))) >= (((/* implicit */int) ((_Bool) (_Bool)1))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) ((unsigned char) ((_Bool) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_2 [(_Bool)1] [i_0])))), (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_22 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16))))), (arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_23 *= ((/* implicit */unsigned long long int) 0);
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_4 [i_1])) - (195)))));
        var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_4 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(arr_6 [(_Bool)1] [i_2]))), (((((/* implicit */_Bool) 30LL)) ? (((/* implicit */int) arr_7 [i_2])) : (11)))))) || (((/* implicit */_Bool) ((arr_5 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_14 [i_4] [(unsigned short)13] [i_4] = ((/* implicit */short) var_11);
                    var_27 = var_13;
                    arr_15 [i_2] = min((min((((((/* implicit */_Bool) (short)14958)) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) (_Bool)1)))), (arr_11 [i_3]))), (((((int) arr_9 [i_2])) * (((/* implicit */int) max((var_2), ((short)5548)))))));
                }
            } 
        } 
        arr_16 [6LL] = ((_Bool) (-((+(((/* implicit */int) var_15))))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 4) 
        {
            var_28 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_17 [i_5 + 1])) ? (arr_12 [i_5 - 1] [i_5 + 1] [i_5 + 2]) : (arr_12 [i_5 - 1] [i_5 + 2] [i_5 - 1]))) + (9223372036854775807LL))) << (((((min((arr_12 [i_5 + 2] [i_5 + 2] [i_5 + 1]), (arr_17 [i_5 + 1]))) + (4406468254849004341LL))) - (39LL)))));
            var_29 = ((/* implicit */_Bool) 9139920661732112245ULL);
            var_30 = ((((((/* implicit */long long int) ((/* implicit */int) (short)-14956))) != (arr_12 [i_5] [i_2] [i_2]))) && (((/* implicit */_Bool) 12786936667166241778ULL)));
            arr_19 [i_5] = var_1;
        }
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) var_7))));
            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */int) arr_21 [20LL] [i_6])) % (((((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) arr_7 [i_2]))))) + (((int) (_Bool)0)))))))));
        }
    }
}
