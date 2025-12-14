/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1436
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) : (((((/* implicit */_Bool) (unsigned char)143)) ? (0LL) : (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])))))));
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) ((max((((/* implicit */int) (unsigned short)65535)), (arr_4 [i_1] [i_0]))) & ((~(arr_4 [i_1] [i_0])))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)154)), (14063242169269704709ULL)))) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])) : (arr_1 [i_0] [i_0])))));
        }
        var_16 = ((/* implicit */unsigned char) (unsigned short)11313);
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-104))));
        var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_1))) : (arr_5 [i_2] [i_2] [i_2])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_19 = ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) (_Bool)0)));
            arr_12 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_2] [i_3])) == (((((/* implicit */int) var_7)) | (((/* implicit */int) var_2))))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((4294967295U) > (((/* implicit */unsigned int) 0)))))) : (arr_2 [i_2])));
        }
    }
    var_21 = ((/* implicit */int) ((unsigned long long int) var_13));
    var_22 = ((/* implicit */short) var_7);
    var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) ((1267382722) * (((/* implicit */int) var_3))))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)11313)) & (((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) var_2))))))));
}
