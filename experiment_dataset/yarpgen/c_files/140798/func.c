/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140798
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
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_1 [i_0 + 2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_1]))))))));
                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) arr_1 [i_0 + 1]))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1993008359397327206LL)) ? (var_5) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))) : (((-1LL) / (((/* implicit */long long int) var_0))))))) ? (((/* implicit */unsigned long long int) var_5)) : (max((((((/* implicit */_Bool) (unsigned char)248)) ? (10ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_13 = ((/* implicit */short) ((unsigned int) arr_3 [i_2] [i_2] [i_2]));
        var_14 = ((/* implicit */unsigned int) arr_1 [i_2]);
        arr_6 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_5 [i_2]))));
        var_15 ^= ((/* implicit */short) ((arr_3 [(_Bool)1] [i_2] [(_Bool)1]) ? (((/* implicit */int) arr_3 [10] [i_2] [i_2])) : (((/* implicit */int) arr_3 [8U] [i_2] [(_Bool)1]))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
    {
        var_16 += ((/* implicit */unsigned int) ((_Bool) 576460752303423488LL));
        var_17 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) var_9)) > (max((((/* implicit */unsigned long long int) (unsigned char)255)), (arr_1 [9U]))))) ? ((+(var_9))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)65535)), (-72057594037927936LL)))) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) var_3))))));
        arr_9 [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_3 [i_3] [i_3 - 1] [i_3]) ? (arr_8 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3])))))) ? (((/* implicit */long long int) ((int) arr_0 [i_3] [8]))) : (arr_7 [i_3] [i_3]))) % (((/* implicit */long long int) arr_8 [i_3]))));
    }
    for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 1) 
    {
        var_18 *= ((/* implicit */unsigned long long int) ((int) (+(var_4))));
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            arr_15 [i_4] [i_4 - 3] = ((/* implicit */_Bool) (unsigned short)32768);
            var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) / (17592186044415LL))) == (((/* implicit */long long int) ((unsigned int) 576460752303423488LL)))))), (((((/* implicit */_Bool) arr_10 [i_4 - 2])) ? (((/* implicit */unsigned long long int) arr_11 [i_4] [i_5])) : (((((/* implicit */unsigned long long int) var_8)) & (4423262117985636433ULL)))))));
        }
        var_20 = (((!(((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4 - 3])))) ? (((/* implicit */int) ((-1993008359397327206LL) < (((/* implicit */long long int) arr_14 [i_4] [i_4] [i_4 + 3]))))) : (((int) arr_11 [i_4 - 1] [i_4 + 2])));
    }
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_8)) + (535822336U))))));
}
