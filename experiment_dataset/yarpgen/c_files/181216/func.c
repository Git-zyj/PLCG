/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181216
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
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 4; i_3 < 21; i_3 += 1) 
                    {
                        arr_10 [i_0 + 1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)8191)) % (((/* implicit */int) (short)-8191))));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_9)))) && (((((/* implicit */_Bool) arr_8 [5U] [i_2] [i_1] [i_0 - 1])) || (((/* implicit */_Bool) var_11))))));
                        var_16 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_15)) & (((/* implicit */int) var_14)))))));
                    }
                    arr_12 [20U] [20U] [i_0] [i_0] = ((/* implicit */signed char) var_0);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) max((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_9)))), ((!(((/* implicit */_Bool) var_1))))))), (max((max((((/* implicit */int) var_2)), (var_13))), (((/* implicit */int) var_15))))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((var_8) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_10))) ? (max((((/* implicit */unsigned int) var_13)), (var_6))) : (((/* implicit */unsigned int) max((var_1), (((/* implicit */int) var_9)))))))))))));
    var_19 = ((/* implicit */short) max((var_19), (((short) var_15))));
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((short)8192), ((short)-8220))))))), (max(((~(6686066087023500708ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */int) var_4)))))))));
}
