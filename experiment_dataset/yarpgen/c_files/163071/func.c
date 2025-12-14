/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163071
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
    var_15 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (var_1)))) ? (((/* implicit */unsigned long long int) var_11)) : (((unsigned long long int) var_6))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_3 [i_0 - 1] [i_1 - 1]))) ? (((((/* implicit */int) (short)-11924)) + (317354630))) : (((((/* implicit */_Bool) 18444492273895866368ULL)) ? (-317354636) : (((/* implicit */int) (short)11928))))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_1 - 4]);
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */unsigned long long int) 1137636219)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-11912)) & (((/* implicit */int) (unsigned char)47))))))) <= (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_2 [i_0])))) / (min((-782221229), (-1137636235))))))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_2 [3U]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            {
                var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 317354630)) ? (max((((long long int) (signed char)118)), (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (arr_6 [i_2] [(_Bool)1]) : (arr_6 [i_3] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-11930)))));
                arr_10 [i_2] [i_2] [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((unsigned long long int) 317354630))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [14ULL] [i_3 - 1]))))) : (arr_6 [i_2 + 2] [i_3 - 1])))));
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) 
                    {
                        {
                            arr_16 [i_2] = ((/* implicit */unsigned long long int) arr_14 [i_2] [i_4 - 1] [(unsigned char)13] [i_2]);
                            arr_17 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned int) min((arr_12 [15LL] [i_2]), (arr_12 [i_2] [i_2])));
                            var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11932)) ? (((/* implicit */unsigned int) -1137636214)) : (2330802012U)));
                            arr_18 [i_4] [i_4] [i_4] [i_4] [i_2] = (+((-(-317354655))));
                        }
                    } 
                } 
                var_20 &= arr_14 [(signed char)6] [i_2 + 1] [(short)16] [10LL];
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) -1137636198)) ? (317354636) : (1055346287)));
}
