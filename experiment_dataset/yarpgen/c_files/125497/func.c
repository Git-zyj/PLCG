/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125497
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_11), (((((/* implicit */_Bool) 2048319352U)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_14))))) : (((/* implicit */int) var_13))));
    var_20 = ((/* implicit */long long int) var_4);
    var_21 -= ((/* implicit */unsigned int) ((var_5) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (short)1024)))));
    var_22 = ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10016))) : (var_10)));
            var_24 = ((/* implicit */unsigned int) ((arr_0 [i_0 - 1]) ^ (((/* implicit */long long int) 2048319352U))));
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1526619222125604217LL)) ? (((/* implicit */long long int) 2048319352U)) : (8189957681201431136LL)));
            var_25 = ((/* implicit */long long int) (_Bool)1);
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3 + 2] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    var_26 = ((/* implicit */unsigned int) (-((~(var_14)))));
                    var_27 = ((-3343505115698263770LL) & (((7537764293688110055LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))));
                }
                for (long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
                    var_29 |= ((/* implicit */unsigned int) ((long long int) ((var_5) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [4LL] [i_0]))))));
                }
                var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
            }
            for (short i_5 = 1; i_5 < 19; i_5 += 2) 
            {
                var_31 = ((long long int) ((_Bool) (_Bool)1));
                var_32 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? ((~(1073741823U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_15)))))));
                var_33 |= (-(((-2104867845872685458LL) / (((/* implicit */long long int) 1073741823U)))));
            }
        }
        var_34 = ((/* implicit */short) 4294967295U);
        var_35 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0 - 1]))));
        var_36 = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (long long int i_6 = 3; i_6 < 10; i_6 += 3) 
    {
        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_6] [i_6 - 1] [i_6] [i_6 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_2)));
        var_38 = (~(arr_10 [i_6] [i_6 + 4] [i_6 - 1] [i_6 + 4]));
        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) (~(((/* implicit */int) (!(var_5)))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_40 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1633097213652880300LL)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)27770)))));
        arr_23 [i_7] = max((((long long int) 1073741823U)), ((+(((((/* implicit */long long int) 13U)) + (63LL))))));
        var_41 = ((((/* implicit */_Bool) max((((long long int) var_14)), (((/* implicit */long long int) ((((/* implicit */long long int) 1266365599U)) >= (var_17))))))) ? (((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)13959))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-4605)), (1972648376U)))));
    }
}
