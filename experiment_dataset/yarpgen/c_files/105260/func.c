/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105260
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((((/* implicit */_Bool) ((var_2) - (arr_1 [i_0])))) ? (((var_12) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_0]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_12 [i_0] = ((/* implicit */long long int) ((-2049379810) >= (((/* implicit */int) arr_10 [i_0] [(signed char)13]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) 144115187002114048ULL);
                                var_14 = ((/* implicit */long long int) (signed char)103);
                                arr_18 [i_3] [i_3] [i_1] [i_3] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 2049379820)) <= (0ULL))) ? (((((/* implicit */int) arr_10 [9LL] [9LL])) / (2049379810))) : (var_4)));
                                var_15 = ((/* implicit */unsigned short) var_7);
                                arr_19 [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)61619)) ? (17592186011648ULL) : (18446744073709551589ULL))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_16 |= ((/* implicit */int) max((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_9))))))));
    var_17 = ((/* implicit */unsigned char) min((((_Bool) ((_Bool) (signed char)-1))), (((((/* implicit */unsigned long long int) var_2)) > (var_11)))));
    var_18 = ((/* implicit */long long int) ((unsigned short) var_5));
    var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) == (var_8)));
}
