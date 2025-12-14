/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139759
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [4ULL])) ? (arr_4 [i_2] [i_1] [i_0]) : (arr_0 [4ULL])))))) ? (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) == (2199023253504ULL)))) >> (((18446741874686298111ULL) - (18446741874686298107ULL))))) : (max((((/* implicit */int) ((arr_5 [i_2] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))), ((~(((/* implicit */int) arr_2 [i_1]))))))));
                    var_16 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [(_Bool)0]))))) + (((((/* implicit */_Bool) arr_4 [i_2] [(_Bool)0] [i_0])) ? ((((_Bool)1) ? (arr_0 [i_2]) : (arr_5 [i_1] [i_0]))) : (arr_0 [i_2])))));
                    var_17 = ((/* implicit */_Bool) 6755399441055744ULL);
                    arr_8 [(_Bool)1] |= ((/* implicit */_Bool) max((((arr_2 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_4 [(_Bool)1] [i_1] [i_2]))), (((arr_4 [i_0] [i_1] [i_2]) + (arr_4 [i_2] [i_1] [i_0])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            {
                var_18 = max((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_10 [i_3])))), ((+(((/* implicit */int) arr_7 [i_3] [i_4]))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (1464742286429937487ULL))));
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_10 [i_3]))))))), (((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3])) ? (arr_3 [i_3] [i_4] [i_5]) : (arr_3 [i_3] [i_4] [i_5])))));
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_3]))))) ? (((1152920405095219200ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_3] [i_3]))))) : ((~(arr_0 [(_Bool)1])))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_4 [i_5] [i_4] [i_3])))) ? (min((11189660935234869402ULL), (((/* implicit */unsigned long long int) arr_13 [i_5] [i_3] [i_3])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_5] [11ULL] [11ULL] [11ULL])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */unsigned long long int) arr_16 [i_3] [i_3] [(_Bool)1] [i_4])), ((-(1152920405095219200ULL))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_3])) % (((/* implicit */int) (_Bool)1))))), (arr_19 [(_Bool)1] [i_4] [i_4] [i_3])));
                    arr_20 [i_3] [i_3] [17ULL] [(_Bool)1] = (~(max((((arr_7 [i_3] [13ULL]) ? (arr_3 [i_6] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_3] [i_3] [14ULL] [i_6]))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_15 [i_4]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2199023253512ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((arr_16 [i_7] [i_6] [i_4] [(_Bool)1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) min((arr_18 [i_3] [i_4] [i_6] [i_3]), (arr_19 [16ULL] [i_4] [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_5 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_7]))) : (arr_4 [i_7] [19ULL] [i_4]))) : (((9711313328891283921ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [19ULL])))))))));
                        var_23 = ((/* implicit */_Bool) 15104148121778992192ULL);
                    }
                    var_24 = ((/* implicit */_Bool) (((((~(2305842734335787008ULL))) * ((((_Bool)1) ? (arr_3 [i_4] [11ULL] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_3]))))))) >> ((((-(3932160ULL))) - (18446744073705619412ULL)))));
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_0 [(_Bool)1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2199023253512ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_4]))))))))));
                    var_26 |= (!(((/* implicit */_Bool) ((9651677217960311203ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_3])) & (((/* implicit */int) arr_2 [i_8]))));
                }
                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_12 [i_3]) ? (1152920405095219203ULL) : (arr_19 [i_3] [i_3] [i_4] [i_3]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3])))))) ? (((/* implicit */unsigned long long int) ((arr_22 [15ULL]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_4] [i_4])))))))) : (arr_6 [13ULL] [i_3] [i_4] [i_4])));
            }
        } 
    } 
}
