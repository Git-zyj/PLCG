/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131732
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)0);
                    var_12 = ((((/* implicit */unsigned int) (((!((_Bool)1))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)-111))))) > (var_5));
                    arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7366969828837569761LL)) ? (7366969828837569734LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58372)))))) ? (var_0) : (((/* implicit */int) arr_2 [i_2]))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        var_13 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_10)))) ? (arr_8 [i_3]) : (((/* implicit */long long int) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) var_1)))))))) ? (-593180909) : (min((((/* implicit */int) var_8)), ((-(arr_4 [i_0] [i_1 + 1]))))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */short) max((((/* implicit */long long int) 307093483U)), (((((/* implicit */long long int) 3987873813U)) & (-7366969828837569757LL)))));
                    }
                    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (unsigned char)53))));
                        var_15 = ((/* implicit */short) (-(5660038897202017714ULL)));
                    }
                    for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) var_4);
                        var_16 = ((/* implicit */unsigned int) min((arr_20 [i_2] [i_5]), ((-(arr_20 [i_1 - 1] [i_2])))));
                        arr_23 [i_0] [0] [(unsigned short)2] [i_0] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (var_5)))))))) | (min((var_10), (((/* implicit */unsigned int) arr_13 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 + 1]))))));
                        arr_24 [i_0] [i_1 + 2] [i_2] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (max((var_11), ((signed char)62)))))) ? (((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) arr_19 [i_5] [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_19 [i_5] [i_5] [i_5] [i_1 + 2])))) : (((/* implicit */int) arr_0 [i_2]))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_0))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((long long int) var_2)) == (((/* implicit */long long int) var_5))))) : (var_0)));
}
