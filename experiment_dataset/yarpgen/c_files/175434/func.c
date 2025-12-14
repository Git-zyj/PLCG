/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175434
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_13)), (var_14)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)107)), (var_7)))))))) ? ((-(((((/* implicit */int) (unsigned short)7137)) ^ (((/* implicit */int) var_3)))))) : ((~(((/* implicit */int) (short)16375))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_1 [i_0])))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? ((~(((/* implicit */int) var_13)))) : ((~(((/* implicit */int) (unsigned short)20498))))))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)75)) | (((((/* implicit */int) (signed char)2)) ^ (((/* implicit */int) var_6))))))));
            arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1021723727U)))))));
        }
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0])))) <= (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
        var_19 -= (-(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)192)), (var_2)))));
        var_20 &= ((/* implicit */unsigned short) var_7);
    }
    for (unsigned short i_2 = 2; i_2 < 7; i_2 += 3) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 3] [i_2 + 3]))))) ? (((unsigned int) (short)-16388)) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_2 + 3]), (var_7)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 1; i_3 < 8; i_3 += 3) 
        {
            var_22 = ((/* implicit */int) (short)24179);
            var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)107))))) : (((/* implicit */int) ((unsigned char) var_8)))));
            var_24 += (~(((/* implicit */int) arr_4 [i_3 + 2] [(short)18] [(short)18])));
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_4 = 3; i_4 < 12; i_4 += 4) 
    {
        for (signed char i_5 = 1; i_5 < 12; i_5 += 4) 
        {
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)33)) % (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) arr_17 [i_5 - 1])) ? (arr_17 [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_15 [2ULL] [i_5 - 1]))))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (unsigned short)7137)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)220)) || (((/* implicit */_Bool) min(((short)-16388), (var_15))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)199)) || (((/* implicit */_Bool) -1773802227)))))));
            }
        } 
    } 
}
