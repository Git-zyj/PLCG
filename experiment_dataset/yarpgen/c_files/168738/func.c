/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168738
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
    var_17 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))) > ((+(2267454848U)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((_Bool) 2267454848U));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) var_9);
                        var_20 = ((((/* implicit */_Bool) arr_9 [i_1] [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2] [7ULL]))) : (((((/* implicit */_Bool) 17179867136ULL)) ? (2267454848U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))));
                        var_21 |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_10 [i_1 + 4] [i_1 + 4] [i_1] [i_1 + 3] [i_1] [i_1])) + (arr_1 [i_1 + 3] [i_0])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            arr_13 [i_1] [i_2] [i_3 + 1] [i_2] = ((/* implicit */unsigned short) var_5);
                            arr_14 [i_1] [i_1] [i_1 - 2] = ((/* implicit */unsigned int) (unsigned short)20714);
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~((-(2267454848U))))))));
                            arr_15 [i_4] [i_4] [(unsigned short)5] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744056529684479ULL)) ? (var_8) : (((/* implicit */long long int) ((unsigned int) (_Bool)1)))));
                            arr_16 [i_4] [i_4] [i_1] [i_2] [i_1] [i_0 - 3] [i_0 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)3))))) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((((-1301022605) + (2147483647))) << (((arr_2 [i_0]) - (9613904115863007895ULL)))))));
                        }
                    }
                } 
            } 
        } 
    }
}
