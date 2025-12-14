/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146032
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) -1775160259))));
                var_20 = ((((/* implicit */_Bool) -1452792650)) ? (-1155562457) : (-216854865));
                arr_7 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 331754837)) ? (arr_6 [i_0] [9] [i_1 - 2]) : (-1125399071)))) ? (((int) arr_6 [i_0] [i_1] [i_1 + 1])) : ((+(arr_6 [8] [i_1] [i_1 - 3]))));
                var_21 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (arr_0 [i_1 - 2]) : (216854865)))) ? (((((/* implicit */_Bool) 44603453)) ? (-880313366) : (2147483647))) : (max((662665335), (-335098548))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (int i_3 = 2; i_3 < 20; i_3 += 2) 
        {
            {
                var_22 = max((((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_3 + 2])) ? (1125399064) : (216854862))), (min((-1478045561), (((((/* implicit */_Bool) -1726253839)) ? (453389989) : (-347126311))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (int i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        for (int i_6 = 2; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_23 |= ((int) max((max((1715306973), (-216854853))), (arr_10 [i_5 - 1] [i_6 - 2])));
                                var_24 = ((int) ((arr_5 [i_6] [i_3 - 1]) % (max((-197052554), (-137002133)))));
                                arr_22 [i_2] [i_3] [i_4] [i_5] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3 + 2] [i_5 + 2] [i_6 + 1])) ? (max((511), (1633515271))) : (((((/* implicit */_Bool) -1954449037)) ? (992702980) : (arr_4 [i_4] [i_5 - 1] [i_4])))))) ? (min((1642142168), (((((/* implicit */_Bool) 1687821239)) ? (243486266) : (2147483647))))) : (((-1835765508) / (996934688))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((((/* implicit */_Bool) 1046528)) ? ((-2147483647 - 1)) : (((max((var_15), (843495578))) / (((int) 843495590)))));
    var_26 = ((int) ((int) max((1281216441), (2083332476))));
    var_27 = 760968081;
}
