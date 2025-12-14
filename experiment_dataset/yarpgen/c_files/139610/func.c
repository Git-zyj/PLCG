/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139610
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
    var_17 = ((/* implicit */signed char) var_0);
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((max((var_0), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) var_9)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8887152904329457320LL)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (~(arr_0 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8U)) ? (var_7) : (arr_5 [i_0])))) ? (((((/* implicit */_Bool) 2148778387U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) arr_5 [i_1])));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) var_13))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 2; i_3 < 23; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 2; i_4 < 22; i_4 += 1) 
            {
                var_21 *= ((/* implicit */unsigned int) ((long long int) 8887152904329457320LL));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_22 = ((/* implicit */long long int) var_3);
                    /* LoopSeq 1 */
                    for (long long int i_6 = 3; i_6 < 20; i_6 += 2) 
                    {
                        arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) 15U)) ? (980894554U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))));
                        var_23 = ((/* implicit */int) (!(((_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_21 [i_6] [i_2] [i_4] [i_2] [i_2] = ((unsigned short) (+(arr_9 [i_4 - 2] [i_3 - 1])));
                        var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_13 [i_4] [i_3] [i_4] [i_6]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) != (arr_7 [i_4 + 2] [i_3 - 2]))))) : (((long long int) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                    }
                    arr_22 [i_2] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3 + 1] [i_4 - 1])) ? ((~(((/* implicit */int) arr_11 [i_2])))) : (((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_5]))))), (((((/* implicit */_Bool) (~(arr_16 [i_2] [i_3] [i_4] [i_5])))) ? (((arr_10 [i_3]) ? (((/* implicit */unsigned long long int) arr_5 [i_3 - 2])) : (arr_1 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4] [i_5]))))))))));
                    arr_23 [i_2] [i_3 - 1] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(var_12)))))) ? (var_1) : ((-(((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 1] [i_4 + 1] [i_4]))))));
                    arr_24 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4] [i_5]))));
                }
                var_25 = arr_13 [i_2] [i_3] [i_4] [i_4];
                var_26 = ((/* implicit */unsigned int) arr_14 [i_4 + 1] [i_3 - 2] [i_3] [i_2]);
            }
            var_27 = ((/* implicit */int) ((unsigned long long int) (signed char)18));
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) : (min((arr_13 [i_3 + 1] [i_2] [i_2] [i_2]), (-8887152904329457320LL)))))) ? (((((/* implicit */_Bool) (-(0ULL)))) ? ((+(10555217347597715496ULL))) : ((-(arr_1 [i_3 - 1]))))) : (((/* implicit */unsigned long long int) 8U)))))));
        }
        arr_25 [i_2] [i_2] = min((arr_13 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */long long int) (unsigned short)49440)));
        arr_26 [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) ((8887152904329457322LL) > (((/* implicit */long long int) -1))))), (((int) (signed char)-85))));
        arr_27 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (var_0)))), (var_16)))) ? ((~(((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (var_8) : (((/* implicit */int) var_14)))))) : (((/* implicit */int) max(((unsigned short)49440), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)67))))))))));
    }
}
