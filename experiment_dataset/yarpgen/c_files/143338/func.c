/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143338
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) min((2046262578U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4624685083951846214LL)) || (((/* implicit */_Bool) var_7))))))))));
    var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10887871934812779222ULL)) || (((/* implicit */_Bool) 3363370810U))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3025281476U)) || (((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (signed char i_3 = 2; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_14 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0] [i_1] [i_3]))));
                        var_15 = ((/* implicit */long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (var_6)))));
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_3 - 2]))));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((((/* implicit */_Bool) 3025281469U)) || (((/* implicit */_Bool) min((4691936274489605707ULL), (((/* implicit */unsigned long long int) var_4)))))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        for (short i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            {
                arr_17 [i_4] [i_5] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((int) var_6))))) || (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 3025281456U))))));
                arr_18 [i_4] [i_5] [i_5] = ((/* implicit */signed char) arr_16 [i_4] [i_5] [i_4]);
                arr_19 [i_4] [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((2987678788U) + (((/* implicit */unsigned int) arr_13 [i_5]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_5] [i_5])) || (((/* implicit */_Bool) arr_14 [i_5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned char)128)))))))));
                /* LoopSeq 3 */
                for (unsigned int i_6 = 1; i_6 < 11; i_6 += 2) 
                {
                    var_18 = (-(3025281469U));
                    arr_24 [i_5] [(short)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)4))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15217)) ? (((/* implicit */int) (signed char)12)) : (-2147483626)))) ? (((((/* implicit */_Bool) (unsigned short)64418)) ? (((/* implicit */unsigned long long int) arr_13 [i_6])) : (var_2))) : (((/* implicit */unsigned long long int) ((int) 1157609818U))))) : (((/* implicit */unsigned long long int) -2031525799))));
                    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)136))));
                }
                for (unsigned short i_7 = 2; i_7 < 14; i_7 += 2) 
                {
                    arr_27 [i_4] [i_5] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-712048951), (((/* implicit */int) arr_25 [i_7 - 2] [i_7 + 1] [i_7 + 1]))))) ? (min((((/* implicit */unsigned int) arr_25 [i_7 - 2] [i_7 + 1] [i_7 + 1])), (3025281469U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_10))))));
                    var_20 = ((/* implicit */signed char) max((((long long int) -217116715)), (((/* implicit */long long int) min((arr_21 [i_5]), (((/* implicit */short) (signed char)112)))))));
                    var_21 = max((min((((/* implicit */unsigned int) var_3)), (arr_16 [i_7] [i_7 - 2] [i_7 - 2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1859752080)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) 2147483626)))))))));
                    arr_28 [i_4] [i_5] [i_5] [i_7 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) max((var_0), (2338408920U))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_20 [i_4] [i_4] [i_5] [i_7 - 1])), (min((1109670766U), (1269685826U)))))) : (min((((/* implicit */long long int) arr_12 [(unsigned short)4] [(unsigned short)4])), ((~(arr_22 [i_5])))))));
                }
                /* vectorizable */
                for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_4])) || (((/* implicit */_Bool) (short)-12294))));
                    arr_31 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) arr_14 [i_4]);
                    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) 15897988560469588374ULL))));
                }
            }
        } 
    } 
}
