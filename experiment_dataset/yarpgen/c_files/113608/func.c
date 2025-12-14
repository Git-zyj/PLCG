/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113608
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4908))) : (arr_2 [i_0] [i_1])))))) < (min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), ((~(arr_3 [i_0 + 1] [i_1] [i_1])))))));
                var_14 = max((min((((/* implicit */unsigned long long int) (_Bool)1)), (10515718719903475073ULL))), (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_0 [i_1])))), (min((arr_1 [i_0] [i_0 - 1]), (((/* implicit */unsigned long long int) var_8)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) ((short) var_2))))))) : ((((~(var_10))) / (((/* implicit */unsigned long long int) var_2))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_8 [(_Bool)0] &= ((/* implicit */unsigned short) min((min((min((arr_5 [i_2]), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) arr_7 [9ULL] [i_2] [i_2])) : (((/* implicit */int) var_7)))) << ((((-(arr_1 [i_2] [i_3]))) - (11256750467053124412ULL))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            arr_13 [i_5] [i_2] [i_5] [i_5] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (var_4) : (min((((/* implicit */long long int) var_7)), (arr_0 [i_5])))))));
                            arr_14 [i_5] [i_3] [i_5] &= ((/* implicit */unsigned long long int) ((min((min((5151435699805682569ULL), (((/* implicit */unsigned long long int) arr_10 [i_4] [i_3] [i_4] [i_5])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)9384))))))) <= (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_12 [i_2] [i_2])))))));
                            /* LoopSeq 3 */
                            for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_2] = min(((((_Bool)1) ? (((arr_11 [i_5] [i_3] [i_3]) ? (15787757381515958475ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [i_3] [i_3] [5ULL]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_2 [i_2] [i_2])))))), (((unsigned long long int) arr_1 [i_5] [i_2])));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_15 [i_4] [i_3] [i_4] [i_6] [i_6] [i_3] [i_3]) - (((/* implicit */unsigned long long int) arr_5 [i_2]))))) || ((!(((/* implicit */_Bool) arr_5 [i_2]))))));
                                var_17 = min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_4] [i_5] [i_4] [i_5] [i_6])) | (((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_2])) : ((~(((((/* implicit */int) var_0)) & (((/* implicit */int) arr_18 [i_6] [i_5] [i_4] [i_3] [i_2]))))))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((((/* implicit */int) var_6)) & (((/* implicit */int) ((var_11) <= (arr_4 [i_2])))))) / (((/* implicit */int) (((~(arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [4LL]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || ((_Bool)1)))))))))))));
                            }
                            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                            {
                                arr_22 [i_2] [4LL] [i_3] [i_4] [i_5] [i_5] [i_7] &= ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_21 [i_2] [i_3] [i_4] [i_5] [i_4] [i_7 + 1])))) : (((/* implicit */int) arr_7 [i_2] [i_3] [i_7]))))) <= (var_2));
                                var_20 = ((/* implicit */unsigned short) max((max((arr_11 [i_7 + 1] [i_5] [i_3]), (arr_11 [i_3] [i_4] [i_5]))), (max((arr_11 [i_5] [i_4] [i_2]), (arr_11 [i_2] [i_2] [i_2])))));
                            }
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                arr_25 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_4] [i_3] [7LL] [i_3])))))));
                                var_21 = ((/* implicit */unsigned short) var_0);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
