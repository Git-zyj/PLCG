/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132458
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) var_0);
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) / (((((/* implicit */int) (unsigned short)30779)) / (((/* implicit */int) var_3))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) 10021209215977422445ULL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) ((_Bool) (short)1750))) : (((/* implicit */int) (!((_Bool)0)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
        {
            var_20 |= ((/* implicit */unsigned int) arr_2 [(_Bool)1] [i_2]);
            var_21 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) (-2147483647 - 1)))));
            var_22 = ((/* implicit */long long int) ((2147483647) & (((/* implicit */int) (signed char)(-127 - 1)))));
            var_23 = ((/* implicit */_Bool) var_2);
        }
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((((4720466431667998565ULL) < (((/* implicit */unsigned long long int) 536870912)))) && (((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2]))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_24 += ((unsigned char) arr_4 [i_4] [i_4]);
        arr_15 [i_4] [i_4] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4] [i_4]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_7 [10ULL] [i_4])))))))), (max((((/* implicit */long long int) (signed char)(-127 - 1))), (arr_6 [i_4])))));
        var_25 += ((/* implicit */signed char) min((((long long int) arr_14 [i_4])), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
    }
}
