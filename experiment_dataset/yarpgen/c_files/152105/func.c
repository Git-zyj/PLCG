/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152105
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned char) ((unsigned long long int) 9086165004607041195LL));
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) ((unsigned int) min((((/* implicit */unsigned char) arr_10 [i_3] [i_3] [i_3] [i_3])), ((unsigned char)33)))));
                    var_13 += ((/* implicit */long long int) ((max((((/* implicit */int) var_10)), ((~(((/* implicit */int) var_4)))))) & (((/* implicit */int) ((-5738791526467043690LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47458))))))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */signed char) min((max((((/* implicit */int) var_2)), (((((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) + (((/* implicit */int) (signed char)(-127 - 1))))))), (((/* implicit */int) ((short) ((_Bool) var_2))))));
        var_14 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) arr_5 [i_1])), (max((((/* implicit */long long int) (unsigned short)65535)), (5738791526467043690LL))))), (((/* implicit */long long int) (unsigned short)65510))));
        arr_14 [18LL] [18LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))) : (arr_7 [(short)17]))), (((/* implicit */unsigned int) (signed char)19))))) && (((/* implicit */_Bool) (+((-(((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])))))))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        arr_17 [i_4] [i_4] = ((((long long int) arr_5 [i_4])) % (((/* implicit */long long int) arr_3 [i_4])));
        arr_18 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_4])) ? (arr_6 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4])))));
    }
    var_15 ^= ((/* implicit */signed char) ((((/* implicit */int) var_7)) > (((/* implicit */int) ((signed char) (signed char)-81)))));
    var_16 ^= ((/* implicit */long long int) ((((/* implicit */int) var_9)) >= (((((var_3) < (((/* implicit */long long int) ((/* implicit */int) var_1))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)7))))));
    /* LoopSeq 1 */
    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) arr_10 [i_5] [7U] [i_5 + 1] [i_5]);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_5 - 1] [i_5 - 2] [i_5])) <= (((((/* implicit */int) (signed char)51)) - (((/* implicit */int) var_1)))))))) % ((+(-5902299123545882705LL)))));
    }
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_6)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_2))))))))));
}
