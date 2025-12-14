/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11804
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65472))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) min((var_7), (425619362U)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) 16937264303924034776ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            arr_5 [i_1] [i_1 - 3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1 - 3]))));
            arr_6 [i_1] [i_1] = ((/* implicit */int) var_0);
            arr_7 [i_0] [i_1] = ((signed char) (!(((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned long long int) var_4)))))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)58))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_5)), (var_0))))) : (max((((/* implicit */unsigned long long int) (_Bool)0)), (var_1)))))) ? (var_17) : (var_1)));
            arr_8 [i_0] [i_1] [i_0] = min((((((/* implicit */_Bool) min((arr_3 [i_1] [i_1 - 2] [i_0]), (arr_3 [i_0] [i_1] [i_1 - 3])))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) var_0)) % (((/* implicit */int) (signed char)74)))))), (((((/* implicit */_Bool) max((var_0), (((/* implicit */short) (signed char)-112))))) ? (arr_4 [i_1 - 3] [i_0 + 2]) : (((int) (signed char)0)))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_22 = ((/* implicit */signed char) arr_2 [i_0 - 1] [i_2]);
            arr_12 [i_0] [i_2] = ((/* implicit */int) var_15);
            var_23 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_0]))));
            arr_13 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (arr_10 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) var_19))));
        }
        arr_14 [i_0 - 1] [i_0 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)58))))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((~(var_16)))))) ? (((/* implicit */int) var_12)) : (min((arr_0 [i_0] [i_0 + 1]), (((/* implicit */int) (unsigned short)45787)))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 3; i_3 < 15; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
                        var_25 += ((/* implicit */unsigned int) (+((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (var_11)))))));
                    }
                } 
            } 
        } 
    }
}
