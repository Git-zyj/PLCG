/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131431
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (-(((arr_2 [i_0 - 1]) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) (_Bool)0))))));
        var_12 = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            var_13 = ((_Bool) ((arr_3 [i_0 - 1] [i_1]) >= (((/* implicit */int) arr_6 [i_1] [i_1 - 1] [i_1 + 1]))));
            var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) var_5))))) ? (arr_3 [i_0 - 1] [i_0 - 1]) : ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(unsigned char)20] [i_1 + 1] [(unsigned char)20])))))))) : (((min((arr_1 [i_1]), (((/* implicit */unsigned int) var_6)))) % (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)83))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_15 += ((/* implicit */unsigned char) ((1862111617) > (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) ((unsigned char) (unsigned char)71)))))));
            var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)104))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)193)) : (arr_7 [i_0] [i_0] [i_2])))))) ? ((-(((/* implicit */int) ((arr_3 [i_2] [i_0]) <= (((/* implicit */int) var_3))))))) : ((~((-(((/* implicit */int) arr_5 [i_0] [i_2] [i_0]))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            arr_12 [i_0] &= arr_6 [i_3] [i_0] [(unsigned char)14];
            var_17 &= ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))) != (67108863)));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_18 = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4]))))));
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)84)) / (((/* implicit */int) (unsigned char)29)))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-13477)))) + (((/* implicit */int) arr_16 [i_4] [10LL]))))) ? (((int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_4] [i_4] [i_4])) : (542972648)))) : (((((/* implicit */_Bool) max((arr_9 [i_4] [i_4]), (((/* implicit */long long int) arr_7 [(unsigned char)2] [(unsigned char)2] [(unsigned char)2]))))) ? (((/* implicit */int) ((signed char) var_11))) : (((((/* implicit */_Bool) (short)22766)) ? (((/* implicit */int) arr_5 [15U] [15U] [i_4])) : (((/* implicit */int) arr_11 [i_4] [i_4]))))))));
    }
    var_21 ^= ((/* implicit */unsigned char) var_2);
    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25464)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-4782638572980585054LL))))))));
    var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_1)) : (67108847)));
}
