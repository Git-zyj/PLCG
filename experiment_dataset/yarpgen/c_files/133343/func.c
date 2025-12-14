/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133343
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) 2019794009U))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_6 [0U] |= ((/* implicit */unsigned short) (~(((arr_0 [i_2 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [4U]))) : (((((/* implicit */_Bool) 2019794004U)) ? (2275173291U) : (2275173303U)))))));
                    var_14 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) min(((~(var_1))), (((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))), ((~(2275173273U)))));
                }
            } 
        } 
        var_15 ^= 5427100908679504003LL;
        arr_7 [(unsigned char)3] = ((/* implicit */signed char) ((((((long long int) var_8)) >= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [(unsigned char)0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))) : (((((((/* implicit */int) arr_5 [i_0] [i_0])) <= (((/* implicit */int) arr_4 [i_0] [(short)8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3850489793U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)1]))))))) : ((-(var_0)))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] |= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((/* implicit */int) arr_3 [i_3] [i_3])) : (((/* implicit */int) var_6)))), (((/* implicit */int) (!((!(arr_1 [i_3]))))))));
        arr_12 [i_3] |= ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_4)))), (((/* implicit */int) ((_Bool) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2019793995U)))))));
    }
    var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) -290500875920866349LL)) ? (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (var_3)))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 2; i_4 < 22; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4 + 2] [i_4])))))));
                arr_20 [(short)22] [(short)22] [i_4] = ((/* implicit */unsigned short) var_2);
                var_18 = ((/* implicit */long long int) max((var_18), (min(((-(arr_17 [i_4] [i_4 + 2]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_4] [i_5] [3LL]))))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((2763573497767364814LL), (var_12)))))) % (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (var_5)))));
}
