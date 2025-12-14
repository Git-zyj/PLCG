/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109636
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [(unsigned short)15] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -584749688)) ? (-22341485) : (((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            var_19 = ((/* implicit */int) ((unsigned short) ((unsigned long long int) arr_3 [i_0] [(unsigned short)16])));
            var_20 = 10402960237875869342ULL;
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            var_21 = ((((/* implicit */_Bool) arr_0 [i_2])) ? (((unsigned long long int) var_17)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))));
            var_22 = ((/* implicit */unsigned short) (+(((unsigned long long int) arr_8 [i_2] [i_2] [i_2]))));
        }
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) var_7);
        var_23 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) / (arr_6 [i_3] [i_3] [i_3]));
    }
    for (int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_24 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(var_15)))) ? ((+(10402960237875869342ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) / ((~((-(var_6)))))));
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            var_25 = max((((/* implicit */long long int) var_14)), (((long long int) var_5)));
            arr_21 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) 1582555460815164255LL));
        }
        arr_22 [i_4] [i_4] = ((/* implicit */long long int) min(((~(arr_16 [i_4]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)12879)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)6031)))))));
    }
    var_26 = ((((/* implicit */_Bool) var_3)) ? ((((+(3737476737770172132ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)28230)) / (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
}
