/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144185
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
    var_12 &= ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (9219810689882005180LL))))))), (((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9)))) : (((long long int) var_7))))));
    var_13 = max((min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3LL))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (9223372036854775807LL))))), (((/* implicit */long long int) (-(((/* implicit */int) var_4))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_14 = ((((/* implicit */_Bool) (((!(var_10))) ? (arr_1 [i_0]) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0 - 2])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : ((~(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) & (arr_1 [i_0]))))));
        var_15 = ((/* implicit */_Bool) ((long long int) ((_Bool) arr_1 [i_0 - 2])));
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            arr_4 [2LL] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */long long int) (+(((/* implicit */int) var_11))))) / (min((((/* implicit */long long int) var_5)), (arr_1 [i_0 - 1]))))), (((/* implicit */long long int) var_1))));
            arr_5 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL)));
        }
    }
    for (long long int i_2 = 2; i_2 < 19; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((((_Bool) arr_7 [i_2])) && (((/* implicit */_Bool) ((((var_11) && ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2 + 1])) || ((_Bool)1))))) : (((long long int) arr_7 [i_2]))))));
        var_16 = ((/* implicit */_Bool) arr_1 [i_2 - 2]);
        var_17 = ((/* implicit */long long int) ((_Bool) min((((var_7) ? (arr_8 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [(_Bool)1]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_2] [i_2] [i_2])) >> (((var_0) - (8879315066446322394LL)))))))));
        var_18 = ((/* implicit */long long int) arr_6 [i_2] [i_2 - 2]);
    }
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */long long int) (-(((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))) + (9223372036854775803LL))))));
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_20 -= ((/* implicit */long long int) (!((!(((((/* implicit */_Bool) 11LL)) || (((/* implicit */_Bool) -9219810689882005192LL))))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_3] [i_4] [i_3] [i_4])) ? (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_8)))) * (((/* implicit */int) (_Bool)1))))) : ((~(((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3]))) / (arr_7 [i_3])))))));
                        arr_24 [i_3] [i_5] [2LL] [i_3] = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) arr_7 [i_3]))), (arr_13 [i_3])))) ? (((long long int) (+(((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
}
