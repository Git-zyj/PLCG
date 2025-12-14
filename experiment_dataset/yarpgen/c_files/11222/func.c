/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11222
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
    var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((_Bool) var_9)))))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_1))));
    var_18 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 1) 
                    {
                        arr_9 [i_3 + 1] [i_0] [i_0] [(unsigned char)5] = ((unsigned long long int) arr_3 [i_1] [i_3 - 1]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) 4294967283U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_12)));
                            var_19 ^= ((/* implicit */unsigned int) arr_3 [i_1 + 2] [i_1 + 3]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+(((unsigned long long int) arr_1 [i_1] [i_5])))))));
                            var_21 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                            var_22 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [(unsigned short)2] [(unsigned short)2] [i_1] [(unsigned short)2] [(_Bool)1]))) : (3238787485834114013ULL)));
                        }
                        var_23 = ((/* implicit */long long int) ((((min(((-(var_6))), (((((/* implicit */int) arr_6 [i_3] [i_0] [i_0])) >> (((((/* implicit */int) (short)128)) - (102))))))) + (2147483647))) >> (min((min((3238787485834113994ULL), (((/* implicit */unsigned long long int) (short)140)))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    }
                    var_24 = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_10 [i_2 - 2] [i_2] [i_1 - 3] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_8))))) && (((min((3238787485834114010ULL), (((/* implicit */unsigned long long int) var_7)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [0U] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)102))))))));
                    var_25 *= ((/* implicit */short) ((_Bool) (+(((/* implicit */int) arr_14 [i_0] [i_1 - 4] [i_2 - 2] [i_0] [9LL] [7U] [i_0])))));
                }
            } 
        } 
    } 
}
