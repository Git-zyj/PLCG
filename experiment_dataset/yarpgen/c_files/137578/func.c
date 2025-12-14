/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137578
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
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) (short)-2922)) : (((/* implicit */int) (signed char)72)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-11968)) ? (((/* implicit */int) (short)9818)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-6451))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)6455)) : (((/* implicit */int) (short)6455)))) : (((/* implicit */int) (short)6455))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) var_1))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                    arr_7 [i_2] [i_0] [i_0 + 1] = ((/* implicit */short) (((!(((/* implicit */_Bool) min((var_10), ((short)-6456)))))) ? (((/* implicit */int) (((~(arr_4 [i_0] [i_1] [i_2]))) >= (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_4 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) var_0))))))) : (((/* implicit */int) var_6))));
                    var_17 -= ((/* implicit */short) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) & (((/* implicit */int) ((signed char) (signed char)-49))))) | (((/* implicit */int) ((unsigned short) (short)6451)))));
                    arr_8 [i_0] = ((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */unsigned short) (short)-6459))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 3; i_3 < 22; i_3 += 4) 
    {
        arr_11 [i_3 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? ((-(min((-6206711747222279020LL), (((/* implicit */long long int) var_6)))))) : (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-125)), (var_4)))) + (((/* implicit */int) max((arr_10 [i_3] [i_3]), (arr_10 [i_3] [i_3 - 1])))))))));
        arr_12 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_10 [(unsigned short)21] [i_3])))) : (max((6206711747222279020LL), (((/* implicit */long long int) arr_9 [i_3]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 + 1]))) : (((var_3) ? (0U) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [(short)7])))))))));
        var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3 + 1])))))) == (((((/* implicit */_Bool) ((short) arr_10 [5U] [i_3 + 2]))) ? (max((2097151LL), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) ((signed char) var_2))), (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6447))) : (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
    var_20 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) var_2)), (min((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_5)))))))));
}
