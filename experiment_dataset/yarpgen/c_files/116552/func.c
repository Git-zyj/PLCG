/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116552
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
    var_12 = ((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((-(((/* implicit */int) var_1)))) : (((((1338936089) + (-1338936079))) | (((int) var_10)))));
    var_13 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((-(-1338936079))) : (((((/* implicit */_Bool) (unsigned short)42476)) ? (((/* implicit */int) (unsigned short)23068)) : (((/* implicit */int) (unsigned short)18760))))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) 1338936075)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (signed char)-108)))))) : (((/* implicit */int) (signed char)104)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) (-2147483647 - 1));
        var_15 += ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46770))))) - (((int) (unsigned short)46776)))) % (((/* implicit */int) ((signed char) (-(((/* implicit */int) var_5))))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32750)) ? (((((/* implicit */_Bool) var_2)) ? (-1338936089) : (var_2))) : (((((/* implicit */int) (signed char)-116)) + (((/* implicit */int) var_8))))))) && ((!(((/* implicit */_Bool) -1206440973)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (short)27478);
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((int) var_2)) - ((+(((/* implicit */int) (short)-25818)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(max((var_2), (1338936078)))));
        var_18 = ((/* implicit */unsigned short) (-(1338936089)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) var_6)))))))));
                        var_20 += ((/* implicit */int) ((((/* implicit */_Bool) ((1338936078) - (((/* implicit */int) var_10))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)25763)) : (((/* implicit */int) (signed char)107)))))));
                        arr_15 [(unsigned short)3] [i_3] [2ULL] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) (unsigned char)232)) ^ (((/* implicit */int) var_8)))));
                    }
                } 
            } 
            var_21 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)104)) << (((/* implicit */int) (unsigned char)24))));
            arr_16 [i_1] [i_1] = (~(((/* implicit */int) (unsigned short)65535)));
        }
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    {
                        arr_25 [i_7] [i_5] [i_5] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
                        arr_26 [i_5] [i_5] = ((((((/* implicit */_Bool) (short)23356)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) var_5)))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)25747)) : (-1338936089))));
                        arr_27 [i_1] [i_5] [i_5] [i_1] = ((/* implicit */int) ((unsigned char) 5852892062431678394ULL));
                    }
                } 
            } 
        } 
    }
}
