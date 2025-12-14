/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121794
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
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_0] [i_2] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18842)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) arr_0 [i_0 - 1]))))) ? (min((((/* implicit */unsigned int) (signed char)-85)), (1876267273U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [i_0 - 3]))))));
                                arr_15 [i_0] [(signed char)7] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) 17179869183ULL);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) ^ (((/* implicit */int) arr_2 [i_0]))))), (18446744056529682432ULL)))));
                    /* LoopSeq 3 */
                    for (long long int i_5 = 1; i_5 < 18; i_5 += 3) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned long long int) (-((((~(((/* implicit */int) (unsigned short)18842)))) * (((/* implicit */int) ((unsigned char) var_10)))))));
                        arr_18 [i_5] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (+((((-(arr_5 [i_0]))) | (arr_9 [i_0] [i_2] [i_5])))));
                    }
                    for (long long int i_6 = 1; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) -3230627411768896912LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                        arr_23 [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */short) var_1)), (var_6)));
                    }
                    for (long long int i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)60092)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (-3230627411768896913LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43130)))))))))) : ((~(3230627411768896882LL)))));
                        arr_27 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-30)))))))));
                        var_18 = ((/* implicit */unsigned short) (-(max((-3230627411768896909LL), (((/* implicit */long long int) var_2))))));
                    }
                    var_19 += ((/* implicit */unsigned int) min((3230627411768896902LL), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                    arr_28 [i_0] [i_0] [i_1] [i_2] |= ((/* implicit */int) min((min((var_12), (((/* implicit */unsigned short) (signed char)-1)))), (((/* implicit */unsigned short) (_Bool)0))));
                }
            } 
        } 
        arr_29 [i_0] = ((/* implicit */unsigned char) 4294967295U);
        var_20 = ((/* implicit */short) 15762148689282441413ULL);
    }
    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        arr_33 [i_8] = ((/* implicit */unsigned long long int) (unsigned char)255);
        var_21 |= ((/* implicit */signed char) ((max((arr_31 [i_8]), (((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)255))))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_8]))))))));
        arr_34 [i_8] = ((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), ((short)15)));
    }
    var_22 = -1520206012;
}
