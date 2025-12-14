/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170354
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
    var_14 ^= ((/* implicit */unsigned int) max(((+((-(576460752301326336LL))))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) | (var_8)))));
    var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (1652422298)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47))) + (var_11))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) (unsigned short)46426)) : (((/* implicit */int) var_7)))))))) ? (min(((+(576460752301326309LL))), (((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) var_2))))))) : ((-(((var_8) | (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((unsigned short)29626), (((/* implicit */unsigned short) var_2))))), (max((4294967292U), (((/* implicit */unsigned int) (unsigned short)62815))))))))))));
                arr_4 [i_0] [i_0] = (-(((((/* implicit */long long int) ((/* implicit */int) var_1))) | ((+(arr_2 [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    arr_13 [i_4] [i_4] [i_4] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_8 [i_2 + 1] [i_3]), (arr_8 [i_2] [i_3]))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 2; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_20 [i_2 - 1] [i_2 - 1] [i_4] [i_2 - 1] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((0), (((/* implicit */int) arr_3 [19] [i_4]))))), (arr_1 [i_5])))) ? ((-(6009440170878763179ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_12 [(unsigned short)19] [(unsigned short)19] [i_4]) ? (arr_7 [(_Bool)1] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)43))) : ((((_Bool)1) ? (3007945291U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                                var_17 ^= (+(min((-1632447812963900531LL), (((/* implicit */long long int) -1616644685)))));
                                var_18 = ((/* implicit */_Bool) (-((-(arr_18 [i_2] [i_3] [14] [14] [i_5])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                for (long long int i_9 = 2; i_9 < 19; i_9 += 1) 
                {
                    {
                        arr_29 [i_9] [i_7] [i_8] [i_9] = ((long long int) ((arr_22 [i_2]) == (((/* implicit */long long int) arr_1 [i_7 - 1]))));
                        arr_30 [i_2] [i_2] [i_2] [i_9] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_19 [i_2 + 2] [i_7 - 1] [i_2 + 2])) ? (arr_19 [i_9] [i_8] [i_2 - 1]) : (arr_19 [i_9 - 1] [i_7] [i_2 + 2]))), ((-((-(var_11)))))));
                        arr_31 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (+(min((arr_25 [i_9 + 1] [i_9]), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [i_2 + 1] [11ULL])), (-22))))))));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_2] [i_8] [i_7 - 1])))))));
                        arr_32 [i_2 + 1] [i_8] [i_8] = arr_15 [i_9 - 1] [i_8] [i_7 - 1] [i_2];
                    }
                } 
            } 
            arr_33 [i_2] = ((/* implicit */long long int) max((549751619584ULL), (18437736874454810624ULL)));
        }
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(var_2)))), (((((/* implicit */_Bool) arr_0 [i_10] [i_2])) ? (arr_16 [i_2 + 1] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) 4643163405304408424LL))))))) ? (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 3499944584U))))), (((signed char) (_Bool)1))))) : (((/* implicit */int) ((arr_0 [i_2] [i_2 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_10] [i_10] [i_10])))))))))));
            arr_36 [i_10] = max((18446743523957932032ULL), (((/* implicit */unsigned long long int) -1632447812963900531LL)));
        }
    }
}
