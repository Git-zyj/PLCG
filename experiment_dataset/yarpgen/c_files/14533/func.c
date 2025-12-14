/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14533
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((arr_1 [i_0] [i_0 - 1]) - ((+(arr_1 [i_0] [i_0]))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) 15586789218637092641ULL))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 + 3]))));
        arr_3 [i_0] = ((/* implicit */signed char) ((arr_0 [i_0 + 1]) & (arr_0 [i_0 + 2])));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))));
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        var_21 += ((/* implicit */unsigned int) ((_Bool) 3233505989260528215LL));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_1] [4LL])) ^ ((-2147483647 - 1)))) ^ (((/* implicit */int) var_14)))))));
    }
    for (long long int i_2 = 2; i_2 < 13; i_2 += 3) 
    {
        var_23 = ((/* implicit */_Bool) var_10);
        var_24 = ((/* implicit */_Bool) arr_9 [i_2] [i_2]);
        var_25 = ((/* implicit */unsigned long long int) ((short) var_9));
    }
    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (var_16) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)17)))) & (((/* implicit */int) (signed char)17)))))))));
    /* LoopNest 3 */
    for (long long int i_3 = 2; i_3 < 8; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                {
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_5] [i_5]))));
                    var_28 = ((/* implicit */long long int) ((max((((/* implicit */int) arr_7 [i_4])), (((((/* implicit */_Bool) (unsigned short)21155)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_3] [i_5] [i_3])))))) < (((/* implicit */int) arr_9 [i_3 + 1] [i_3 + 3]))));
                }
            } 
        } 
    } 
}
