/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160182
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
    var_14 |= var_12;
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_6), (((/* implicit */short) var_13))));
        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [12ULL]))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))))), ((+(16198947135308467223ULL))))))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((long long int) ((unsigned int) (~(((/* implicit */int) arr_4 [i_1])))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) var_13);
                    arr_11 [i_3 - 1] [i_2] [i_1] = ((/* implicit */unsigned short) var_4);
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_3 [i_1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12)))))))) ? ((+(((((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_1])) ^ (var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        var_20 = ((/* implicit */int) arr_7 [i_4] [13U]);
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_4] [i_4])) : (((/* implicit */int) var_8))))))))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            for (signed char i_6 = 1; i_6 < 10; i_6 += 3) 
            {
                for (short i_7 = 3; i_7 < 9; i_7 += 4) 
                {
                    {
                        arr_21 [8U] [i_4] [i_5] [i_5] [i_7] [i_5] = ((/* implicit */_Bool) (+(arr_8 [i_6] [i_7 + 1] [i_6])));
                        var_22 = ((/* implicit */unsigned short) (~(arr_20 [i_7 - 3] [i_7 + 1] [i_7 + 2] [i_7 + 2] [0ULL])));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */_Bool) (+(16198947135308467217ULL)));
    }
}
