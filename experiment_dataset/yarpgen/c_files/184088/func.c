/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184088
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_17 += min((((((/* implicit */_Bool) arr_1 [2])) ? (arr_1 [(_Bool)1]) : (arr_1 [(_Bool)1]))), (min((((int) var_3)), (((((/* implicit */_Bool) arr_1 [10])) ? (((/* implicit */int) var_11)) : (arr_1 [(_Bool)1]))))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((int) arr_2 [i_1 - 1])))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 = (_Bool)1;
        arr_6 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2147483627)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : ((-2147483647 - 1))))) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_4 [i_2] [i_2])));
        var_20 -= ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) arr_5 [(_Bool)1]))), (((int) (+(((/* implicit */int) arr_4 [i_2] [15])))))));
        arr_7 [i_2] [i_2] = (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((int) ((((int) (_Bool)1)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
        arr_11 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_10 [i_3])))) ? (((/* implicit */int) ((_Bool) arr_8 [11] [i_3]))) : (((((/* implicit */_Bool) arr_10 [0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))));
        var_22 = ((/* implicit */_Bool) (-((+(((/* implicit */int) ((_Bool) var_4)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_5 [i_4]) & (((/* implicit */int) ((_Bool) arr_14 [i_4] [i_4]))))))));
        arr_15 [i_4] [i_4] = var_4;
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_24 = ((((((/* implicit */int) (_Bool)1)) != (arr_12 [i_4] [i_5]))) && (((/* implicit */_Bool) ((int) arr_12 [i_4] [i_5]))));
            arr_19 [i_4] [i_5] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_17 [i_4]))))) : (((((/* implicit */_Bool) ((arr_17 [i_4]) - (((/* implicit */int) (_Bool)1))))) ? (-709845443) : (((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (var_15)))))));
            /* LoopSeq 1 */
            for (int i_6 = 1; i_6 < 15; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 15; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        {
                            var_25 = ((min((((/* implicit */int) ((1529461471) < (1180971137)))), (((int) var_10)))) >= (((((/* implicit */_Bool) ((var_3) ? (var_15) : (arr_17 [i_4])))) ? (var_6) : (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) arr_26 [i_4] [i_5] [i_6 - 1] [i_7] [i_4]))))))));
                            arr_28 [i_4] [i_5] [i_4] = ((/* implicit */int) ((_Bool) ((int) arr_24 [i_4] [i_8] [i_4] [i_8] [i_8 + 1] [i_8])));
                            var_26 = ((((/* implicit */_Bool) ((arr_4 [i_6 - 1] [i_6 - 1]) ? (((/* implicit */int) arr_4 [i_6 - 1] [i_6])) : (((/* implicit */int) arr_4 [i_6 - 1] [i_8 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4]))))) : (((((((/* implicit */_Bool) arr_23 [i_4])) ? (arr_12 [i_4] [(_Bool)1]) : (((/* implicit */int) var_7)))) << (((/* implicit */int) var_7)))));
                        }
                    } 
                } 
                arr_29 [i_4] [i_4] = ((_Bool) max((((/* implicit */int) min((var_8), (arr_4 [(_Bool)1] [i_6])))), ((+(((/* implicit */int) var_14))))));
                var_27 -= ((((arr_22 [i_6 + 2] [14] [i_6 - 1] [8] [i_6]) ? (((var_5) ? (((/* implicit */int) arr_20 [(_Bool)1] [i_5] [i_5] [i_6 - 1])) : (((/* implicit */int) var_2)))) : (var_1))) > (((/* implicit */int) ((_Bool) -481775324))));
                arr_30 [i_4] [i_4] [i_5] [i_5] = ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_25 [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6 - 1])) : (arr_21 [i_6 - 1] [i_6 + 1] [i_6] [i_4])))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_16 [(_Bool)1])) ? (((/* implicit */int) arr_22 [i_4] [i_5] [i_5] [i_4] [i_6])) : (arr_18 [i_4] [i_5] [i_6]))))) : (min((((arr_26 [i_4] [10] [i_5] [i_5] [i_4]) ? (((/* implicit */int) var_8)) : (var_1))), (((arr_26 [4] [i_4] [i_4] [i_5] [i_4]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))))));
            }
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_33 [14] [i_4] = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) arr_25 [i_4] [i_4] [i_4] [i_9] [i_4]))), (arr_23 [i_4])));
            var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((1421783113), ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) min((arr_14 [i_4] [i_9]), ((_Bool)0)))) : (max((((/* implicit */int) (_Bool)1)), (-1197278024)))));
        }
    }
    var_29 = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) 1757121696)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) & (min(((-2147483647 - 1)), (481775318))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 481775317)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (-1084207759) : (-577309700)))));
}
