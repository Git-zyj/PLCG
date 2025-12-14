/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104962
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
    var_16 = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((var_4) << (((((/* implicit */int) var_13)) - (17268))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)16))))));
    var_17 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)(-32767 - 1)))))) ^ (((4494803534348288ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) > (max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_2 [i_0] [i_0]))))))) % (((((/* implicit */_Bool) (unsigned char)13)) ? ((-(arr_2 [(unsigned short)17] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))))));
        arr_3 [i_0] = ((((/* implicit */unsigned int) ((arr_1 [i_0]) ? (((((/* implicit */_Bool) 1105852314)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0]))))) > (4294967295U));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_6 [i_0] [(unsigned char)0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((-838761609) + (2147483647))) >> (((/* implicit */int) arr_1 [i_0]))))))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
            /* LoopSeq 1 */
            for (signed char i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) % (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (short)32767))))));
                arr_9 [i_1] &= ((/* implicit */int) ((unsigned char) ((var_9) ? (((((/* implicit */long long int) ((/* implicit */int) var_13))) % (arr_8 [i_0] [i_1] [i_1]))) : (((/* implicit */long long int) ((arr_2 [i_1] [i_1]) << (((((/* implicit */int) var_0)) - (34)))))))));
            }
        }
        for (unsigned short i_3 = 3; i_3 < 15; i_3 += 2) 
        {
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */int) var_11);
            arr_13 [i_0] [(_Bool)1] [i_3 - 1] = ((/* implicit */signed char) -1105852307);
            arr_14 [i_0] [i_0] = ((/* implicit */int) arr_5 [i_0] [i_3 - 1] [i_3 - 3]);
        }
        var_20 = ((/* implicit */signed char) var_1);
    }
}
