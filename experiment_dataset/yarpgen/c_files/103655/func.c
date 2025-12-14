/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103655
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            var_10 = (short)(-32767 - 1);
            var_11 = ((/* implicit */unsigned char) var_4);
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                arr_6 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (((((/* implicit */int) var_0)) << (((((((/* implicit */int) var_5)) + (5529))) - (9)))))))) % ((~(15414690047185324647ULL)))));
                var_12 |= ((/* implicit */short) (+(((/* implicit */int) var_0))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 3; i_3 < 22; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        {
                            var_13 ^= ((/* implicit */short) arr_2 [i_0] [i_0] [i_0]);
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_4))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (signed char)102))));
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))));
            }
        }
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) max((min((((/* implicit */int) var_7)), (arr_3 [22U]))), (((((/* implicit */_Bool) arr_3 [14ULL])) ? (((/* implicit */int) (unsigned short)0)) : (arr_3 [18LL])))));
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) var_7))))))));
    }
    var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_3)))));
}
