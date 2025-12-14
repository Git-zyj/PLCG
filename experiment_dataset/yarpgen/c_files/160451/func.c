/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160451
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
    var_10 *= min((max((((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-5LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)36252))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 814970860U)) || (((/* implicit */_Bool) var_7)))))) : (var_6))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((((/* implicit */_Bool) (((-(0ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_0 [i_0] [i_0])))))))) ? (((long long int) ((-8LL) - (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))) : ((~((-(var_7)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 1])) / ((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_0]))))))) ? (var_3) : ((~(((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) 814970832U))))))));
                    arr_7 [i_0] = ((/* implicit */short) max((max(((-(4ULL))), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_0])))), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))))))));
                    arr_8 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(max((arr_9 [i_3] [i_3]), (arr_9 [i_3] [i_3])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16078)) ? (-7600300087260235174LL) : (((/* implicit */long long int) var_2))))) ? (max((17347073257594616277ULL), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_10 [i_3] [i_3]))))))));
        var_14 &= max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_3] [i_3]))))) ? (min((1924145348608LL), (arr_9 [8U] [i_3]))) : (arr_9 [(unsigned short)12] [i_3]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8LL)) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (((/* implicit */int) arr_11 [i_3] [i_3]))))) ? (((long long int) arr_10 [i_3] [i_3])) : (((/* implicit */long long int) max((3479996456U), (((/* implicit */unsigned int) (unsigned short)9))))))));
        arr_12 [i_3] [i_3] = ((((/* implicit */_Bool) (~(max((arr_9 [i_3] [i_3]), (arr_9 [i_3] [i_3])))))) ? (max((var_7), (((/* implicit */long long int) ((short) arr_11 [i_3] [i_3]))))) : (min((((/* implicit */long long int) arr_11 [i_3] [i_3])), (((((-6038318762357794893LL) + (9223372036854775807LL))) >> (((var_1) - (15668083145338985578ULL))))))));
    }
    var_15 = max((((/* implicit */long long int) ((unsigned short) ((unsigned short) var_1)))), (((((/* implicit */long long int) 3479996456U)) | (((((/* implicit */_Bool) (unsigned short)65523)) ? (var_7) : (var_6))))));
}
