/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17607
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_11 ^= ((long long int) (((+(var_6))) + (((((/* implicit */_Bool) var_9)) ? (var_10) : (-8094725859460188014LL)))));
                            arr_12 [i_0] [i_1] [i_2] = 6588392791125297444LL;
                            arr_13 [i_0] [i_1] [i_2] [i_1] |= ((long long int) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) 8227116803850048423LL))));
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] |= ((((/* implicit */_Bool) ((((((long long int) -6778886932027158104LL)) + (9223372036854775807LL))) << (((((long long int) arr_10 [i_0] [i_1] [i_2] [i_3])) - (9055546213017455552LL)))))) ? ((-(((5644236621224820455LL) % (4503324749463552LL))))) : (arr_10 [i_0] [i_1] [i_0] [i_3]));
                            var_12 = 8093278052677197634LL;
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] = max((((((long long int) var_8)) / (((((/* implicit */_Bool) 264965918909330673LL)) ? (8093278052677197625LL) : (arr_9 [i_0] [i_1] [i_0]))))), (((long long int) ((long long int) var_2))));
                arr_16 [i_0] = ((((/* implicit */_Bool) ((long long int) min((8093278052677197625LL), (627449252723168226LL))))) ? (((((var_4) != (arr_8 [i_0] [i_0] [i_0]))) ? (((long long int) -7984423335277971200LL)) : ((-(4837294571728947533LL))))) : (((((/* implicit */_Bool) ((long long int) var_2))) ? ((+(var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((var_6) <= (arr_10 [13LL] [i_1] [i_0] [i_0]))))))));
                arr_17 [i_0] [i_1] [4LL] |= ((((long long int) ((((/* implicit */_Bool) var_8)) ? (var_2) : (var_9)))) - (min((-7068190716994504205LL), (4331754007757284545LL))));
            }
        } 
    } 
    var_13 = -2341694121016478311LL;
    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((long long int) var_1))))) && (((/* implicit */_Bool) var_7))));
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (var_7) : (((((/* implicit */_Bool) 8093278052677197611LL)) ? (var_7) : (var_4))))))));
}
