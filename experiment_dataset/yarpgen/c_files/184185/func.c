/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184185
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
    var_15 &= ((/* implicit */signed char) max((((unsigned long long int) min((((/* implicit */int) var_0)), (var_13)))), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)177)))))))));
    var_16 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = (!(((/* implicit */_Bool) ((unsigned long long int) arr_4 [(signed char)7]))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)246)) ? (13364729586097628977ULL) : (5082014487611922638ULL))))))))));
                    arr_8 [i_0] [i_1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) || (((/* implicit */_Bool) arr_7 [(signed char)9] [i_1]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (var_6)));
                                var_20 &= ((/* implicit */long long int) arr_11 [i_0] [i_1] [i_3] [(unsigned char)4]);
                                var_21 = ((/* implicit */signed char) (!(max((arr_12 [i_4 + 3] [i_4] [i_4 + 1] [10LL] [i_4 + 3] [i_4]), (((_Bool) arr_7 [i_4] [i_1]))))));
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((_Bool) max((-7780988756131720400LL), (((/* implicit */long long int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (3203291582754602246ULL) : (5082014487611922637ULL)))) ? (((((/* implicit */int) var_3)) << (((((/* implicit */int) (signed char)(-127 - 1))) + (136))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1]))))) * (((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (arr_7 [i_0] [i_0]))))))));
    }
    for (int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
    {
        arr_18 [i_5] |= max((arr_17 [i_5] [i_5]), (((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (arr_17 [i_5] [i_5])))) ? (arr_4 [i_5]) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-24)))))));
        var_25 = ((/* implicit */unsigned long long int) min((arr_10 [i_5] [i_5] [i_5]), (((/* implicit */unsigned char) max((((_Bool) arr_16 [i_5])), (arr_5 [i_5] [i_5] [i_5]))))));
        arr_19 [i_5] [i_5] = ((/* implicit */_Bool) var_14);
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            arr_24 [i_6] = ((/* implicit */signed char) ((15243452490954949359ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
            arr_25 [6LL] = ((/* implicit */unsigned long long int) (+(max((arr_0 [i_6]), (((/* implicit */int) ((_Bool) arr_2 [i_5] [i_6])))))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_5])) * (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */int) arr_22 [i_5])) : (((/* implicit */int) arr_22 [9])))) : ((~(((/* implicit */int) arr_22 [i_6]))))));
            /* LoopNest 3 */
            for (long long int i_7 = 2; i_7 < 9; i_7 += 3) 
            {
                for (unsigned char i_8 = 2; i_8 < 11; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        {
                            var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [(_Bool)1])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_8] [12LL] [i_7] [i_6] [i_5] [i_8])) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) (unsigned char)189))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */int) arr_27 [i_5] [i_5])) : (((int) arr_29 [i_8] [(_Bool)1] [i_8 + 1] [(_Bool)1]))))));
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_12 [i_9] [i_8] [i_7] [i_7] [i_5] [i_5]))));
                            var_29 = ((/* implicit */signed char) arr_1 [i_9]);
                        }
                    } 
                } 
            } 
        }
    }
}
