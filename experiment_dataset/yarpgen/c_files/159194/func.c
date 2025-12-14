/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159194
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
    var_19 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -5807526836970319330LL)) ? (7797605073909948003LL) : (-8540293524090073440LL))), (max((var_7), (var_17)))))) ? (min((var_6), (((9171230375124158687LL) / (var_2))))) : (min((var_9), (min((var_14), (-6025124990901071372LL))))));
    var_20 = (+(((long long int) 18012199486226432LL)));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_21 = (+(max((274877906688LL), (arr_1 [i_3]))));
                        var_22 = ((/* implicit */long long int) max((var_22), (max((min((var_4), ((-(var_18))))), (max(((+(arr_0 [i_2]))), (arr_6 [i_2 + 2] [i_1 - 2] [i_0 - 1])))))));
                        var_23 = arr_8 [i_0] [i_1 + 1] [i_1] [8LL];
                        var_24 = ((/* implicit */long long int) max((var_24), (((long long int) ((arr_10 [9LL] [9LL] [9LL] [i_0 - 1] [i_0 - 1]) - (arr_10 [10LL] [11LL] [i_1 + 1] [i_2] [18LL]))))));
                    }
                } 
            } 
        } 
        var_25 = min((((long long int) var_2)), (min((var_11), (arr_3 [i_0 - 1] [i_0 - 2] [i_0 + 2]))));
        arr_11 [18LL] = max((9075693899299539021LL), (274877906816LL));
        arr_12 [i_0] = ((long long int) min(((-9223372036854775807LL - 1LL)), (0LL)));
    }
    for (long long int i_4 = 2; i_4 < 21; i_4 += 3) /* same iter space */
    {
        var_26 = (+(-274877906816LL));
        var_27 = (-(((long long int) var_2)));
    }
    for (long long int i_5 = 1; i_5 < 11; i_5 += 3) 
    {
        arr_17 [i_5] = arr_2 [i_5];
        var_28 = ((/* implicit */long long int) max((var_28), ((+(arr_7 [16LL] [16LL])))));
        var_29 ^= max((((long long int) var_13)), (var_13));
        var_30 = ((/* implicit */long long int) max((var_30), (((long long int) ((long long int) arr_2 [i_5 + 1])))));
    }
}
