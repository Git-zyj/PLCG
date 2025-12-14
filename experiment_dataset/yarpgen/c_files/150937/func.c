/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150937
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((3408533636U) & (886433659U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)49))))) : (((int) ((((/* implicit */_Bool) var_2)) ? (var_17) : (((/* implicit */int) var_13)))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((var_10), (((/* implicit */unsigned int) var_17)))), (((/* implicit */unsigned int) min((var_11), (var_12))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (var_5)))) ? (((/* implicit */unsigned int) min((var_15), (((/* implicit */int) var_13))))) : (min((((/* implicit */unsigned int) var_17)), (var_4))))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                var_20 = ((((/* implicit */unsigned int) ((((var_12) - (var_16))) >> (((max((((/* implicit */unsigned int) 1799298781)), (987391918U))) - (1799298778U)))))) - (max((((var_4) ^ (((/* implicit */unsigned int) var_16)))), (((/* implicit */unsigned int) (+(var_14)))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((var_17) - (((/* implicit */int) var_13)))) : (((int) var_3))))) : (((((/* implicit */_Bool) ((var_6) / (((/* implicit */unsigned int) var_8))))) ? (min((var_10), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) != (((/* implicit */int) var_9))))))))))));
            }
            var_22 ^= ((/* implicit */int) ((min((((/* implicit */unsigned int) ((var_16) != (((/* implicit */int) (unsigned char)147))))), (var_6))) - (((/* implicit */unsigned int) ((var_5) / (((int) var_3)))))));
            var_23 = var_16;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 20; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    {
                        arr_16 [i_0] [i_3] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) -1)) == (((((/* implicit */_Bool) -1373802022)) ? (3408533636U) : (3408533636U)))));
                        /* LoopSeq 4 */
                        for (int i_6 = 2; i_6 < 20; i_6 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned int) min((var_24), (var_10)));
                            var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_6)));
                        }
                        for (int i_7 = 2; i_7 < 20; i_7 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_7))));
                            var_27 -= ((/* implicit */unsigned char) var_6);
                            var_28 -= ((/* implicit */unsigned char) var_6);
                        }
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                        {
                            var_29 = ((int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) var_1)) : (var_4)));
                            var_30 = var_15;
                            arr_24 [i_0] [i_3] [i_4 - 1] [i_4 + 2] [i_5] [i_8] = ((int) var_12);
                        }
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                        {
                            var_31 = ((int) var_4);
                            var_32 = ((((((/* implicit */int) var_9)) != (((/* implicit */int) var_9)))) ? (((/* implicit */int) ((3307575377U) >= (((/* implicit */unsigned int) -538656673))))) : (((/* implicit */int) ((var_4) == (((/* implicit */unsigned int) var_8))))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((-(var_12))) != (((/* implicit */int) var_13))));
                        }
                        arr_28 [i_4] [i_4] = ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3)))) ? (var_8) : (((var_11) + (var_1))));
                        var_33 &= ((((((/* implicit */unsigned int) var_1)) | (var_3))) ^ (((/* implicit */unsigned int) ((var_7) | (var_11)))));
                    }
                } 
            } 
            arr_29 [i_0] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 987391922U)) || (((/* implicit */_Bool) 562667014))));
            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_16)))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) var_2)) : (var_4))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_10)))));
        }
        for (int i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
        {
            arr_32 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) || ((!(((/* implicit */_Bool) var_6)))))) ? (max((((/* implicit */unsigned int) max((-1), (-1715206535)))), (max((var_3), (((/* implicit */unsigned int) var_12)))))) : (((/* implicit */unsigned int) var_12))));
            var_35 = ((/* implicit */int) var_18);
            var_36 = ((/* implicit */unsigned int) var_12);
        }
        var_37 = ((/* implicit */unsigned int) var_15);
    }
}
