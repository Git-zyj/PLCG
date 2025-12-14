/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143973
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
    var_15 = ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_7)) : (var_14)))) && (((/* implicit */_Bool) (-(var_5))))))), (var_12)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) arr_3 [9U]))), (max((var_6), (arr_1 [i_2])))))) ? (max((-5349174600046491756LL), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-5349174600046491762LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (var_14)))))));
                    var_17 -= ((/* implicit */_Bool) (unsigned short)56);
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_2 + 1])) ? (((/* implicit */int) (unsigned short)9725)) : (((/* implicit */int) arr_4 [i_2 + 1])))), (min((((/* implicit */int) arr_3 [i_2 - 1])), (var_4)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) /* same iter space */
                    {
                        arr_12 [i_0] [i_2] = ((/* implicit */int) ((arr_9 [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2] [12U]) == (((/* implicit */unsigned long long int) ((long long int) var_14)))));
                        var_18 += ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) arr_0 [12ULL])))));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 4) /* same iter space */
                    {
                        arr_17 [i_2] [i_2 - 2] [i_4] = (+(max((((/* implicit */long long int) ((unsigned short) var_4))), (var_14))));
                        arr_18 [i_0] [i_0] [i_2] [13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 - 2] [i_4 + 3])) ? (((/* implicit */int) arr_11 [i_2] [i_2 - 2] [i_4 - 1])) : (((/* implicit */int) arr_11 [i_2] [i_2 + 1] [i_4 - 1]))))) || (((((/* implicit */_Bool) arr_11 [i_2] [i_2 + 1] [i_4 + 3])) || (((/* implicit */_Bool) arr_11 [i_2] [i_2 - 1] [i_4 + 3])))));
                        arr_19 [i_0] [i_0] [i_0] [i_2] = ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_9 [0ULL] [i_2] [(unsigned short)6] [i_4 + 1] [i_4] [i_4])));
                        arr_20 [i_2] = max((((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (unsigned short)55)))), (((((((/* implicit */int) var_13)) % (-2147483638))) ^ (((/* implicit */int) (unsigned short)65524)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                        {
                            arr_24 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_16 [i_0] [i_4 + 3] [i_2] [i_4 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (arr_9 [i_0] [i_2] [i_2 - 3] [2ULL] [i_0] [i_5 + 1])));
                            arr_25 [i_2] [i_4 + 1] [11ULL] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (-2147483647 - 1));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            arr_29 [i_6] [i_2] [i_2 + 1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_2 - 3]))));
                            arr_30 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_4 + 3] [(unsigned short)2]))) | (arr_9 [i_2 - 2] [i_2] [i_2] [i_2 - 2] [(unsigned short)4] [(unsigned short)10])));
                        }
                    }
                    arr_31 [i_2] [i_2] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned short) (short)-15635)), ((unsigned short)55817)));
                }
            } 
        } 
    } 
    var_19 *= ((/* implicit */unsigned long long int) var_14);
    var_20 += ((/* implicit */short) ((var_5) - (max((((/* implicit */int) var_8)), (var_5)))));
}
