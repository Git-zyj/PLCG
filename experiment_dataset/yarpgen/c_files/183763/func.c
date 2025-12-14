/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183763
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_17 ^= ((/* implicit */long long int) max((max((arr_1 [i_2 - 1]), (arr_1 [i_2 - 1]))), (max((arr_5 [i_2 + 1]), (arr_5 [i_2 + 1])))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1])) ? (min((((/* implicit */unsigned int) var_9)), (arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2]))) : (((arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ^ (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [1U])))));
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [11LL] [i_3 - 2] = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) min(((unsigned short)33004), (((/* implicit */unsigned short) (_Bool)1))))), (arr_7 [i_1])))), ((((~(arr_0 [i_0]))) + (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)33030)))))))));
                    }
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32506))) : (1193491178U)));
    var_21 = ((/* implicit */long long int) ((_Bool) (((+(((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1))))))));
    var_22 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_0) : (17U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9187343239835811840LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15))))) : (((8ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) var_9))));
}
