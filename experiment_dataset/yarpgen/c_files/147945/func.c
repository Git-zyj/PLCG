/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147945
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
    var_10 = ((/* implicit */signed char) (-(var_9)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)199);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~((~(var_9)))));
    }
    for (int i_1 = 2; i_1 < 16; i_1 += 4) 
    {
        arr_8 [i_1 - 2] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) -364216064))) - (((int) arr_4 [i_1]))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        arr_19 [i_4] [i_3] [i_2] [(unsigned short)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_12 [i_1] [i_1 - 2] [i_3]) + (arr_12 [i_1 + 1] [i_1 - 1] [i_1 - 1])))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) var_4))));
                        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_5 [6U] [i_1 + 1]), (((/* implicit */unsigned long long int) min((-2084181690), (((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)866))) : (((((((/* implicit */_Bool) 6192507502898594282ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_5 [5LL] [i_2]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)849)) ? (-793106661) : (((/* implicit */int) (short)-20801)))))))));
                        arr_20 [i_1] [i_1] = ((/* implicit */short) arr_0 [i_2] [i_3]);
                        arr_21 [i_1] [i_4] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */int) max(((signed char)3), (((/* implicit */signed char) (_Bool)1))))) * (((/* implicit */int) arr_15 [i_1 - 1] [i_1] [i_1]))))));
                        arr_22 [i_4] [i_1 - 2] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) arr_6 [i_2])))), (((unsigned int) var_5)))), (((/* implicit */unsigned int) min((arr_7 [i_1 - 1] [i_4]), (arr_7 [i_1 - 1] [i_2]))))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */unsigned long long int) (~(arr_1 [i_1])));
        var_13 = ((((_Bool) var_0)) ? (((/* implicit */int) arr_14 [i_1 + 1] [i_1])) : (((((/* implicit */int) arr_13 [i_1] [i_1])) ^ (((/* implicit */int) ((unsigned char) var_6))))));
    }
    var_14 = (-((-(((/* implicit */int) (unsigned short)55614)))));
}
