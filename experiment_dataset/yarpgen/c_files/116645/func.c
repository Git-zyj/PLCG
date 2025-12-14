/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116645
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
    var_17 = ((/* implicit */unsigned long long int) var_16);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [9ULL] [i_3] [0ULL])) ? (max((max((((/* implicit */unsigned long long int) 0U)), (arr_5 [6U] [6U]))), (max((var_1), (8793945538560ULL))))) : (((((/* implicit */_Bool) arr_6 [8U])) ? (13510798882111488ULL) : (var_11))))))));
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_8)) ? (arr_6 [(_Bool)1]) : (((/* implicit */long long int) arr_2 [i_0] [i_0])))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (15315195542842159970ULL) : (((/* implicit */unsigned long long int) arr_6 [(_Bool)1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [8LL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))))) : (((var_14) - (arr_12 [i_0] [(unsigned short)7] [i_0] [3U] [(unsigned short)7] [i_0]))))))))));
                                arr_13 [i_0] [i_1] [2ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_2 [i_1] [i_0])) < (max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_4 [i_1])) > (arr_7 [i_0 - 1] [6U] [i_3] [i_4])))), (((((/* implicit */_Bool) var_15)) ? (arr_1 [i_4]) : (((/* implicit */long long int) arr_4 [i_1]))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) ((((max((var_4), (((/* implicit */unsigned long long int) 1317523104U)))) + (((((/* implicit */_Bool) 25U)) ? (var_6) : (((/* implicit */unsigned long long int) -2LL)))))) == (max((((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) 2513196778611617384LL)))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))) : (arr_8 [i_0] [i_0] [8ULL] [i_0])))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [8LL] [8LL])) ? (max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) (unsigned char)226)) ? (arr_5 [i_0 - 1] [i_1]) : (((/* implicit */unsigned long long int) 369991893U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [2ULL] [i_1] [i_1] [i_0] [i_0])) <= ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38640))) : (arr_5 [i_0] [i_1])))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [8ULL] [8ULL] [8ULL] [8ULL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50))) : (arr_9 [i_0] [i_1] [i_0])))) : (min((arr_8 [2U] [7U] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))))))));
                        arr_18 [8U] [i_1] [i_1] = ((/* implicit */unsigned int) (((((+(((/* implicit */int) (unsigned char)75)))) > (arr_16 [8ULL] [8ULL] [8ULL] [i_0] [(unsigned short)3]))) ? (((arr_15 [i_0 - 1] [i_2 - 1]) + ((~(var_4))))) : ((+(max((((/* implicit */unsigned long long int) (unsigned char)228)), (var_0)))))));
                    }
                    arr_19 [i_1] [(unsigned char)3] [(unsigned char)3] = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_23 += ((/* implicit */unsigned int) var_8);
}
