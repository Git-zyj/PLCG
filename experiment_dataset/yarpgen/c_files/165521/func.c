/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165521
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
    var_18 ^= ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_16)))))), (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (!((_Bool)1))))))));
    var_19 = ((/* implicit */_Bool) 842687946U);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(842687946U)))) ? (((var_13) ? (((/* implicit */unsigned int) var_9)) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_15))) ? (((((/* implicit */int) (unsigned short)45297)) >> (((var_2) - (3885944337687959268LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -781359441724259684LL)))))));
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((arr_0 [(_Bool)1]) & (((/* implicit */unsigned long long int) 842687946U)))))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_10 [i_0] [i_0] [8LL] [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (((unsigned long long int) var_16)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                var_23 = ((/* implicit */long long int) var_3);
            }
            var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 3]))));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 842687946U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)2048))));
        }
        var_25 = ((/* implicit */long long int) 3452279348U);
        var_26 = ((/* implicit */_Bool) ((long long int) (((_Bool)1) ? (842687946U) : (min((3452279350U), (842687948U))))));
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) max(((~(((/* implicit */int) arr_1 [i_0])))), (max((((/* implicit */int) arr_7 [i_0 - 2] [(unsigned char)11] [i_0])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)20223)) : (var_9))))))))));
    }
    var_28 = ((/* implicit */_Bool) (~(min((((/* implicit */int) var_7)), ((~(((/* implicit */int) (_Bool)1))))))));
}
