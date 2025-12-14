/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133019
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [(_Bool)0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_1 [i_0])) - (29705)))))))) : (arr_0 [(_Bool)1])));
        arr_2 [(unsigned short)1] [i_0] = ((/* implicit */unsigned int) (unsigned short)65534);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_5 [i_0 - 1] [i_0] = (!(((/* implicit */_Bool) arr_4 [i_0])));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (((((/* implicit */_Bool) -63808642)) ? (((/* implicit */int) arr_6 [i_0] [5ULL] [i_2])) : (((/* implicit */int) var_4))))));
                arr_8 [i_0 - 1] [i_0] = ((/* implicit */_Bool) arr_3 [i_2 + 1] [i_0] [i_2 + 2]);
            }
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                arr_12 [i_0 - 1] [i_0] [(_Bool)1] = ((/* implicit */signed char) max((var_0), (((/* implicit */unsigned int) var_7))));
                arr_13 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_0]), (((/* implicit */signed char) arr_7 [i_0] [i_1] [i_0]))))))))));
            }
        }
        var_14 = ((/* implicit */_Bool) max((var_14), (((((((((/* implicit */int) arr_4 [2])) < (((/* implicit */int) var_6)))) ? ((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))) : (((/* implicit */int) max(((unsigned short)12), (((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0]))))))) < (((/* implicit */int) ((unsigned short) (-(arr_11 [i_0] [i_0] [i_0])))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -63808649)) ? (arr_14 [i_4] [(_Bool)1]) : (arr_14 [i_4] [i_4])));
        arr_17 [i_4] = ((((/* implicit */_Bool) (unsigned short)65502)) ? (4002631845U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
        arr_18 [i_4] [i_4] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [(_Bool)1]))))) || (((var_6) || ((_Bool)1))));
    }
    var_16 = var_4;
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((~((~(18446744073709551589ULL)))))));
}
