/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141451
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
    var_19 = ((/* implicit */int) var_0);
    var_20 &= ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_4 [i_0] [3] [i_1 + 1] [i_3])) % (((/* implicit */int) arr_2 [i_1] [i_2] [i_2]))))));
                            arr_10 [i_0] [i_1] [1] [i_0] [9LL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4539628424389459968ULL)) ? (4539628424389459968ULL) : (4539628424389459978ULL)));
                            var_22 -= ((/* implicit */unsigned short) var_10);
                            var_23 = ((/* implicit */int) var_5);
                            arr_11 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((4539628424389459990ULL), (((/* implicit */unsigned long long int) var_16))))) ? (((/* implicit */int) arr_7 [i_2] [i_1] [i_2])) : (((((/* implicit */int) (unsigned short)597)) + (((/* implicit */int) var_10))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            arr_19 [i_5 + 1] [i_4 - 1] [8U] [i_1 + 1] [11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((13907115649320091637ULL) >> (((-211531850) + (211531893)))))))) ? (((int) ((((/* implicit */int) arr_7 [i_0] [8] [i_5 + 1])) - (((/* implicit */int) arr_0 [i_1]))))) : ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-31650)))) + (((/* implicit */int) (unsigned char)223))))));
                            var_24 |= ((/* implicit */_Bool) (unsigned short)7077);
                            arr_20 [i_5] [i_4] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((arr_16 [i_0] [i_0] [i_4] [i_0]), (((/* implicit */int) arr_8 [i_5] [i_1] [i_4] [i_1] [i_0]))))) / (arr_6 [i_1] [i_0] [i_4] [i_0])))) || (((/* implicit */_Bool) arr_17 [i_0] [i_1 - 2] [i_4]))));
                            arr_21 [i_4] = ((/* implicit */int) (signed char)122);
                        }
                    } 
                } 
                arr_22 [i_0] [i_1 - 1] [i_0] = ((/* implicit */signed char) var_16);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_6 = 4; i_6 < 22; i_6 += 4) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_25 += ((/* implicit */long long int) (-(((211531849) << (((13907115649320091628ULL) - (13907115649320091626ULL)))))));
                    var_26 = ((/* implicit */_Bool) ((min((-211531831), (((/* implicit */int) (signed char)95)))) / (((/* implicit */int) max(((unsigned short)597), (((/* implicit */unsigned short) ((_Bool) var_16))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 3; i_9 < 24; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) min((arr_25 [i_9 + 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_32 [i_6] [i_6 - 1] [i_6 + 2] [i_9 - 2])))))));
                                arr_35 [i_6] [i_7] [i_6] [i_6] [i_10] [23] = ((/* implicit */int) ((11018083012815763242ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    arr_36 [i_6] [i_7] [i_6] = ((/* implicit */_Bool) min(((-(211531842))), ((-(((/* implicit */int) (unsigned short)58458))))));
                }
            } 
        } 
    } 
}
