/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120241
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((var_13) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (min((var_7), (((/* implicit */unsigned long long int) var_13)))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_4 [i_2]), (176250081)))) ? (arr_5 [0ULL] [i_1] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_15))));
                        var_22 = ((/* implicit */long long int) (~(((var_7) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_19)))))))));
                        var_23 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 3])) * (((/* implicit */int) var_0)))), ((-(arr_0 [i_0 - 2])))));
                        arr_10 [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) var_2);
                        arr_11 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)1056))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 3])) ? (arr_1 [i_0 - 1]) : (((/* implicit */long long int) 3149042255U))));
                        arr_15 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2]))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 1; i_5 < 17; i_5 += 4) 
    {
        for (int i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            for (unsigned char i_7 = 1; i_7 < 17; i_7 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) min((var_7), (((/* implicit */unsigned long long int) ((short) arr_17 [i_7 + 1])))));
                    arr_24 [i_5] = ((((((/* implicit */int) arr_22 [i_6 - 1] [i_6 - 1])) - (((/* implicit */int) ((unsigned short) (_Bool)1))))) != (((var_14) | (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (var_19)))))));
                    arr_25 [i_5] [i_6 - 1] = ((/* implicit */int) arr_23 [i_5] [i_5] [i_6] [i_6]);
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_11)))) != (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1250734605))))) < (((/* implicit */int) var_6)))))));
}
