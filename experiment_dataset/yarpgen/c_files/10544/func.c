/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10544
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
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) : (((((/* implicit */int) var_10)) - (((/* implicit */int) var_12)))))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) (~(var_11)))) & (arr_2 [i_0])));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] [10] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_4 [3U] [i_0] [i_1]))))));
            arr_7 [i_0] [i_0] [7] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_2 [14U]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_0]))))))) ^ ((~(arr_5 [i_0])))));
            arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((arr_0 [(_Bool)1] [i_0]) / (((/* implicit */unsigned int) var_7)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [(unsigned short)16]);
        }
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_2 [i_2])))) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : ((+(-73146202)))));
        var_20 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(arr_5 [i_2])))) ? (((((/* implicit */long long int) arr_0 [i_2] [i_2])) ^ (arr_5 [i_2]))) : (((/* implicit */long long int) arr_0 [i_2] [i_2])))), (((/* implicit */long long int) (+((~(((/* implicit */int) (signed char)68)))))))));
        arr_12 [i_2] [i_2] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2] [i_2])) | (((/* implicit */int) var_17))))) : (((arr_0 [(unsigned short)14] [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2])))))))));
        arr_13 [i_2] [8LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) arr_4 [i_2] [i_2] [i_2])))));
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_5 [i_2]))))));
    }
    var_22 = ((/* implicit */short) var_3);
}
