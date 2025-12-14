/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132160
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
    var_13 = ((((/* implicit */_Bool) (((~(var_6))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19968)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_10))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) >> (((var_8) + (55549342)))))) ? (((/* implicit */int) (short)19983)) : (((/* implicit */int) var_0))))) : (var_6));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61923)) - (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)177)) % (((/* implicit */int) arr_0 [i_0])))))));
        var_14 = ((/* implicit */_Bool) var_5);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_7);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_4 - 2] = ((/* implicit */signed char) var_3);
                                arr_18 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */short) arr_14 [i_0] [(unsigned short)0] [i_2] [i_3] [i_4] [i_1] [i_3]);
                                arr_19 [i_1] [i_4] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3612))) : (var_6))) ^ (((/* implicit */unsigned long long int) var_9))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) var_5)) : ((~(-428661953)))));
    var_16 = ((/* implicit */unsigned long long int) var_11);
}
