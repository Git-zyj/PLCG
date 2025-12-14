/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109216
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)21)) != (((/* implicit */int) (unsigned short)12))));
    var_12 = ((/* implicit */unsigned char) var_1);
    var_13 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) (signed char)69))))) >> (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [9LL] [i_1] = ((/* implicit */_Bool) ((((arr_2 [(_Bool)1] [i_1 - 3] [i_0 + 1]) << (((arr_2 [i_0] [i_1 - 1] [i_0 - 2]) - (684679803))))) << (((((/* implicit */int) ((unsigned short) arr_2 [i_1] [i_1 + 2] [i_0 - 1]))) - (25210)))));
                var_14 = ((/* implicit */int) ((var_8) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1])) ^ (((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned char)89)))))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [(unsigned short)10] [i_1 - 3])))) & ((~(((/* implicit */int) var_10))))))) ? ((~(15ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 2] [i_1 + 2])) ^ (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 1] [i_1 - 3])))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) max(((unsigned char)64), ((unsigned char)159)));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 4; i_3 < 13; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((_Bool) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)-100)))) ? (((/* implicit */int) (unsigned short)20858)) : (((((/* implicit */_Bool) 17422106878067224135ULL)) ? (((/* implicit */int) (short)-3695)) : (1652413644))))));
                                var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_3 - 1] [i_1 - 3]))));
                                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_9 [i_0] [i_0] [i_2] [(unsigned short)11] [i_4])))) ? (((/* implicit */int) arr_7 [i_4] [i_1])) : (((/* implicit */int) max((arr_0 [i_1] [i_4]), (var_6))))))) ? (((unsigned long long int) ((unsigned long long int) var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-4367122827898245973LL))) - (((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_5))))))));
}
