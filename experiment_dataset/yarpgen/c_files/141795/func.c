/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141795
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
    var_13 = ((/* implicit */short) var_0);
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (unsigned short)65535))));
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((signed char) var_8)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)7))))) ? (1144752713) : (((/* implicit */int) arr_6 [i_1 + 2] [i_1 - 3] [i_1 - 2])))), ((+(((/* implicit */int) max((((/* implicit */unsigned short) (short)-31612)), (arr_6 [i_1] [i_1] [i_0]))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_14 [i_1] = ((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_2] [i_2] [i_0]);
                        arr_15 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) (short)-31618);
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_16 += ((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_17 [i_0] [i_4] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_1 + 2])))), (((/* implicit */int) arr_17 [i_0] [i_2] [i_1] [i_0]))));
                        arr_20 [i_0] [i_0] [i_1 + 2] [i_2] [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */int) (short)31612)) ^ (((/* implicit */int) (unsigned short)56928)))) | (((/* implicit */int) arr_6 [i_0] [i_1 + 2] [i_2]))));
                        arr_21 [i_4] [i_1] [i_1] [i_2] [i_4] [i_4 + 1] = ((/* implicit */unsigned short) ((unsigned char) var_1));
                    }
                    for (signed char i_5 = 1; i_5 < 15; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */short) ((unsigned int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)17832))))));
                        arr_24 [i_0] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0]))));
                        arr_25 [i_5] [i_5] [i_5] [i_0] = max(((-(((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_5])) ? (arr_4 [i_5]) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_2] [i_5] [i_5] [i_5])))))), ((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_5 - 1])))));
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((max((-1144752713), (((/* implicit */int) (short)31617)))) % (((/* implicit */int) ((unsigned short) var_4))))))));
                        var_18 += ((/* implicit */int) ((unsigned short) var_0));
                    }
                    arr_27 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((((/* implicit */int) ((arr_4 [i_1]) <= (((/* implicit */int) (short)512))))) >= (min((var_0), (((/* implicit */int) (short)-31613))))))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                {
                    arr_31 [i_0] [i_1 + 2] [i_6] [i_6] = ((/* implicit */unsigned char) (short)-31633);
                    var_19 = (signed char)0;
                }
                arr_32 [i_1 - 3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))))));
            }
        } 
    } 
    var_20 *= ((/* implicit */unsigned short) ((max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) > (3313230066U)))), (max((((/* implicit */int) var_2)), (var_6))))) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) : (min((((/* implicit */unsigned int) 288783549)), (var_5))))) - (4294967116U)))));
}
