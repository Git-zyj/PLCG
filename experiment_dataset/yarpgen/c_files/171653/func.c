/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171653
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) min(((~(var_11))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (short)-27558)))))))) : (1106848942035782159LL)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            arr_8 [i_0] [(unsigned char)16] [i_1] = ((((((/* implicit */int) (unsigned char)113)) != (((/* implicit */int) arr_7 [i_1])))) ? (((((/* implicit */int) arr_6 [i_0])) | (((/* implicit */int) arr_6 [i_0])))) : (((/* implicit */int) arr_6 [i_1])));
            var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5194591611497047474LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142))) : (-1138998213105792092LL)));
        }
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_11 [i_0] [i_2] [i_0] = arr_2 [i_0];
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_1 [i_0])))) ? (((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_0 [i_0]))))) == (((arr_3 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-189992185445732049LL)))))))))));
        }
    }
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        var_17 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))) : (min((((/* implicit */unsigned long long int) arr_7 [i_3])), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)52982)), (arr_12 [i_3])))) ? (((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3]))) : (arr_10 [i_3] [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_3]))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            var_18 = ((((/* implicit */_Bool) (-(var_6)))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (signed char)-13))))) | (((arr_3 [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3]))) : (var_6))))) : (((/* implicit */unsigned long long int) -189992185445732054LL)));
            arr_17 [i_3] [i_4] = (unsigned char)113;
            arr_18 [i_3] [i_4] = ((/* implicit */_Bool) (short)13513);
        }
    }
    var_19 = ((/* implicit */unsigned long long int) var_8);
    var_20 = ((/* implicit */unsigned char) var_8);
}
