/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148268
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
    var_11 = ((_Bool) (((~(((/* implicit */int) var_10)))) == (((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_12 ^= ((/* implicit */unsigned int) max((var_10), (arr_9 [i_0] [i_2] [i_0] [8U])));
                    var_13 = ((var_0) ? (((((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) % (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                    var_14 += ((/* implicit */unsigned int) ((arr_1 [i_0]) != ((~(((var_7) ? (var_8) : (arr_6 [i_0])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_12 [i_2] [6U] [i_2] [(_Bool)1] [i_2] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_1] [i_1 - 1] [i_1 + 2] [i_1 + 1]))))) ? ((+(max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)1)))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) var_5)))))));
                        var_15 = ((unsigned int) (_Bool)1);
                        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((arr_9 [6U] [i_1 - 2] [i_1] [i_1 + 1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) * ((~(min((var_8), (((/* implicit */unsigned int) var_2))))))));
                        arr_13 [i_3] [i_3] [(_Bool)1] [i_3] = ((/* implicit */unsigned int) ((_Bool) var_7));
                    }
                    arr_14 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4294967295U)) ? (min((var_8), (((/* implicit */unsigned int) var_9)))) : (((unsigned int) 1356162716U))))));
                }
                for (unsigned int i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    arr_17 [i_1] [i_1 - 1] [(_Bool)0] &= ((((min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (1102342099U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))))) ? (((max((arr_0 [i_0] [i_4]), (var_3))) ? (((var_9) ? (3373287934U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4]))))) : (((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_7 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [(_Bool)1]))));
                    var_17 = max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [11U])) : (((/* implicit */int) (_Bool)1))))), (max((var_1), (0U))))), (((/* implicit */unsigned int) var_6)));
                    var_18 ^= ((/* implicit */unsigned int) var_6);
                    arr_18 [i_0] [i_4] [i_0] [i_4 - 2] = 1172945523U;
                }
                arr_19 [i_0] = ((3733570201U) / (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))));
                var_19 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [9U])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_1 + 2] [i_1 + 2]))))) ? (max((((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_1])), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0] [i_0]), (var_7))))))))));
                arr_20 [i_0] = max((((/* implicit */unsigned int) ((_Bool) (-(((/* implicit */int) var_6)))))), (((((((/* implicit */_Bool) var_5)) ? (var_5) : (arr_10 [i_1 + 1] [i_1] [i_0] [i_0]))) ^ (min((arr_4 [i_0] [i_1 - 1]), (((/* implicit */unsigned int) arr_0 [i_1] [i_0])))))));
            }
        } 
    } 
}
