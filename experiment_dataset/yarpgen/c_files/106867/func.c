/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106867
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
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) var_6);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 10; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            arr_17 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0]))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_18))));
                            arr_18 [i_0] [i_1] [i_0] [i_3] [i_3] [i_3] [i_3] = (+((+(-13LL))));
                        }
                        arr_19 [i_0 + 2] [i_1] [i_0] [i_0 + 2] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3] [i_0])))))));
                        var_22 = ((/* implicit */signed char) 3877745592U);
                    }
                } 
            } 
        } 
        var_23 = (+(-5244896693879035643LL));
        var_24 &= ((/* implicit */long long int) (+(((((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned char)8] [i_0])) + (((/* implicit */int) arr_3 [i_0] [i_0]))))));
    }
    for (signed char i_5 = 1; i_5 < 9; i_5 += 3) 
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+((~(((/* implicit */int) arr_3 [i_5 - 1] [i_5 - 1]))))))) / (max(((-(arr_14 [i_5]))), (((/* implicit */long long int) 24U))))));
        var_26 &= ((/* implicit */signed char) min(((+(((/* implicit */int) min((arr_1 [i_5 + 2]), (arr_5 [i_5] [(unsigned char)4])))))), ((+(((/* implicit */int) var_5))))));
        arr_22 [0U] [i_5] = ((/* implicit */signed char) (+(min((((/* implicit */long long int) 3730817548U)), (arr_8 [i_5 + 3] [i_5 + 3] [i_5])))));
        var_27 = ((/* implicit */signed char) arr_20 [i_5]);
        var_28 &= var_0;
    }
    var_29 = ((/* implicit */long long int) (~((~((~(((/* implicit */int) (unsigned char)3))))))));
}
