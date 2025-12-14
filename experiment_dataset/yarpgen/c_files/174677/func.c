/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174677
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
    var_12 = ((/* implicit */signed char) (unsigned char)61);
    var_13 *= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 4; i_4 < 17; i_4 += 3) 
                    {
                        {
                            arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)1840)) >> (((704953293U) - (704953279U))))) >> ((((+(((/* implicit */int) var_9)))) + (18797)))));
                            arr_15 [i_0] [i_1] [1U] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)23183));
                            var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_0 + 2] [i_2] [i_0] [14]))));
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) << (((6579383236019074347LL) - (6579383236019074340LL)))));
        }
        for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 2) 
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5 + 2] [(_Bool)1] [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) arr_7 [i_5 + 2] [i_5] [i_0]))))) ? ((-(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 13788118841035652324ULL))))));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) (short)-31625)) : (((/* implicit */int) (short)22261))));
            var_18 += ((/* implicit */_Bool) (~(((unsigned long long int) max((((/* implicit */short) (unsigned char)198)), ((short)22284))))));
        }
        /* LoopNest 2 */
        for (short i_6 = 2; i_6 < 14; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)16)) : (arr_12 [i_0 - 1] [i_0]))), (((arr_7 [i_0 - 1] [i_0] [i_0 + 2]) << (((((/* implicit */int) var_7)) - (56082)))))));
                    arr_23 [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)100)) ? (12891323635969307351ULL) : (((/* implicit */unsigned long long int) arr_12 [i_0 + 2] [i_7]))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */long long int) var_2);
}
