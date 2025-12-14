/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124924
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
    var_13 = max((min((((/* implicit */int) var_10)), ((-(((/* implicit */int) (unsigned char)0)))))), (((int) (+(var_4)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_14 = min((((/* implicit */unsigned long long int) (+(993916883)))), (max((var_0), (var_0))));
                var_15 = ((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) -993916892)) ? (var_6) : (((/* implicit */int) var_2))))) ^ ((~(var_9))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((long long int) (-(-993916895)))) << (((((int) arr_5 [15LL] [i_1 - 1] [i_1 - 1])) - (257421290)))));
                    var_16 += ((/* implicit */long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) >= (((/* implicit */int) arr_6 [i_0] [i_1] [6LL])))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) : (((((/* implicit */_Bool) var_0)) ? (arr_4 [8] [i_1 + 2]) : (((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_2] [i_1] [(short)17])) <= (var_1))))))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1] [i_1])) ? (arr_5 [i_1 + 1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) -9223372036854775802LL)))))));
                    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -993916899)) ? (((/* implicit */unsigned long long int) var_3)) : (4049591974906326331ULL)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [0] [i_1] [i_1 + 1]))));
                    var_19 ^= ((/* implicit */_Bool) 993916887);
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) (short)-23851)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (12602259112853333486ULL)))));
                }
                for (long long int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((var_4) - (3782600051628618595ULL)))))) * (((((/* implicit */unsigned long long int) var_12)) / (var_0)))))) ? (((((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_2))))) ^ (-2147483626))) : (((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 7024769787423431303LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4957532846850766067ULL)) || (((/* implicit */_Bool) var_10))))) : ((~(arr_7 [i_0] [16LL] [i_4])))))));
                    var_21 *= ((/* implicit */unsigned char) (signed char)106);
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)133)), (((var_9) << (((((var_6) + (745982229))) - (32)))))));
}
