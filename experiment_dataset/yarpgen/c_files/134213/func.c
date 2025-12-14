/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134213
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? ((+(((long long int) arr_4 [i_0])))) : (-6196913024004131803LL)));
                arr_7 [(unsigned short)4] [(unsigned short)4] [(unsigned short)10] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_13)) : (2967467596730653771ULL)))) ? (arr_1 [i_1]) : (((11248858357916302046ULL) * (((/* implicit */unsigned long long int) var_13)))))))));
                var_16 = ((/* implicit */long long int) var_11);
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((var_14) - (var_2))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26414))) : (var_8))))), (((/* implicit */unsigned long long int) ((((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29349))))) <= ((~(var_8))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) min((max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) ((11351196192236063293ULL) == (((/* implicit */unsigned long long int) 5687007417251147990LL))))))), (((/* implicit */int) ((unsigned short) arr_9 [i_2])))));
        var_18 ^= max((((/* implicit */unsigned long long int) var_7)), ((~(var_11))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 15479276476978897844ULL)))) * (((((var_9) & (((/* implicit */unsigned long long int) -8966364343023178473LL)))) ^ (var_11))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) arr_10 [i_2]);
    }
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((long long int) var_4));
        arr_15 [i_3] = ((/* implicit */short) (unsigned short)59095);
    }
}
