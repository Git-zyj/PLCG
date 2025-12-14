/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142269
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
    var_14 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) >> (((max((((/* implicit */unsigned int) (unsigned char)255)), (536862720U))) - (536862714U)))))) ? (((/* implicit */unsigned long long int) 262143U)) : (((((((/* implicit */_Bool) 536862711U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14781761686789071949ULL))) - (((/* implicit */unsigned long long int) 819441102U))))));
        var_15 = (~(((/* implicit */int) max((((_Bool) (_Bool)0)), (((((/* implicit */int) (signed char)-66)) == (((/* implicit */int) (short)3584))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) <= (((/* implicit */int) arr_0 [i_1])))))));
            var_16 |= ((/* implicit */unsigned int) (_Bool)0);
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)2])))))))), (min((var_8), (((/* implicit */unsigned long long int) 4230916211U))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    arr_15 [i_0] [i_0] [i_2 - 2] [13U] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) ((_Bool) arr_9 [i_0] [i_0]))) : (((/* implicit */int) ((1550275903U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65532))))))));
                    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (4294705152U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1])))))) ? (((-5966940501571202320LL) - (((/* implicit */long long int) 536862711U)))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)3576)))))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 8U)) && (((/* implicit */_Bool) 9007199254740992ULL)))))));
                        var_20 |= ((/* implicit */unsigned long long int) (+(6797966473927815608LL)));
                    }
                    var_21 = ((/* implicit */int) (((((_Bool)1) && (((/* implicit */_Bool) arr_4 [7LL] [i_1] [i_2])))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (35184372088831ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2 + 1] [i_2 - 2] [i_2])))));
                    arr_18 [0U] [i_1] [i_2 - 1] [i_1] = ((/* implicit */_Bool) var_10);
                }
                for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) -5928662316468015040LL);
                    arr_22 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (5928662316468015039LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114)))))) ? (((unsigned int) 10ULL)) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))))), (((((/* implicit */_Bool) 13658212719832404361ULL)) ? (arr_11 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2] [i_5]) : (arr_11 [i_2 - 1] [i_2 - 2] [i_2] [i_5] [i_5] [i_5])))));
                    arr_23 [i_1] [i_1] [i_2] [0LL] [4ULL] = ((/* implicit */unsigned long long int) ((max((var_8), (((/* implicit */unsigned long long int) arr_7 [i_0] [(unsigned short)2] [i_0])))) > (((/* implicit */unsigned long long int) ((546150626U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                }
            }
        }
    }
    var_22 = ((/* implicit */unsigned long long int) (((((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))) + (2147483647))) << (((min(((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))), (((/* implicit */int) min(((unsigned char)7), (var_6)))))) - (7)))));
    var_23 = var_1;
    var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 9223372036854775802LL)) % (var_9)));
}
