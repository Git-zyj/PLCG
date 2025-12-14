/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129832
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
    var_14 = ((/* implicit */int) var_0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) min(((!(((/* implicit */_Bool) -1)))), (((_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (10891688462435344491ULL))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((unsigned long long int) 18446744073709551612ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (351966326165130872ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) 10891688462435344511ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10891688462435344486ULL)))));
                        arr_12 [i_0] [i_3] [i_1 - 1] [8] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (7555055611274207111ULL)))) ? (((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (arr_8 [i_0] [i_2 - 4]))));
                        var_17 = ((/* implicit */int) ((((_Bool) 18446744073709551587ULL)) ? (min((14895587520383379657ULL), (16190641103633130484ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        var_18 = ((((/* implicit */_Bool) (+((((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [0ULL]))) * (var_2))), ((((_Bool)0) ? (var_2) : (((/* implicit */unsigned long long int) arr_4 [i_2 - 2])))))) : (((((/* implicit */_Bool) max((var_12), (var_0)))) ? (((unsigned long long int) 9538100801645866917ULL)) : ((-(var_9))))));
                    }
                    arr_13 [(_Bool)1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 9)) * (arr_5 [i_1])))) ? (max((var_6), (((/* implicit */unsigned long long int) (_Bool)1)))) : (arr_10 [i_1 + 2] [i_2 - 3] [14] [i_0]))) : ((~(8433306998837287889ULL)))));
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) ((var_5) && (((/* implicit */_Bool) var_6))))), (var_13))));
                }
            } 
        } 
    } 
    var_19 = var_1;
}
