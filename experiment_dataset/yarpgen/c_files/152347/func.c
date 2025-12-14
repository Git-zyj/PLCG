/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152347
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
    var_19 = ((/* implicit */unsigned int) ((((long long int) var_2)) - (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_17)))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) (unsigned short)55960)))))))));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (unsigned char)16))));
    var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (18446744073709551615ULL));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)222))) | (26LL))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) max((arr_0 [i_0 - 1]), (((/* implicit */unsigned char) arr_1 [i_0 + 2] [i_0 - 1]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_23 = ((/* implicit */short) arr_5 [i_0] [i_0] [i_0] [i_0]);
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (arr_8 [i_1 + 1] [i_1] [i_1 - 3])))) != (((/* implicit */int) arr_8 [i_1 - 3] [i_1] [i_1 - 2]))));
                    var_25 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((-1LL) | (((/* implicit */long long int) ((/* implicit */int) ((1311863534U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))))))))))));
                    arr_9 [i_1] [i_1] [i_2] [i_2] = arr_4 [i_0];
                }
            } 
        } 
        var_26 ^= ((/* implicit */unsigned int) ((((max((arr_7 [i_0]), (((/* implicit */unsigned long long int) 2983103762U)))) & (max((((/* implicit */unsigned long long int) (unsigned char)255)), (arr_7 [i_0]))))) <= (9099186397707065141ULL)));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 3] [i_0]))) <= (2983103762U)));
    }
}
