/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130763
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (-(((/* implicit */int) var_6)))))));
        var_12 -= arr_1 [(unsigned short)4];
        var_13 &= ((/* implicit */short) ((1967359244128679310ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)12])))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_3 [i_0 + 2]))));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_15 -= ((/* implicit */signed char) (unsigned short)7);
                            var_16 -= ((/* implicit */unsigned long long int) var_1);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_17 -= ((/* implicit */long long int) ((arr_3 [i_1 + 1]) ^ (arr_3 [i_1 + 1])));
                            var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0 + 1] [1] [(_Bool)1] [i_3] [5ULL] [13LL] [13LL])) + (((/* implicit */int) arr_10 [(short)9] [i_3] [i_2] [i_1] [i_1] [i_0] [i_0]))));
                        }
                        for (signed char i_6 = 2; i_6 < 19; i_6 += 2) 
                        {
                            var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1967359244128679310ULL)) ? (((/* implicit */unsigned long long int) 4844710177034998601LL)) : (0ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95))))) : (((/* implicit */unsigned long long int) ((arr_14 [i_6] [i_3] [13LL] [5U] [13LL]) ? (arr_8 [i_0] [i_0] [i_2] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_6 - 2] [i_1 + 1]))));
                            var_21 += ((/* implicit */short) var_8);
                        }
                        for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (_Bool)1))));
                            var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_7] [i_0])) ? (((817727721004642771ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)62496)) ^ (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) var_6)))))));
                            var_25 = ((/* implicit */long long int) arr_5 [i_7] [(unsigned short)3] [5ULL] [8]);
                        }
                    }
                } 
            } 
        } 
        var_26 -= ((/* implicit */unsigned short) ((_Bool) arr_5 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1]));
    }
    var_27 &= ((/* implicit */signed char) var_4);
}
