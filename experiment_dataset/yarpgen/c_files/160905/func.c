/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160905
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
    var_18 |= ((/* implicit */int) var_11);
    var_19 *= ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (-((-(arr_1 [i_1 + 1] [i_1 - 1])))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 34359738367LL)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_17))))) : (((var_2) ^ (((/* implicit */long long int) var_12))))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_22 |= ((/* implicit */unsigned long long int) var_10);
                            /* LoopSeq 2 */
                            for (long long int i_4 = 3; i_4 < 24; i_4 += 4) /* same iter space */
                            {
                                var_23 = ((/* implicit */_Bool) (signed char)-84);
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)163)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))))) ? (((/* implicit */int) (short)-11)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)232)) > (max((var_12), (((/* implicit */int) var_3)))))))));
                            }
                            for (long long int i_5 = 3; i_5 < 24; i_5 += 4) /* same iter space */
                            {
                                arr_15 [(signed char)8] [i_3] [(unsigned char)10] [20LL] [i_3] |= ((/* implicit */_Bool) ((((-854074680075929515LL) % (((/* implicit */long long int) var_4)))) | ((+((~(arr_11 [i_0] [i_1] [(_Bool)1] [i_3] [i_3])))))));
                                var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))) & (72057589742960640LL))) > (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))) % (var_8))))))) | (((((/* implicit */_Bool) 72057589742960648LL)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) >= (16768198703160577178ULL)))))))));
                            }
                            var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) -4747529966989878749LL)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
