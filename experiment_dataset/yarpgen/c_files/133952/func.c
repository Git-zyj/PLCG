/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133952
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
    var_11 = ((/* implicit */unsigned char) (~(2804793469U)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) 1490173847U);
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        arr_9 [i_3 + 2] [i_2] [i_2] [i_2] [i_1] [i_0 + 1] = ((((unsigned int) var_10)) << (((((arr_1 [i_0 + 1] [i_3 + 1]) - (var_7))) - (3566483154U))));
                        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 1490173826U)) ? ((-2147483647 - 1)) : (((/* implicit */int) ((short) (unsigned char)0)))));
                        var_15 &= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_2 - 3] [i_2])) <= (((/* implicit */int) arr_8 [i_2 - 2] [i_1] [i_1])))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (arr_7 [i_1] [i_1] [i_2] [i_1]) : (arr_1 [i_0] [i_1]))) % (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_8), (((/* implicit */int) (unsigned char)31))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_7)) ? (2804793478U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))))));
                        var_16 &= ((/* implicit */int) arr_6 [i_4]);
                        arr_13 [i_2] = (!(((/* implicit */_Bool) ((int) var_10))));
                        arr_14 [i_2] [i_0] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (arr_6 [(unsigned char)22]) : (((/* implicit */long long int) 1490173817U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_7 [i_2] [i_1] [i_2 - 2] [i_0])))) ? (min((((((/* implicit */_Bool) var_4)) ? (1490173802U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) || (arr_5 [22LL] [i_2 - 1] [i_0 - 1] [i_0 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (min((((var_6) | (-12191334063356789LL))), (var_6)))));
                        arr_17 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0 + 1])) << (((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) || (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_4)))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_2] [i_2] [i_1] [i_2] [i_6] [i_6] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) var_8))))) ? (((4875444055021028795LL) - (((/* implicit */long long int) 1490173831U)))) : (min((arr_6 [i_6]), (((/* implicit */long long int) var_7)))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6] [i_2] [0] [i_2] [13LL]))));
                        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((arr_20 [i_0 + 2] [i_0 + 2] [i_2 - 3] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225)))))) & (var_6)));
                    }
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_1] [i_2 + 1]) ? (((/* implicit */int) ((unsigned char) var_10))) : (max((((/* implicit */int) arr_8 [i_0] [i_2] [(unsigned char)1])), (arr_10 [i_2] [i_2] [i_1] [i_0])))))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [19LL] [i_2] [i_1] [i_1] [i_2] [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_19 [(_Bool)1] [(short)7])) == (arr_6 [i_0]))))))))));
                    var_20 ^= ((/* implicit */_Bool) (unsigned char)218);
                }
            } 
        } 
    } 
}
