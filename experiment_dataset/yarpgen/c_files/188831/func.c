/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188831
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
    var_14 = ((/* implicit */int) min((max((((/* implicit */long long int) ((_Bool) var_9))), (-1987405803610592166LL))), (((/* implicit */long long int) ((var_12) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)66)) && (((/* implicit */_Bool) var_3))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_15 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32763)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [6LL])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1987405803610592169LL)) && (((/* implicit */_Bool) (unsigned char)208)))))) : (((unsigned int) var_11))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) (((_Bool)1) ? (8488300217594444156ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */int) (unsigned char)66)), (var_12))) : (((/* implicit */int) (unsigned char)163))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3485484126932374967LL)) ? ((+(((/* implicit */int) (short)0)))) : (((/* implicit */int) arr_4 [i_1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 = ((/* implicit */short) ((((_Bool) arr_6 [(signed char)20] [(signed char)20] [(signed char)16])) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)66)) : (-364265488))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                var_19 = var_5;
                var_20 = ((/* implicit */signed char) (~(-1987405803610592184LL)));
            }
            var_21 = ((/* implicit */short) var_5);
        }
    }
}
