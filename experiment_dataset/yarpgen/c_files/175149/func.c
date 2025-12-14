/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175149
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
    var_14 += 134217727LL;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 = arr_2 [i_0];
        var_16 = ((/* implicit */unsigned char) var_0);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((int) arr_7 [(short)5])))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_13))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_2] [(_Bool)1]))) : (arr_3 [i_2 + 1] [i_2])));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned int) min((var_19), ((~(arr_12 [i_1] [i_1] [i_1] [i_1])))));
        arr_15 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (204254734697595368LL) : (8589934576LL)));
        var_20 = ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1])) ? (((/* implicit */int) (signed char)-1)) : ((~(arr_10 [i_1] [i_1]))));
        arr_16 [i_1] = ((/* implicit */unsigned char) (signed char)1);
    }
    var_21 = ((/* implicit */long long int) 349342281);
}
