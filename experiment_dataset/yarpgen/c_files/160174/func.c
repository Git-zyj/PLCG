/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160174
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_1 + 2])) / (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 2] [i_1] [i_1 + 2]))) : (var_0));
                arr_6 [(unsigned char)13] [i_1] [(signed char)7] = ((long long int) (unsigned char)169);
                var_11 = ((/* implicit */unsigned char) ((unsigned int) arr_2 [i_1] [i_1] [i_1]));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_0);
    var_13 = 3880786969067534383LL;
    /* LoopSeq 3 */
    for (long long int i_2 = 1; i_2 < 9; i_2 += 3) /* same iter space */
    {
        arr_9 [(unsigned char)0] [i_2] = -3880786969067534384LL;
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) ((-3880786969067534357LL) < (67108863LL)))), (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned char)13] [i_2] [i_2 - 1]))) : (arr_3 [(unsigned char)8] [4LL] [i_2]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2668854193691186957LL)))))));
        arr_11 [i_2] = ((/* implicit */long long int) 1311600077);
        var_14 *= ((/* implicit */signed char) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_7))));
    }
    for (long long int i_3 = 1; i_3 < 9; i_3 += 3) /* same iter space */
    {
        arr_15 [i_3 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3 + 3])) ? (arr_12 [i_3 + 2] [i_3]) : (arr_12 [6] [6])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)177))) == (-3900569227524146254LL)))) : (((/* implicit */int) var_2))));
        arr_16 [10LL] = ((/* implicit */long long int) min((var_6), (((/* implicit */unsigned short) var_7))));
        var_15 = ((/* implicit */long long int) var_7);
    }
    for (int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) min((3880786969067534357LL), (((/* implicit */long long int) 131071))));
        var_17 *= ((/* implicit */unsigned short) 1649157389U);
    }
}
