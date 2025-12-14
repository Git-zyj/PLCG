/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107634
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
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((4926217285719385979LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19581))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((int) (unsigned char)1))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1503802518)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned short)45957))));
    }
    for (long long int i_1 = 3; i_1 < 8; i_1 += 3) 
    {
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1 + 1])) | (var_9)))) ? (((/* implicit */int) arr_0 [i_1 - 3])) : (((((/* implicit */int) (unsigned char)142)) / (((/* implicit */int) (signed char)3)))));
        arr_8 [(unsigned short)6] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)175)) >> (((/* implicit */int) (_Bool)0))));
        var_15 = ((/* implicit */long long int) min(((+((-(1143396433))))), (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)46673))))))));
        var_16 = (-(((arr_2 [i_1]) % (((/* implicit */unsigned long long int) var_2)))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) -1933289655)) % (9094099531306343861ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1]))))))) : (max((((/* implicit */long long int) ((arr_9 [i_2]) ^ (((/* implicit */int) var_12))))), (min((arr_13 [i_2] [4] [i_3]), (((/* implicit */long long int) var_7)))))))))));
            arr_15 [i_2] [9LL] [(unsigned char)14] = ((/* implicit */signed char) ((arr_13 [i_3 - 1] [i_3 + 1] [i_3 - 1]) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)-48))) / (7883954891129046244LL)))));
        }
        arr_16 [i_2] = ((/* implicit */unsigned long long int) arr_9 [i_2]);
        arr_17 [i_2] [i_2] = ((/* implicit */int) ((((((4926217285719385953LL) ^ (((/* implicit */long long int) ((int) -4926217285719385950LL))))) + (9223372036854775807LL))) << ((((((-(((/* implicit */int) arr_10 [i_2])))) + (871))) - (37)))));
    }
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_1))));
}
