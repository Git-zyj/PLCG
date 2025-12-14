/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144643
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
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_11 [i_0 - 2] [i_1] = ((/* implicit */short) max((855609754950019075ULL), (arr_10 [i_1] [i_1])));
                        arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_8 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 3] [i_3]) | (arr_8 [i_3 + 2] [i_3] [i_3] [i_3 + 2] [i_3 - 1] [i_3])))) ? ((~(arr_8 [i_3 + 3] [i_3 + 3] [i_3 + 3] [i_3 + 3] [i_3 - 1] [i_3]))) : (max((arr_8 [i_3 + 1] [i_3] [i_3 + 1] [i_3] [i_3 + 3] [i_3]), (arr_8 [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_3])))));
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 1272853546U)) ? (((/* implicit */unsigned int) ((((arr_2 [i_0 - 1] [i_0 - 1]) > (1272853539U))) ? (((/* implicit */int) var_9)) : (((int) 3022113742U))))) : (((((/* implicit */_Bool) ((3022113750U) % (1300475128U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3022113756U)))))) : (max((3022113757U), (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3]))))))));
                        arr_13 [i_3 + 1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_2] [3LL]);
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_0] [i_1] [i_0]))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_1 [i_0 - 1] [i_0 - 1]), (arr_1 [i_0 - 1] [i_0 - 1]))))));
        arr_14 [i_0] [i_0 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1326917815)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0])))))) - (((((/* implicit */_Bool) -181012797)) ? (3846017083U) : (((/* implicit */unsigned int) var_14))))))));
    }
    var_18 = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))), (var_2));
    var_19 = ((/* implicit */unsigned char) 1272853544U);
    var_20 = ((/* implicit */unsigned char) var_9);
}
