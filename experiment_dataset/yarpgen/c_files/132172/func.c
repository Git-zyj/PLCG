/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132172
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-115))))) ? (((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) arr_6 [i_1] [(unsigned short)6] [i_1])) : (-1391243422))) : (((((-1391243422) + (2147483647))) << (((((-1391243418) + (1391243430))) - (12)))))))));
                arr_8 [i_1] [i_1] [(signed char)13] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) (_Bool)1)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_13 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4 + 1] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4 + 1] [i_4 - 1]))) : (arr_9 [i_4 - 1] [i_4 + 1] [i_4 + 3])));
                                arr_17 [i_0] [i_1] [(unsigned short)11] [(unsigned short)11] [i_1] = ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_18 [i_1] = ((/* implicit */long long int) 1391243420);
                }
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_12)))), (((-1391243408) | (((/* implicit */int) (short)-11353))))))) ? (var_8) : (((((/* implicit */_Bool) (+(var_4)))) ? (302117678) : (max((((/* implicit */int) var_7)), (-1391243422)))))));
    var_15 = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24804)) ? (1679900420) : (-1226865430)))) ? (((/* implicit */int) ((signed char) (signed char)-115))) : (((/* implicit */int) var_7))));
}
