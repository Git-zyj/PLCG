/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122751
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_12 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (2147483647) : (2147483647)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -2147483641)), (3807140791U)))) : (((unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_1) : (((/* implicit */long long int) arr_2 [i_0]))))));
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (((/* implicit */signed char) (_Bool)1)))))) | (var_0))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) ^ (max((2147483640), (((/* implicit */int) (short)16174))))))))))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_14 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_4 [i_1])) - (72)))))), (((((/* implicit */unsigned int) max((-2147483641), (((/* implicit */int) (short)-8012))))) ^ (min((3807140789U), (((/* implicit */unsigned int) 2147483647))))))));
        var_15 += ((((/* implicit */_Bool) (~(arr_0 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_1]) == (arr_0 [i_1]))))) : (((arr_0 [i_1]) - (arr_0 [i_1]))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 3; i_3 < 10; i_3 += 2) 
        {
            var_16 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_10 [i_3] [i_2])) << (((var_6) - (4185566158U)))))));
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_9 [i_3]))));
            arr_11 [i_2] [i_2] [i_3] = ((/* implicit */short) ((5053844690073871200LL) == (arr_3 [i_2 + 2])));
        }
        arr_12 [(short)5] [4LL] = ((/* implicit */short) ((((/* implicit */long long int) arr_2 [i_2 + 2])) / (var_1)));
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -2147483623))));
    }
    var_19 = ((/* implicit */signed char) ((unsigned char) var_0));
    var_20 = ((/* implicit */_Bool) min((var_20), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_0)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-5053844690073871206LL))) : (((/* implicit */long long int) var_6)))))))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~((~(((unsigned long long int) -2147483641)))))))));
}
