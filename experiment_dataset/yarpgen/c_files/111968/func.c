/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111968
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
    var_10 = ((/* implicit */long long int) min((var_10), (((long long int) ((int) (-(((/* implicit */int) (short)-32759))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (-343651584)))) > (max((2210650335293296207LL), (((/* implicit */long long int) arr_6 [i_2] [i_1] [i_0] [i_0])))))))));
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) ^ (max((arr_6 [i_0] [i_1] [i_1] [i_2]), (arr_6 [i_0] [i_1] [i_2] [i_2]))))))));
                    var_13 = ((/* implicit */unsigned short) arr_3 [i_1] [i_2]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_12 [i_3] = ((/* implicit */_Bool) var_3);
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (_Bool)1))));
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)164)) ? ((-9223372036854775807LL - 1LL)) : ((-9223372036854775807LL - 1LL))));
                    }
                    for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        arr_15 [i_4] [i_2] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned char) (signed char)120)), ((unsigned char)0)));
                        var_16 = ((/* implicit */int) var_3);
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) max((((((/* implicit */int) ((unsigned char) var_6))) ^ (((/* implicit */int) var_8)))), (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) -1682667606))))))));
    var_18 = ((/* implicit */unsigned char) -2147483634);
}
