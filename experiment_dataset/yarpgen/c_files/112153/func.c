/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112153
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) arr_2 [i_0]);
                /* LoopSeq 4 */
                for (short i_2 = 4; i_2 < 9; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] [(short)3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1])) ? ((~((~(((/* implicit */int) (short)15075)))))) : (((((/* implicit */int) var_10)) & (((/* implicit */int) (short)-32763))))));
                    var_18 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (var_6)))))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4023)) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 + 3]))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8650))) | (2043113711U)))) ? (((((/* implicit */_Bool) (short)-4023)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (short)29834))))) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_6 [i_1 + 3] [i_1 + 2] [i_1 + 2] [i_1 + 1])))) ? (min((((arr_6 [i_0] [i_1] [1U] [i_1 - 1]) & (var_12))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)29834))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((min((arr_0 [i_1] [i_1]), ((short)13455))), (((short) var_8))))))));
                }
                for (short i_3 = 4; i_3 < 8; i_3 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */short) 2379664769U);
                    arr_11 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)8650)) ? (2096640U) : (3657858180U)));
                }
                for (short i_4 = 4; i_4 < 8; i_4 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */short) (-(min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-4009))))), (arr_3 [i_0] [3U] [i_4])))));
                    var_22 = ((/* implicit */short) (-((~(min((1535468500U), (arr_3 [i_4] [i_1] [i_0])))))));
                }
                for (short i_5 = 4; i_5 < 8; i_5 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3803880679U)) ? (((/* implicit */int) (short)9602)) : (((/* implicit */int) (short)9482)))))))));
                    var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) arr_0 [i_5] [i_5])))));
                }
                var_25 += (short)3999;
                var_26 -= (short)32767;
            }
        } 
    } 
    var_27 = ((/* implicit */short) min((((((/* implicit */_Bool) 1836091502U)) ? (((/* implicit */int) (short)-9619)) : (((/* implicit */int) (short)-29848)))), (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_15))))), ((short)-32747))))));
    var_28 = var_16;
}
