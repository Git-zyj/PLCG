/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131524
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
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) max(((~((+(((/* implicit */int) var_14)))))), (((/* implicit */int) var_18))));
                        var_21 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-19881))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            arr_14 [i_0 + 1] [i_0 - 1] [i_1] [i_1] [i_2] [i_3] [i_0 - 1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2687989707U)) ? (2687989707U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */int) var_17)) : ((((~(((/* implicit */int) arr_7 [i_0] [i_2] [i_3] [8])))) + (((int) arr_8 [i_3]))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */int) (short)-20644)) - ((-(((/* implicit */int) var_18))))));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) min((min((var_6), (((/* implicit */int) (short)19880)))), (((/* implicit */int) (short)19885))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-20653))) >= (var_4))))))) : (max((((/* implicit */unsigned int) ((short) (short)32767))), (((((/* implicit */_Bool) (short)-18664)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54448))) : (var_10))))))))));
                        }
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_5] &= ((((/* implicit */int) (short)19881)) & (((/* implicit */int) (short)11483)));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((676326219) / (((/* implicit */int) arr_16 [(_Bool)1] [(_Bool)1] [i_1] [i_1] [i_2] [i_1] [7LL]))))), (max((((/* implicit */long long int) arr_1 [2LL] [(short)4])), (9113867213293659311LL)))))) ? (((/* implicit */long long int) max((var_13), (((/* implicit */int) arr_15 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]))))) : (((long long int) ((unsigned short) arr_11 [i_0] [i_0] [(unsigned short)9] [7LL] [i_3] [i_0])))));
                            var_24 = ((/* implicit */long long int) ((int) (-(var_10))));
                            arr_19 [i_0 - 2] [i_0 - 2] [(unsigned short)1] = ((/* implicit */short) var_1);
                        }
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) % (-4850823528182619388LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19887))) : ((~(17857315878224874899ULL))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((short)-13426), (((/* implicit */short) (_Bool)0))))))))));
    }
    for (long long int i_6 = 2; i_6 < 9; i_6 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) (unsigned short)4551)) << (((arr_2 [i_6 + 1]) - (1714700436))))));
        arr_22 [(short)8] [i_6] = ((/* implicit */_Bool) (short)19873);
        var_27 = 2147483623;
    }
}
