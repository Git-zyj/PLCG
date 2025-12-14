/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176344
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967273U)) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_0]))) << (((var_5) + (1302405892)))))) ? ((~(min((arr_0 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_0 [i_0]))))))));
        var_13 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_2 [i_0])))) | (((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)58608))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) (short)21234))))));
        var_14 = ((/* implicit */short) arr_7 [14U] [14U]);
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    arr_15 [i_3] [i_1] [i_2] [i_1] = var_5;
                    arr_16 [i_3] [i_2] [i_3] = arr_9 [i_1] [i_2] [i_3];
                    arr_17 [i_3] = var_7;
                }
            } 
        } 
        arr_18 [3U] = ((min((((var_3) % (((/* implicit */unsigned int) (-2147483647 - 1))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))))))) + (arr_13 [i_1] [(_Bool)1]));
    }
    /* vectorizable */
    for (signed char i_4 = 2; i_4 < 15; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            var_15 = ((/* implicit */short) (((~(((/* implicit */int) var_12)))) << (((((/* implicit */int) (short)-32758)) + (32767)))));
            var_16 = ((/* implicit */int) arr_23 [i_4 + 1] [i_5]);
            arr_24 [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)125)) || (((/* implicit */_Bool) arr_12 [i_4] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [i_4]))) : (((long long int) 0U))));
        }
        var_17 = ((/* implicit */int) arr_6 [i_4 - 1]);
        arr_25 [i_4] = ((/* implicit */signed char) var_11);
    }
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)32765)))))))) <= ((-(((/* implicit */int) (_Bool)1))))));
    var_19 = var_12;
    var_20 = ((/* implicit */signed char) var_7);
}
