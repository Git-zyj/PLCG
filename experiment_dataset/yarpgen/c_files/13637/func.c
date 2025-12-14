/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13637
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
    var_20 = ((/* implicit */_Bool) (~(min((var_5), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 125829120U)) : (var_0)))))));
    var_21 -= ((/* implicit */int) 4169138176U);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_1 [i_1]) : (((/* implicit */int) var_19))))) ? ((+(arr_4 [i_0] [i_1] [i_2 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_1] [i_0] [i_3])))))), (((/* implicit */long long int) ((signed char) (unsigned char)198)))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                            {
                                var_23 = ((((/* implicit */_Bool) 125829120U)) ? (-8048791410306879008LL) : (((/* implicit */long long int) 4169138176U)));
                                arr_13 [i_0] [i_0] [i_0] [1U] [i_0] [i_0] [(unsigned short)2] = ((/* implicit */unsigned int) -1536151249);
                                arr_14 [i_3 - 1] [i_3 - 1] = ((/* implicit */short) arr_0 [9]);
                            }
                            var_24 = ((/* implicit */unsigned int) arr_6 [i_0] [i_0]);
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_4 [(_Bool)0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_4 [i_2] [i_0] [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)12604)))))))) ? (((3146431471U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81))))) : (((((/* implicit */_Bool) var_3)) ? ((-(1693724315U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 15070060797080349173ULL)) ? (arr_1 [i_1]) : (-1704863920))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29645)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_1)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_15)), (270908347)))) : (min((((/* implicit */unsigned long long int) (unsigned short)0)), (7822905604806159684ULL)))))));
            }
        } 
    } 
}
