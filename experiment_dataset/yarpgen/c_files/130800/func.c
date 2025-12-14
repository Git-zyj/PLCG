/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130800
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
    var_20 = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) (short)3535))))) < (((((/* implicit */_Bool) (short)-28983)) ? (-5796139520132811142LL) : (((/* implicit */long long int) ((/* implicit */int) (short)25418)))))));
    var_21 = var_9;
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_22 -= ((/* implicit */short) arr_3 [i_0] [i_1]);
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(((((/* implicit */_Bool) ((var_17) ? (arr_0 [i_2]) : (((/* implicit */int) arr_6 [i_0]))))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_0])))) : (arr_0 [i_2]))))))));
                    arr_8 [i_2] [i_1] [i_2] [19ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)12))));
                    arr_9 [i_2] [i_2] [(signed char)1] = ((/* implicit */int) (~(arr_5 [i_2] [i_2] [18U])));
                }
                for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    arr_12 [i_0] [i_1] [i_1] [i_3] = ((unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (2974866433222648008ULL) : (15928063199248709607ULL)));
                    arr_13 [i_0] [i_3] [(short)2] = (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_3])) && (((/* implicit */_Bool) arr_10 [i_1] [i_1] [(short)0])))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_4 = 2; i_4 < 18; i_4 += 3) 
                    {
                        var_24 += ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_16 [i_1 - 2] [i_3] [i_4]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [(signed char)15]))) & (arr_11 [i_0] [i_1] [i_3] [i_0]))) : (((/* implicit */unsigned long long int) arr_0 [i_1 + 2])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_1 [i_0] [i_1])) - (((/* implicit */int) var_6)))))))));
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_5), (var_0)))) || (((/* implicit */_Bool) (+(var_12)))))) ? ((-(((((/* implicit */_Bool) 2518680874460842009ULL)) ? (2518680874460842009ULL) : (11498719075453024316ULL))))) : (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_3 [i_0] [i_0]))))))))))));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 4] [(short)12])) ? (arr_2 [i_1 + 4] [i_1]) : (arr_2 [i_1 + 3] [i_3])))) ? ((-(((((/* implicit */_Bool) arr_14 [i_4] [i_3] [(signed char)7] [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [7] [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (!(var_13)))))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_21 [(short)10] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25390)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) arr_6 [i_3]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)0)))))));
                            arr_22 [i_0] [i_1] [14LL] [i_3] [i_0] [i_0] |= arr_3 [i_4 - 1] [i_1 + 1];
                        }
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_3 [16U] [i_1 + 4])) ? (((/* implicit */int) arr_16 [i_6] [i_1] [i_1])) : (var_18)))));
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_0 - 1] [i_1 - 2] [i_3])))))));
                        var_29 += (~((-(((/* implicit */int) arr_7 [i_0] [i_3])))));
                    }
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */short) ((long long int) arr_15 [i_1 - 1] [i_1 + 3] [i_0 - 1]));
                        var_31 = ((/* implicit */_Bool) ((short) ((long long int) ((var_13) ? (arr_27 [(short)4] [(short)4] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(signed char)1] [(signed char)1] [i_3])))))));
                    }
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
                    {
                        arr_31 [i_0] [i_3] = ((unsigned long long int) ((unsigned long long int) arr_27 [i_1 + 2] [i_1 + 3] [i_1] [i_3]));
                        var_32 -= arr_4 [i_0] [i_1] [(short)17];
                        arr_32 [i_0] [i_0] [i_1] [i_0] [i_8] [i_8] &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [18] [(short)17]))));
                    }
                }
            }
        } 
    } 
    var_33 = ((/* implicit */short) ((signed char) var_6));
}
