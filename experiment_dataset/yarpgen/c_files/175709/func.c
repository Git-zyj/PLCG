/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175709
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
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (unsigned char)218))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [(_Bool)1] [(unsigned char)8] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (min((((/* implicit */unsigned long long int) arr_7 [i_0] [(unsigned char)9] [i_2] [i_2])), (var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)185)), (var_13)))) == (((((/* implicit */int) var_9)) & (((/* implicit */int) var_6)))))))));
                    var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_17 = (((!(arr_7 [i_2 + 1] [i_2 - 2] [6ULL] [(_Bool)0]))) && (min((var_11), ((_Bool)1))));
                }
            } 
        } 
        arr_11 [i_0] = arr_0 [i_0];
        var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0]))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    arr_18 [i_4] [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) arr_9 [i_3] [i_4] [i_4] [i_4])))));
                    arr_19 [i_4] [i_4] [i_5] [i_3] = ((/* implicit */_Bool) var_8);
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_16 [i_3] [i_3] [0ULL])), ((~(((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
        arr_20 [i_3] [i_3] = ((/* implicit */unsigned long long int) var_11);
        arr_21 [i_3] = ((/* implicit */unsigned char) (_Bool)1);
    }
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_10) & (var_7)))) ? (((((/* implicit */_Bool) 0ULL)) ? (var_10) : (var_2))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))))), (var_2))))));
}
