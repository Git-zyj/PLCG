/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10737
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
    var_15 = ((/* implicit */unsigned int) max((max((((/* implicit */int) var_10)), (((int) var_7)))), ((((-(((/* implicit */int) var_1)))) + ((+(((/* implicit */int) (_Bool)1))))))));
    var_16 += ((unsigned char) (!((!(((/* implicit */_Bool) 10791548338884913263ULL))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 -= ((signed char) (!((!(((/* implicit */_Bool) arr_2 [i_0]))))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-33))))) + (((/* implicit */int) (!(((arr_0 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_19 = (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_2 - 1] [i_3] [(_Bool)1] [i_4 + 1])) : (((/* implicit */int) var_10)))));
                                var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((10524766944307156782ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -12))))) : ((+(((/* implicit */int) var_13))))))));
                                var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(var_7)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        var_22 ^= ((long long int) (-((+(((/* implicit */int) arr_10 [i_5] [i_5] [(unsigned short)5] [i_5] [i_1] [i_5]))))));
                        var_23 = (-((+((-(arr_13 [i_0] [i_1] [i_0] [10LL] [i_0] [i_0]))))));
                        arr_16 [i_2] [i_1] [i_2] [i_5] = max(((-(((((/* implicit */_Bool) 7623196013771318159LL)) ? (-17LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-53))))))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 1; i_6 < 7; i_6 += 4) 
                    {
                        arr_19 [i_0] [i_2] [(unsigned char)10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 441006946)) ? (((/* implicit */int) arr_7 [6] [(signed char)6] [(signed char)6] [i_6])) : (((/* implicit */int) (short)-7)))))));
                        arr_20 [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (-((-(-39LL)))));
                        var_24 &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-22897))))) & ((+(((/* implicit */int) (unsigned short)46199))))));
                        var_25 *= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_18 [i_2] [i_2 - 1] [(signed char)4] [i_6 + 3] [i_2] [i_6]))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) ((signed char) -245605365));
}
