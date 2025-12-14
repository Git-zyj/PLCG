/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120942
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
    var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) ((var_16) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
    var_20 = ((/* implicit */unsigned char) (+(((var_16) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) > (var_0)))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (var_0)))) || (((/* implicit */_Bool) ((unsigned int) var_7))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)90)) - (((/* implicit */int) (unsigned short)29999))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) == (((((/* implicit */_Bool) ((((/* implicit */int) var_15)) % (arr_9 [i_3] [i_2] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((((arr_9 [i_0] [i_1] [i_2] [i_2]) + (2147483647))) >> (((/* implicit */int) var_15))))) : (3857605420U)))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0] [1U] [1U] [i_0]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))));
                }
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) (~(arr_10 [i_0] [i_1] [i_0] [i_2] [i_2])))) : (var_10)))));
            }
            var_25 = ((/* implicit */short) max((arr_5 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) ((short) arr_5 [i_0] [i_1] [i_0])))));
            var_26 = ((/* implicit */signed char) (!(((_Bool) arr_10 [i_0] [i_1] [i_0] [i_1] [i_0]))));
        }
        var_27 = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned char) arr_6 [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) 4294967295U)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    }
    var_28 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_6))), (var_5)))) * ((+(max((16104812620373227970ULL), (((/* implicit */unsigned long long int) var_16))))))));
}
