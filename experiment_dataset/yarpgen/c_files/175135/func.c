/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175135
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) max((max((((arr_2 [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) arr_3 [(unsigned char)0] [i_0])))), (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14255)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) : (arr_5 [i_0] [i_0])))))))));
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9148721973453051165ULL)) ? (13737261694040129972ULL) : (((/* implicit */unsigned long long int) -6163596809370881284LL))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                var_18 = ((/* implicit */short) (~(arr_12 [i_2 + 2])));
                arr_13 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((arr_0 [i_2 - 1]) ? (((/* implicit */int) arr_10 [i_2 + 1] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_0 [i_2 - 2]))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : ((+(((/* implicit */int) (unsigned short)51300))))))) ? ((~(arr_11 [i_0] [i_0] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        {
                            arr_22 [i_1] [i_1] [i_1] = ((/* implicit */int) var_10);
                            var_20 = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */signed char) ((_Bool) var_10))), (var_10))))));
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_20 [i_3] [i_1])), (((((/* implicit */_Bool) arr_3 [5U] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-124)))))))));
                            var_22 = 411173671U;
                        }
                    } 
                } 
            }
        }
        var_23 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [(_Bool)1]))))));
        arr_23 [(unsigned char)19] = (!(((/* implicit */_Bool) arr_4 [i_0] [i_0])));
    }
    var_24 |= ((/* implicit */signed char) var_9);
}
