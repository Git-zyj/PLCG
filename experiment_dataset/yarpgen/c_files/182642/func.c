/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182642
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_11 &= ((/* implicit */unsigned short) ((signed char) ((short) arr_9 [(unsigned short)4])));
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_2 [i_0 + 2] [i_0]))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (short)-20209)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-20209))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) (unsigned short)2040)))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */_Bool) ((int) ((int) (unsigned short)39789)));
                var_14 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((unsigned short) (signed char)15))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_4)))));
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((int) arr_10 [i_0 - 3] [i_0] [i_0] [i_0 + 2] [i_0 - 1])) : (((/* implicit */int) ((short) arr_10 [i_0 - 3] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 3])))));
                var_16 &= ((/* implicit */unsigned short) ((short) ((_Bool) arr_10 [i_0] [i_0] [(short)20] [i_0 + 1] [i_0 - 3])));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        arr_13 [(short)13] [(short)13] = ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)39789)) : (arr_1 [(signed char)4])));
        var_17 = ((/* implicit */unsigned short) ((signed char) ((short) var_3)));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (signed char)55))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_4)) : (var_6))) : (((((/* implicit */_Bool) 1362039306)) ? (((/* implicit */int) arr_4 [(unsigned short)6] [(_Bool)1] [i_5])) : (((/* implicit */int) (signed char)127)))))))));
            arr_17 [i_5] [i_4] [i_4] &= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 4611686018427387903ULL)) ? (((/* implicit */unsigned long long int) var_8)) : (17203898248327636984ULL))));
            var_19 = ((/* implicit */signed char) ((_Bool) ((short) var_6)));
            var_20 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))));
        }
    }
}
