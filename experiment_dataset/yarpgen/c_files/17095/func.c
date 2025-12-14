/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17095
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0])), (1928959555509939580LL)))) && (((/* implicit */_Bool) (unsigned char)162)))))));
                        arr_8 [i_2] &= ((/* implicit */signed char) ((((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)14693)))) | (((/* implicit */int) (unsigned char)161)))) * (((/* implicit */int) (signed char)7))));
                        arr_9 [i_1] [i_1] [i_3] = (!(((((/* implicit */_Bool) arr_2 [i_0 + 1])) && (((/* implicit */_Bool) (signed char)7)))));
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_0))));
                    }
                    for (signed char i_4 = 1; i_4 < 16; i_4 += 4) /* same iter space */
                    {
                        var_16 += ((/* implicit */unsigned short) arr_5 [i_1 + 2] [i_2] [i_4]);
                        var_17 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_4 [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 1]))) : (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))) : (arr_4 [i_0 + 1])))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 16; i_5 += 4) /* same iter space */
                    {
                        arr_15 [i_1] [i_1] = ((/* implicit */_Bool) 15983441024429803934ULL);
                        arr_16 [i_1] [i_1 + 1] [i_2] [i_5] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3611885998851652881LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-87))) : (-6066284990277856597LL)))));
                    }
                    for (signed char i_6 = 1; i_6 < 16; i_6 += 4) /* same iter space */
                    {
                        var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)51)))) & (((/* implicit */int) max((((/* implicit */short) arr_2 [i_6])), ((short)255))))))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) arr_12 [i_0] [i_0 + 1] [i_0] [i_2] [i_0] [i_0 + 1]))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)154))) : (arr_4 [i_0 + 1])))) ? (((/* implicit */int) (unsigned short)52632)) : (((/* implicit */int) var_10))));
                        var_21 *= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)161)) ? (-2677445676822730843LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38)))))) ? (((/* implicit */int) (short)21911)) : (((/* implicit */int) arr_18 [i_0 + 1] [i_0 + 1] [i_6 - 1] [i_0 + 1] [i_6] [i_6])))) - (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)58110)) - (((/* implicit */int) var_13))))) ? (((arr_1 [i_0]) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) arr_18 [i_0] [i_0 + 1] [i_0] [(signed char)9] [i_0] [(_Bool)1])))) : (((((/* implicit */int) arr_14 [i_1])) / (((/* implicit */int) var_10))))))));
                    }
                    arr_20 [i_0 + 1] [i_1] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)76)), (((((/* implicit */_Bool) (unsigned short)50820)) ? (((/* implicit */int) (unsigned short)12904)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (signed char)-57)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)12904))))));
                    arr_21 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) 18446744073709551615ULL);
                }
            } 
        } 
    } 
    var_22 = var_0;
}
