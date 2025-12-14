/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124731
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_12 &= ((/* implicit */unsigned short) ((_Bool) arr_1 [i_0]));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((((_Bool)0) ? (((/* implicit */unsigned int) max((2008252542), (((/* implicit */int) var_5))))) : (max((arr_1 [18LL]), (arr_0 [i_0]))))), (arr_0 [i_0])));
        var_13 -= ((/* implicit */unsigned int) var_11);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_6 [i_0] [i_0])))) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2])) : ((+((-(-293120891)))))));
                    arr_9 [i_0] [i_0] [(unsigned char)5] = ((/* implicit */_Bool) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */int) min((var_15), (arr_6 [i_3 - 1] [i_1])));
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3] [(signed char)19] [i_3]))));
                        var_17 -= arr_5 [12LL] [i_2] [i_3];
                    }
                    for (unsigned int i_4 = 1; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        var_18 &= ((/* implicit */signed char) min((11704418911420515083ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_19 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) max((arr_6 [i_0] [i_0]), (((/* implicit */int) var_7))))) ? (((unsigned int) arr_10 [i_0] [i_1] [12LL] [i_4])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 2] [i_1] [12U] [i_2])))))));
                        var_20 = ((/* implicit */unsigned short) max((max((arr_1 [i_4 + 1]), (arr_1 [i_4 + 1]))), (((/* implicit */unsigned int) ((signed char) var_7)))));
                        var_21 ^= ((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_0] [(unsigned short)14] [18U] [i_5] = ((/* implicit */_Bool) arr_6 [i_0] [11U]);
                        arr_20 [i_0] [(unsigned char)14] [i_5] [i_5] = ((/* implicit */unsigned int) ((unsigned char) (~(max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0])), (arr_4 [(_Bool)1]))))));
                        var_22 = ((/* implicit */signed char) ((min((arr_12 [i_2 + 2] [i_2 - 2] [i_2 - 2]), (arr_12 [i_2 + 2] [i_2 + 1] [i_2 + 2]))) - (((/* implicit */long long int) arr_3 [i_2 + 1] [i_2 - 2] [i_2 + 1]))));
                        var_23 ^= ((/* implicit */int) ((11453359091549773696ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48265)))));
                    }
                }
            } 
        } 
    }
    var_24 -= ((/* implicit */unsigned char) max((min((((/* implicit */int) min((var_5), (var_6)))), (max((((/* implicit */int) (_Bool)1)), (-1))))), (((/* implicit */int) var_6))));
    var_25 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((long long int) var_2))), (var_0)));
    var_26 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)21490))))))) != (((/* implicit */int) (_Bool)0))));
    var_27 *= ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) (unsigned char)240))), (max(((~(((/* implicit */int) var_10)))), (((((/* implicit */int) var_4)) * (((/* implicit */int) var_2))))))));
}
