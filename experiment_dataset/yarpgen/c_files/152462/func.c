/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152462
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
    var_13 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_14 &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) -2828860939312752328LL)) ? (-2828860939312752328LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-49)))))));
                    var_15 -= ((/* implicit */signed char) min((-2828860939312752316LL), (((/* implicit */long long int) (signed char)-44))));
                    var_16 = ((/* implicit */_Bool) (-(((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) var_7)))))));
                }
                for (short i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                {
                    arr_10 [i_3] [i_3] [2LL] |= max((-2828860939312752328LL), (((((/* implicit */_Bool) var_9)) ? (((long long int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_9 [i_0]))))))));
                    arr_11 [i_0] [i_0] = ((/* implicit */_Bool) var_8);
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_17 = ((_Bool) (-(((/* implicit */int) ((_Bool) (_Bool)0)))));
                        var_18 = ((/* implicit */_Bool) ((long long int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_1] [i_3])))))));
                        var_19 = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_4 [i_0 + 2] [(signed char)4] [i_4])))), (((/* implicit */int) min((arr_4 [i_0 + 2] [i_3] [i_4]), (((signed char) arr_6 [i_4] [i_3] [i_1] [i_0])))))));
                    }
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                {
                    var_20 |= ((/* implicit */_Bool) arr_4 [i_5] [i_1] [i_0]);
                    var_21 = ((signed char) var_7);
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0 + 1]))));
                        var_23 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [(signed char)13] [(signed char)4] [i_0]))))));
                    }
                    var_24 -= ((/* implicit */_Bool) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [(short)1] [i_0 - 1] [i_5]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0)))));
                }
                arr_22 [i_0] = ((/* implicit */signed char) max((min((max((-2828860939312752310LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) max((var_1), (((/* implicit */short) arr_15 [i_0] [i_1] [10LL] [10LL]))))))), (arr_21 [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2])));
                arr_23 [i_0] [(short)0] = ((/* implicit */short) max(((~(((/* implicit */int) min((((/* implicit */signed char) var_7)), (arr_7 [i_1] [i_0])))))), ((~(((/* implicit */int) ((_Bool) arr_9 [i_0])))))));
            }
        } 
    } 
}
