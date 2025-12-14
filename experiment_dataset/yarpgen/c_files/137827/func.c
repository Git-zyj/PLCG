/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137827
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (536870656U)))));
    var_13 |= ((/* implicit */unsigned short) var_10);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) > (var_10))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(((/* implicit */int) (short)-12293)))) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 4; i_1 < 20; i_1 += 4) /* same iter space */
        {
            var_15 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5988))) : (var_2)))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (short)-8538)))))));
                        arr_12 [i_1] &= ((/* implicit */_Bool) var_8);
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_6))));
                    }
                } 
            } 
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32211)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_1 - 4] [i_1 + 2]))))) ? (((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1 - 2])) + (((/* implicit */int) arr_9 [i_0] [i_1 - 3] [i_1 - 3] [i_1 - 2])))) : (((var_9) / (((/* implicit */int) var_6)))))))));
        }
        for (unsigned short i_4 = 4; i_4 < 20; i_4 += 4) /* same iter space */
        {
            arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0])), ((+(65520LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4 - 2])) ? (((/* implicit */int) arr_5 [i_4 - 1])) : (((/* implicit */int) arr_5 [i_4 - 3])))))));
            var_19 -= ((/* implicit */unsigned short) var_6);
            arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - ((((_Bool)1) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)165)) ? (18) : (((/* implicit */int) (unsigned short)8077))))) ? (((/* implicit */int) max((var_4), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775796LL)) && ((_Bool)1)))))))));
        }
        for (unsigned short i_5 = 4; i_5 < 20; i_5 += 4) /* same iter space */
        {
            arr_21 [i_0] [i_0] = ((/* implicit */short) min((min((((/* implicit */long long int) arr_11 [i_0] [i_5] [i_5] [i_5 - 3])), (arr_10 [i_0]))), (max((arr_10 [i_0]), (arr_10 [i_0])))));
            var_20 &= ((/* implicit */int) arr_19 [i_5 - 4]);
            arr_22 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5985)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)35))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0])) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_5 - 3] [i_5 - 4] [i_5] [i_5 + 1] [i_5 - 1])) ? (((/* implicit */int) arr_8 [i_0] [i_5 - 3] [i_5] [i_5 - 4] [i_5 - 4] [i_5 - 4])) : (((/* implicit */int) arr_8 [i_0] [i_5 - 3] [i_0] [i_5 - 3] [i_5] [i_5 + 1])))) : (((/* implicit */int) (!(((((/* implicit */_Bool) arr_11 [i_5] [i_0] [i_5] [i_0])) && (((/* implicit */_Bool) (short)7978)))))))));
        }
        for (unsigned short i_6 = 4; i_6 < 20; i_6 += 4) /* same iter space */
        {
            var_22 |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_8 [i_6] [i_6 - 4] [i_6 - 4] [i_6] [i_6] [i_6])) ? (-3945347285997739315LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6] [i_6 - 4] [i_0] [i_6] [i_6] [i_0]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_6] [i_6 - 4])))))));
            var_23 -= arr_5 [i_0];
            arr_27 [i_6] [i_0] [i_6] |= var_7;
        }
    }
}
