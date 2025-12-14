/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124385
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
    var_10 = ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 12; i_1 += 4) /* same iter space */
        {
            var_11 = (((((!(arr_4 [i_1]))) && ((!(((/* implicit */_Bool) 4294967279U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967291U)))));
            var_12 = ((/* implicit */signed char) min((var_1), (((/* implicit */unsigned int) var_2))));
            var_13 = ((/* implicit */signed char) var_3);
            var_14 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_0])), (var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (var_9))))))) > (((arr_4 [i_0 - 2]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))));
        }
        for (signed char i_2 = 2; i_2 < 12; i_2 += 4) /* same iter space */
        {
            var_15 = min((((((/* implicit */_Bool) var_8)) ? (max((var_4), (((/* implicit */unsigned long long int) var_9)))) : (arr_1 [i_2] [(_Bool)1]))), (((/* implicit */unsigned long long int) var_6)));
            var_16 = (signed char)98;
        }
        for (signed char i_3 = 2; i_3 < 12; i_3 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 22U))))), (((max((arr_6 [i_0 + 2] [i_3]), (((/* implicit */long long int) 1624925082)))) << (((/* implicit */int) (!(((/* implicit */_Bool) 866119224U)))))))));
            var_18 = ((((/* implicit */_Bool) (+(max((var_9), (((/* implicit */long long int) arr_0 [i_0]))))))) || (((/* implicit */_Bool) arr_3 [5ULL] [i_3])));
            arr_9 [(unsigned short)8] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-44))) : (var_1)))), (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)92))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (arr_5 [i_0 + 1] [i_0 + 1])))));
            var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 + 2] [i_3 - 1])))))));
        }
        var_20 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (_Bool)1)))))))));
        arr_10 [(signed char)3] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0 + 1]))))) ? (max(((+(((/* implicit */int) (unsigned char)88)))), ((+(((/* implicit */int) var_0)))))) : (((/* implicit */int) ((((/* implicit */long long int) 32U)) >= (-8468550123471584266LL)))));
        var_21 = ((/* implicit */long long int) arr_0 [i_0 - 2]);
    }
    for (unsigned int i_4 = 2; i_4 < 23; i_4 += 1) 
    {
        arr_14 [i_4] [i_4 + 1] = ((/* implicit */long long int) (((-(((/* implicit */int) var_0)))) ^ (((/* implicit */int) arr_12 [i_4 + 2]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            arr_17 [i_4] [i_4] [i_5] = ((/* implicit */_Bool) var_4);
            var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) var_1)))));
        }
        arr_18 [i_4] = ((/* implicit */signed char) (_Bool)1);
        var_23 = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) arr_13 [i_4 - 2] [i_4 - 2])), (arr_16 [i_4 - 1])))));
    }
}
