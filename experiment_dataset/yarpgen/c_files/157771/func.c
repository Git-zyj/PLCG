/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157771
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
    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) (~(var_6)))) : (var_1))) == (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */long long int) var_2)) <= (var_5)))), (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30407))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_16 = var_10;
        /* LoopSeq 3 */
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 1] [i_0])), (arr_2 [i_0] [i_1 + 1])))) ? (((arr_3 [0LL] [i_1 + 1] [i_1 + 1]) >> (((arr_3 [i_0] [i_1 - 3] [i_1]) - (4766908755530545267LL))))) : (min((arr_3 [i_0] [i_1 - 2] [i_1 - 2]), (((/* implicit */long long int) var_10))))));
            var_18 = ((/* implicit */unsigned long long int) var_9);
            arr_5 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) 3383138248U))))))) <= ((-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))))));
            arr_6 [i_1] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(6387809688252646860ULL)))) ? ((-(arr_4 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((var_4) - (var_8))))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) var_14))), ((+(var_5))))))));
        }
        for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_2 [i_0] [i_2]) == (((/* implicit */unsigned long long int) var_6)))))));
            arr_11 [i_2] = arr_3 [i_0] [i_0] [i_2];
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_2])))) || (((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0]))))));
        }
        for (short i_3 = 3; i_3 < 17; i_3 += 1) 
        {
            arr_15 [i_0] [i_3] = ((/* implicit */long long int) arr_1 [i_3]);
            var_21 -= max(((~(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0]))))))));
            var_22 = ((/* implicit */long long int) (+(((unsigned int) arr_13 [9LL] [i_3] [(short)14]))));
        }
    }
    for (short i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((max((arr_4 [19ULL] [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_1 [i_4])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_12 [i_4] [i_4]))))))))), (((((((/* implicit */_Bool) arr_7 [i_4])) && (((/* implicit */_Bool) arr_10 [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (max((((/* implicit */unsigned int) arr_1 [i_4])), (arr_9 [i_4] [i_4] [i_4])))))));
        var_24 = ((/* implicit */_Bool) var_7);
        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)4580)) ? (((/* implicit */int) arr_13 [6LL] [i_4] [i_4])) : (((/* implicit */int) (short)-7907)))), (((/* implicit */int) ((arr_9 [0ULL] [i_4] [i_4]) >= (var_11)))))))));
        var_26 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4])) ? (arr_4 [i_4] [i_4] [5U]) : (arr_4 [i_4] [i_4] [i_4]))), (var_1)));
    }
    var_27 = ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_12)))) ? (((long long int) var_4)) : (((((/* implicit */_Bool) 10491743782862935683ULL)) ? (-6490278726531268530LL) : (((/* implicit */long long int) 2673077870U))))));
}
