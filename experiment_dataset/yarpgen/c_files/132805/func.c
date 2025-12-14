/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132805
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
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1])) + (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) var_11)))) : ((-(((/* implicit */int) var_5))))));
                var_13 ^= ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */int) arr_4 [(unsigned short)3])) / (((/* implicit */int) arr_0 [i_0] [i_1])))), ((~(((/* implicit */int) (unsigned short)44233)))))))));
                var_14 = ((/* implicit */_Bool) var_3);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_15 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_2] [15])) : (((/* implicit */int) ((_Bool) -920279473))))), (((/* implicit */int) ((_Bool) (~(-369170905)))))));
        var_16 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_5 [i_2] [i_2]))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))))), (((/* implicit */long long int) ((max((-369170905), (((/* implicit */int) arr_5 [i_2] [i_2])))) / (-369170905))))));
        var_17 = ((/* implicit */_Bool) arr_8 [i_2]);
    }
    var_18 = ((/* implicit */short) max((((/* implicit */long long int) var_0)), (((((/* implicit */long long int) ((2147483647) >> (((((/* implicit */int) var_4)) - (7465)))))) ^ (((var_8) + (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
}
