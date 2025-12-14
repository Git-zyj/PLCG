/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147222
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
    var_12 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 6533921824793868715LL)) ? (((/* implicit */unsigned long long int) 6533921824793868715LL)) : (15890360824319299363ULL))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(unsigned char)22] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))) - ((-(((((/* implicit */_Bool) var_9)) ? (-6533921824793868689LL) : (2013317820521330484LL)))))));
                arr_5 [i_0] [(unsigned char)10] [i_0] = ((/* implicit */unsigned char) (short)18137);
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_2] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])) && (((/* implicit */_Bool) var_7))));
                                arr_15 [(unsigned char)16] [i_1] [(unsigned char)16] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (((((/* implicit */_Bool) 15890360824319299378ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_10 [i_0] [i_0] [i_0] [i_0 - 2] [i_0])))));
                                arr_16 [i_2] [i_1] [i_2] [i_3] [(unsigned char)14] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18145)) ? (2556383249390252252ULL) : (((/* implicit */unsigned long long int) var_8))))) ? (((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) var_4)))) : (((/* implicit */int) ((-6533921824793868715LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */long long int) min((((unsigned char) (unsigned char)9)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_23 [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_6] [i_0])) && ((!(var_10)))))), ((+((~(3ULL)))))));
                                arr_24 [i_0] [(unsigned char)12] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */long long int) ((((((/* implicit */int) var_0)) > (((/* implicit */int) var_6)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_18 [i_0] [i_6] [i_6] [i_2])), (var_7))))) & (((((/* implicit */_Bool) -306701958)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))) : (var_9))))) : (((((/* implicit */_Bool) (short)-18145)) ? (((var_6) ? (((/* implicit */unsigned long long int) -42994558430977800LL)) : (arr_9 [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) -1993297251))))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    arr_28 [i_0] [i_1] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_19 [(unsigned char)7] [i_1] [i_7] [(unsigned char)7] [i_7] [i_1])))) * (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_26 [i_0 + 1] [15ULL] [i_7]))))));
                    arr_29 [(unsigned char)13] [i_1] [1ULL] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)163))));
                    arr_30 [i_0] = ((/* implicit */long long int) arr_6 [i_0]);
                }
            }
        } 
    } 
}
