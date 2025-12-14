/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183921
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = min((max((1472992243970748835ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) var_14))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [(_Bool)1] [i_1] = (_Bool)0;
                    var_18 = var_2;
                }
            } 
        } 
        arr_9 [i_0] [i_0] |= max((((((/* implicit */_Bool) ((unsigned long long int) 16973751829738802781ULL))) ? ((~(var_11))) : (181785342734629202ULL))), (min((arr_7 [i_0 - 1] [i_0 - 1] [i_0]), (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) max((min((1472992243970748835ULL), ((((_Bool)0) ? (var_9) : (((/* implicit */unsigned long long int) var_5)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1472992243970748828ULL)) ? (var_6) : (var_4)))) ? (arr_7 [i_4] [4ULL] [i_4]) : (max((var_7), (((/* implicit */unsigned long long int) var_15))))))));
                        var_20 = ((/* implicit */_Bool) ((((var_9) - (((/* implicit */unsigned long long int) var_16)))) * (max((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) (_Bool)0))))), (min((((/* implicit */unsigned long long int) 1706359316U)), (var_11)))))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) 181785342734629186ULL))));
                        arr_21 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)))) ? (((var_13) * (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_12)), (var_10)))))) : (max((var_1), (((/* implicit */unsigned long long int) arr_5 [i_4 + 2] [i_4 + 2] [i_0 + 1]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 3; i_7 < 13; i_7 += 1) 
            {
                {
                    var_22 ^= ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_17)), (18264958730974922408ULL)))));
                    var_23 = var_9;
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        arr_30 [i_0] [10ULL] [10ULL] [i_0] |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 18264958730974922413ULL)) ? (arr_7 [i_0] [i_7 - 2] [5U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_24 = arr_29 [i_0] [6U] [i_7] [i_8];
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_25 = ((unsigned long long int) ((unsigned long long int) (((_Bool)1) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                        arr_33 [i_0] [i_0] [i_0] [12ULL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_20 [i_0 + 1] [i_7 + 1])), ((((_Bool)1) ? (arr_7 [i_9] [6ULL] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [10ULL])))))))) ? ((-(max((arr_0 [i_0]), (((/* implicit */unsigned int) var_12)))))) : (((3312040691U) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) 12052148576932319745ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_26 = ((/* implicit */_Bool) (-(var_3)));
                        var_27 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((arr_0 [i_9]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(_Bool)1] [i_6] [i_9])))))) : (var_7))) - (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_7 + 1])) ? (arr_28 [i_0] [4U] [(_Bool)1] [i_6]) : ((((_Bool)0) ? (12258767366517679469ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 2; i_10 < 12; i_10 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_0 [i_0 + 1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (15697103701596507286ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (var_4))))));
                            arr_36 [(_Bool)1] [i_6] [6U] [i_7] = max((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 13079050046819955225ULL))))))), (max((var_16), (arr_0 [i_7 - 3]))));
                            arr_37 [i_7] [i_10] [i_9] [i_9] [i_7] [1ULL] [i_7] = ((/* implicit */unsigned long long int) var_6);
                            arr_38 [1U] [i_7] = ((_Bool) ((unsigned int) arr_35 [i_7] [i_7]));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_29 = (!(((/* implicit */_Bool) 3764730458U)));
                        var_30 ^= ((/* implicit */unsigned long long int) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0 + 1])))));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_12 = 1; i_12 < 14; i_12 += 1) /* same iter space */
    {
        arr_44 [i_12] = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) (~(var_16)))), (var_7))));
        arr_45 [4U] |= ((/* implicit */unsigned long long int) (_Bool)0);
    }
    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((12576021630391658138ULL), (13079050046819955225ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))));
    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((var_11), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))) ? (var_14) : (((/* implicit */unsigned long long int) ((unsigned int) var_5))))))));
    var_33 = ((((/* implicit */unsigned long long int) var_4)) | (var_11));
}
