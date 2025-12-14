/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156088
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
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))))), (min((((/* implicit */unsigned long long int) (unsigned short)65522)), (8186089331344934726ULL)))))));
    var_21 = ((/* implicit */short) max(((+(max((var_8), (((/* implicit */unsigned int) (unsigned short)13)))))), (((/* implicit */unsigned int) (~(var_18))))));
    var_22 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            var_23 = min((arr_2 [i_0]), (((((((((/* implicit */_Bool) arr_1 [(short)2] [i_0])) ? (((/* implicit */long long int) -1369842961)) : (0LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) max(((unsigned short)44666), ((unsigned short)65509)))) - (65472))))));
            var_24 = ((/* implicit */short) ((unsigned short) 0ULL));
            arr_4 [i_0] [i_1 + 3] [3ULL] = ((/* implicit */short) var_3);
        }
        arr_5 [(unsigned char)0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) min((1369842961), (((/* implicit */int) (unsigned short)65529)))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_25 = -968474665;
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    {
                        arr_15 [i_2] [i_2] = ((/* implicit */_Bool) min((max((max((((/* implicit */long long int) -1068853476)), (3141656495801432383LL))), (((((/* implicit */_Bool) var_0)) ? (-9LL) : (-1504513062927633871LL))))), (min((((/* implicit */long long int) arr_14 [(unsigned char)11] [i_3] [i_3])), (max((((/* implicit */long long int) var_6)), (3141656495801432383LL)))))));
                        var_26 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) -9LL)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_5]))) : (1125899906711552LL))) : (max((72057593769492480LL), (((/* implicit */long long int) arr_1 [i_5] [i_4])))))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_4] [i_5] [i_2]))))), (max((8186089331344934722ULL), (((/* implicit */unsigned long long int) arr_11 [i_4])))))))));
                        var_28 *= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_2] [i_5]))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((2345569812U) - (2345569809U)))))))));
                    }
                } 
            } 
        } 
    }
}
