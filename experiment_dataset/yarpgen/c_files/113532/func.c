/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113532
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
    var_12 = var_8;
    var_13 |= max((((/* implicit */long long int) (_Bool)1)), (6109554488179185787LL));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)116)) && (((/* implicit */_Bool) 2178519698U)))))));
                        var_15 = ((/* implicit */unsigned long long int) ((_Bool) max((((((/* implicit */_Bool) 2474819885U)) || (((/* implicit */_Bool) (short)26030)))), (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_10 [i_0] [i_1])))))));
                        arr_11 [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)116)) ? (-1255339262989706990LL) : (((/* implicit */long long int) ((/* implicit */int) (short)25197)))))));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2009136441723951391LL)) ? (-1255339262989706990LL) : (arr_3 [i_1])))) ? (((((/* implicit */_Bool) -1255339262989706990LL)) ? (((/* implicit */int) (unsigned short)1930)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_2 [i_0]))));
                        arr_12 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) var_5);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                    {
                        var_17 = (_Bool)1;
                        arr_17 [i_0] [i_1] [i_2] [(_Bool)1] [i_4] [i_4] |= ((/* implicit */unsigned long long int) var_0);
                        var_18 = (+(min((arr_6 [i_4] [i_2]), (arr_6 [i_4] [i_2]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((((/* implicit */int) var_5)) % (((/* implicit */int) (unsigned short)1934)))) - (475)))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            arr_23 [i_0] [i_2] [i_2] = 1255339262989706990LL;
                            arr_24 [i_0] [i_0] [i_0] [i_5 - 1] [i_6] |= ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_5] [i_0] [i_0] [i_2])) + (((/* implicit */int) arr_13 [(_Bool)1] [i_5] [i_5 - 1] [i_5] [i_5]))));
                        }
                        var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */long long int) var_3)) <= (arr_6 [i_0] [i_0])))));
                        arr_25 [i_2] [i_2] = ((/* implicit */unsigned short) (~(arr_8 [i_0] [i_2] [i_2] [i_5])));
                    }
                    var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((6109554488179185787LL) - (6109554488179185782LL)))))) ? ((-(var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (1048576U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1 - 2]))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_3);
}
