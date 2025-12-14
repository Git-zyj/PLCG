/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120380
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) 2093183577U);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2370513552511590460LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3630))) : ((~(min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2] [i_2])), (arr_10 [i_0] [i_0] [5ULL] [i_0] [i_0])))))));
                            var_15 -= min((((/* implicit */long long int) (((-(arr_0 [i_1] [i_1]))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), ((-(var_2))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) arr_3 [(signed char)16] [(signed char)16] [(signed char)2]);
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) (~((-(((/* implicit */int) arr_15 [i_0]))))));
                            arr_17 [i_0] [2] [i_4] [(short)1] [i_0] = max((((/* implicit */unsigned long long int) (-(((long long int) arr_2 [i_0] [i_0]))))), (var_10));
                            arr_18 [i_0] [i_1] [(short)13] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (min((((((/* implicit */int) (short)16384)) % (((/* implicit */int) (short)-3630)))), (1262888884))) : (((/* implicit */int) (short)-3623))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_11)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))) ? (var_4) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) <= (((/* implicit */int) (short)28519)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)3629)))))));
    var_19 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_6] [i_6])) ? (((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6] [(short)12] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6] [(unsigned short)12]))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
        var_21 ^= ((/* implicit */unsigned int) ((long long int) arr_9 [i_6] [7] [i_6] [(signed char)1] [i_6]));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned long long int) arr_0 [i_6] [i_6]))));
    }
    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) (short)3604)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)44314)) >= (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (short)3629)) : (((/* implicit */int) var_9)))))))));
        var_24 = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */short) var_6)), ((short)3629))));
        var_25 &= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((unsigned int) arr_0 [i_7] [i_7]))) : (min((((/* implicit */long long int) arr_0 [i_7] [i_7])), (1533875943081406661LL))));
        /* LoopSeq 1 */
        for (int i_8 = 1; i_8 < 14; i_8 += 4) 
        {
            var_26 = ((/* implicit */long long int) (~((-(arr_10 [i_7] [i_8] [i_8 + 1] [i_8] [(unsigned short)17])))));
            var_27 ^= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) -1563054040)) ? (((/* implicit */int) arr_19 [i_8 + 1] [i_8 + 1])) : (((/* implicit */int) arr_19 [i_8 + 1] [i_8])))));
            var_28 ^= ((/* implicit */unsigned long long int) var_0);
        }
    }
    for (int i_9 = 0; i_9 < 19; i_9 += 1) 
    {
        var_29 = ((/* implicit */unsigned int) (unsigned char)1);
        var_30 = ((/* implicit */long long int) arr_28 [i_9] [i_9]);
        arr_29 [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_9] [i_9])) ? (min((((/* implicit */unsigned long long int) arr_28 [(signed char)2] [i_9])), (var_10))) : (((/* implicit */unsigned long long int) (~(arr_28 [i_9] [i_9]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((min((arr_27 [i_9] [i_9]), (arr_27 [i_9] [i_9]))), (((/* implicit */unsigned short) var_9)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-3630)) * (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9] [i_9]))) : (min((2980934559U), (((/* implicit */unsigned int) arr_27 [i_9] [i_9])))))));
    }
}
