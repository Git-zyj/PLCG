/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172646
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_12 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) (((((~(arr_0 [i_0]))) + (9223372036854775807LL))) >> (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((/* implicit */unsigned short) (((((((~(arr_0 [i_0]))) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) arr_1 [i_0] [i_0])))));
            arr_4 [i_1] [i_0] [i_0] = ((/* implicit */short) max((arr_3 [i_0] [i_1] [i_0]), (arr_3 [i_0] [i_1] [i_0])));
            var_13 = ((/* implicit */unsigned short) (~(17592118935552LL)));
        }
        for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                for (long long int i_4 = 2; i_4 < 18; i_4 += 2) 
                {
                    {
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_0]))))) ? (((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [(unsigned short)3] [i_2]))))) ? (max((((/* implicit */long long int) (unsigned char)250)), (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)31744), ((short)31744))))))) : (((/* implicit */long long int) ((int) arr_8 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1])))));
                        var_15 &= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) arr_8 [i_4 + 1] [i_0] [i_3] [i_4 - 1])) | (((/* implicit */int) (_Bool)1)))));
                        var_16 += ((/* implicit */int) arr_11 [i_4 - 1] [i_2] [i_0] [1] [i_2] [i_3]);
                        var_17 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-31745)) ? (((/* implicit */int) arr_6 [i_4 - 1])) : (((/* implicit */int) (unsigned short)31823)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4 - 2])))))));
                    }
                } 
            } 
            arr_12 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (var_8) : (((/* implicit */int) min(((unsigned char)242), (arr_8 [7] [i_2] [i_0] [i_0]))))))));
        }
        var_18 = ((/* implicit */signed char) var_9);
        arr_13 [i_0] = ((/* implicit */unsigned char) var_8);
        arr_14 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) arr_9 [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) max(((short)-31757), (((/* implicit */short) (signed char)10))))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65522))))));
    }
    var_19 = ((/* implicit */long long int) var_2);
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) 1951010098U))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_5]))));
                arr_22 [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(arr_15 [i_5])))))) ? (((/* implicit */long long int) min((arr_17 [(signed char)3] [(signed char)3]), (((/* implicit */unsigned int) var_5))))) : (max((((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (arr_16 [i_5]))), (min((var_11), (var_0)))))));
                arr_23 [i_5] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_6])) ? (((/* implicit */int) (short)-31744)) : (var_4)))) ? (((/* implicit */long long int) 0)) : (((arr_16 [i_6]) >> (((((/* implicit */int) arr_18 [14ULL])) - (88))))))));
                var_22 -= ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
}
