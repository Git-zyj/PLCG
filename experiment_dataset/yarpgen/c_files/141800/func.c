/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141800
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
    var_20 = ((/* implicit */short) (~((((+(769985872U))) >> (min((769985872U), (((/* implicit */unsigned int) var_1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_22 -= ((/* implicit */short) ((_Bool) arr_0 [i_0 + 2] [i_0 - 1]));
        arr_2 [i_0] [(short)17] = ((/* implicit */int) ((((/* implicit */_Bool) (short)12049)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)3] [(short)3]))) + (769985857U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_14)))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (int i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_23 ^= ((/* implicit */unsigned long long int) arr_1 [i_1] [i_1]);
                            arr_16 [i_2] [14U] [(_Bool)1] [13ULL] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) ((short) var_18)));
                            var_24 = ((/* implicit */unsigned int) (-(arr_1 [i_4] [19LL])));
                            arr_17 [i_1] [(short)10] [(short)20] [i_1] [i_2] = ((short) arr_14 [i_2 - 2] [i_3] [i_3] [i_3 - 2] [i_2] [i_2 - 2] [i_3 - 2]);
                            var_25 = ((/* implicit */long long int) arr_6 [i_0 + 2]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                for (long long int i_6 = 1; i_6 < 17; i_6 += 3) 
                {
                    {
                        arr_23 [i_6] [i_0] = ((/* implicit */short) arr_9 [i_5]);
                        var_26 = ((/* implicit */unsigned int) (~(var_7)));
                    }
                } 
            } 
        }
        arr_24 [i_0] = ((/* implicit */int) ((769985831U) == (769985872U)));
    }
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                {
                    arr_33 [(_Bool)1] = ((/* implicit */signed char) ((int) var_0));
                    arr_34 [i_7] = ((/* implicit */_Bool) ((int) max((var_5), (((/* implicit */unsigned char) ((_Bool) var_19))))));
                }
            } 
        } 
    } 
}
