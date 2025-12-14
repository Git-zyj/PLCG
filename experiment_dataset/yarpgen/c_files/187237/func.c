/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187237
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(unsigned short)14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (max((((/* implicit */long long int) var_13)), (arr_2 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_20 = 0LL;
                    var_21 = max((((/* implicit */long long int) min((arr_6 [i_0] [i_0 - 1]), (arr_6 [i_0] [i_0 - 1])))), (min((var_16), (((/* implicit */long long int) arr_6 [i_0] [i_0 + 2])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        arr_11 [13LL] [i_0] [i_2] [13LL] [i_0] [13LL] = ((/* implicit */int) ((long long int) var_18));
                        var_22 -= arr_7 [i_2] [i_2] [i_2];
                    }
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
    {
        arr_14 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) (unsigned short)65535))))) ? (((arr_5 [i_4] [i_4] [i_4]) - (((/* implicit */unsigned int) var_19)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (2321655708U) : (((/* implicit */unsigned int) 42130292))))));
        var_23 = ((/* implicit */unsigned short) (_Bool)1);
        var_24 = ((/* implicit */int) (short)-28950);
    }
    for (short i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) ((2816192196U) / (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) (unsigned short)65535)) : (657373226))) ^ (((/* implicit */int) ((arr_17 [i_5] [i_5]) <= (arr_0 [i_5])))))))));
        arr_18 [i_5] = ((/* implicit */int) ((short) ((((/* implicit */int) (short)28950)) + (((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))))));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */short) arr_16 [(_Bool)1]);
        var_27 = ((/* implicit */short) (-(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-1)) + (14)))))));
        arr_21 [i_6] [i_6] = arr_10 [4U];
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (_Bool)1))));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)22066))) % (arr_1 [6U])));
    }
    var_30 = ((/* implicit */unsigned int) ((long long int) var_1));
    var_31 *= ((/* implicit */unsigned int) var_0);
}
