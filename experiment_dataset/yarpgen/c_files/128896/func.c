/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128896
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))) ? (((/* implicit */int) (unsigned short)20610)) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_0))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
        var_14 = (~(((/* implicit */int) var_6)));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            arr_8 [(unsigned short)18] &= ((/* implicit */unsigned long long int) var_0);
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) min(((~(arr_6 [i_1 + 2] [i_1]))), (((/* implicit */unsigned long long int) ((unsigned int) var_5)))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 1) 
        {
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((/* implicit */unsigned long long int) var_5)), ((+(var_3))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_3 = 3; i_3 < 21; i_3 += 1) 
            {
                var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_13 [i_2 + 2]))));
                var_17 -= ((/* implicit */unsigned int) (~((~(arr_10 [i_0])))));
                var_18 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_5))))));
                arr_14 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(var_2)))) : (arr_11 [i_3 + 1] [i_3 - 2] [i_3 - 2])));
            }
            arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) min((((signed char) (~(((/* implicit */int) var_1))))), (((/* implicit */signed char) arr_2 [i_0] [i_0]))));
        }
        for (int i_4 = 1; i_4 < 21; i_4 += 1) 
        {
            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned char) (signed char)127)), (var_8))), (var_8))))));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_9))));
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((((/* implicit */unsigned long long int) arr_0 [i_4])), (min((((/* implicit */unsigned long long int) arr_13 [1LL])), (((var_10) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16383))))))))))));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))) : (4294967295U)));
            arr_19 [i_0] [i_4] [i_0] = var_5;
        }
    }
    var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) var_1))))), (var_7)));
}
