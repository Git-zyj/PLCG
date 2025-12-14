/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140241
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) min((1037960693), (-867177020))))) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_11))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) var_11)))), (((/* implicit */int) arr_8 [i_0]))));
                                arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_4] [i_2] [i_2] [i_3 + 1])) / (-1311155732)))) ? (min((((((/* implicit */int) var_10)) / (1311155726))), (((/* implicit */int) (unsigned char)194)))) : (var_16));
                                arr_12 [i_2] [i_1] [i_1] [i_1] [i_4] [i_2] [(unsigned short)10] = min(((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned char)7] [i_2 - 2] [i_3 - 2] [i_4])) : (-1037960693))))), (var_7));
                                var_19 ^= arr_10 [i_0];
                                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_5 [i_2] [i_3 - 2] [i_2 + 3])))));
                            }
                        } 
                    } 
                    var_21 |= ((/* implicit */unsigned char) min((((/* implicit */int) min((var_9), (arr_5 [(unsigned char)0] [i_1] [i_2])))), ((+(((/* implicit */int) arr_6 [i_2 - 3] [12] [i_2 + 1] [i_2 + 3]))))));
                    var_22 = ((((/* implicit */_Bool) (unsigned short)9123)) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) arr_6 [i_0] [i_2] [i_2] [i_1]))), (min((((/* implicit */unsigned short) (unsigned char)183)), (arr_3 [i_0] [i_2 - 2] [i_2 - 2])))))) : (((((((/* implicit */_Bool) (unsigned char)15)) ? (arr_2 [i_0]) : (((/* implicit */int) (unsigned char)111)))) / (((/* implicit */int) min(((unsigned char)16), ((unsigned char)56)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_1] [i_2 - 3] [i_5] [i_2] = var_5;
                                arr_19 [i_2] = ((/* implicit */int) ((unsigned short) (+((+(((/* implicit */int) (unsigned short)11110)))))));
                                var_23 = ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_6))))))) ? (min((((((/* implicit */_Bool) (unsigned short)11128)) ? (1197043919) : (((/* implicit */int) var_3)))), (((((/* implicit */int) var_6)) * (-1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1197043919)) ? (-1995356535) : (-1782773833)))) ? (-1848702444) : (((((/* implicit */_Bool) (unsigned short)58780)) ? (-1) : (-1311155749))))));
                                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -555498640)) ? (-1261216401) : (((/* implicit */int) (unsigned char)205))))) ? (((((/* implicit */_Bool) -1197043919)) ? (var_5) : (arr_2 [i_1]))) : ((~(arr_17 [i_1]))));
                                arr_20 [i_2] [i_2 + 1] [(unsigned short)5] [i_2 - 3] [i_2] = ((min(((~(((/* implicit */int) (unsigned short)32768)))), ((~(((/* implicit */int) arr_13 [i_0] [(unsigned char)11] [2] [i_0] [i_0])))))) / (((int) ((-1197043919) / (((/* implicit */int) (unsigned char)40))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
