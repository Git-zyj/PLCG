/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115678
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
    var_10 *= ((/* implicit */_Bool) (unsigned char)64);
    var_11 ^= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) -7612987014420369394LL)) && ((_Bool)1)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) != (((/* implicit */int) arr_4 [i_0])))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        arr_14 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) (((~(-7612987014420369404LL))) * (((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) (_Bool)1)))))));
                        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_8)) - (53903))))) + (((/* implicit */int) arr_13 [i_0] [i_0]))));
                        arr_16 [i_0] [i_2] [i_1] [(unsigned char)18] [i_0] = var_1;
                    }
                } 
            } 
            var_13 = ((/* implicit */unsigned char) (_Bool)1);
        }
        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (-(min((((/* implicit */long long int) var_3)), (((arr_19 [i_0] [i_4] [i_4]) ^ (70368744177664LL))))))))));
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (unsigned char)195))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_1))));
                            var_17 = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_10 [i_8] [i_0] [i_6] [i_0] [i_0])))) | (((/* implicit */int) var_3))));
                            arr_35 [i_7] [i_7] [i_0] [i_7] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_6] [i_5] [16ULL])))))));
                        }
                    } 
                } 
            } 
            arr_36 [14LL] [i_0] [14LL] = (+(arr_20 [i_0] [i_0 - 1] [i_0]));
            var_18 = ((/* implicit */_Bool) var_8);
            arr_37 [i_0] [i_5] [i_0] = ((/* implicit */long long int) arr_31 [i_0] [(_Bool)0] [i_5] [i_5] [i_5] [i_0]);
            var_19 *= ((/* implicit */unsigned char) (unsigned short)39584);
        }
    }
}
