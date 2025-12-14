/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116975
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */long long int) var_16)) : ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)90)))) : ((-(((/* implicit */int) var_2))))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) ((unsigned char) max((9221120237041090560ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 - 2])))));
                        var_19 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) < (min((((/* implicit */unsigned long long int) var_11)), (var_13))))))) % (((arr_2 [i_1] [i_1]) | (((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_1] [8ULL])), (var_6))))))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */int) 18386689122760783809ULL);
}
