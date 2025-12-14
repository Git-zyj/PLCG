/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16615
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
    var_18 *= ((/* implicit */unsigned short) max((max((max((var_0), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) ((1724178405U) * (((/* implicit */unsigned int) 16777215))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (var_6)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (-1022315991))) : (max((((/* implicit */int) var_11)), (var_5))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) -1096875444)))) || ((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) arr_1 [i_1 - 2] [i_2]);
                    var_20 = ((((((((/* implicit */int) arr_1 [i_0] [i_0])) / (-16777199))) * (((/* implicit */int) (signed char)-106)))) * ((+(((/* implicit */int) (signed char)-106)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_3 = 3; i_3 < 20; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 1) 
        {
            for (short i_5 = 3; i_5 < 20; i_5 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_12 [i_3 - 2] [i_3 - 3])) >= (arr_8 [i_5 - 3] [i_5 - 3]))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) arr_9 [i_6]))))))));
                                arr_19 [i_3] [i_3] [i_6] [i_5 - 3] [i_6] [i_6] [i_7] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_6])) ^ (arr_11 [i_3 - 1] [i_7 + 1])));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [2LL] [i_4 - 4] [i_5 - 2])) * (((/* implicit */int) arr_13 [16] [i_4 - 3] [i_5 - 3]))));
                    arr_20 [i_3] [i_3] = arr_11 [i_5 - 2] [i_3];
                    var_24 = arr_12 [i_3] [i_5];
                }
            } 
        } 
        arr_21 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned short) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) >= (((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3] [2U] [(signed char)3]))))))));
    }
    var_25 = 6568481670510545683LL;
    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((min((min((var_6), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) ((var_6) == (var_17)))))) >> (((/* implicit */int) var_11)))))));
}
