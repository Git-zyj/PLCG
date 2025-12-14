/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151155
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
    var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) >= ((~(374319138U))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((max((1267579942072336293LL), (((/* implicit */long long int) arr_9 [(_Bool)1] [i_0] [i_2 + 1])))) & (((/* implicit */long long int) ((arr_7 [i_0] [i_0] [i_2 - 1]) >> (((((/* implicit */int) arr_10 [i_2 + 1] [i_1] [8ULL] [i_3])) + (24945)))))))))));
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (+(max((-1267579942072336291LL), (((arr_1 [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))))))))));
                        }
                    } 
                } 
                var_18 &= ((/* implicit */long long int) var_13);
                var_19 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0])) * (((/* implicit */int) arr_8 [i_0]))))), ((-(var_5)))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [0U])))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)47812)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [(unsigned short)5])) : (((/* implicit */int) arr_10 [i_0] [i_0] [(short)5] [i_1]))))))))));
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned char i_5 = 3; i_5 < 15; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((((/* implicit */int) (short)8191)) + (((((/* implicit */_Bool) var_13)) ? ((-(((/* implicit */int) (unsigned short)52924)))) : ((+(((/* implicit */int) (unsigned short)40950))))))));
                                arr_20 [i_0] [(_Bool)1] [i_4] [i_5] [i_6] [i_0] [i_5] = ((/* implicit */long long int) arr_5 [i_6] [i_6] [i_6]);
                                var_22 = ((/* implicit */long long int) ((((((/* implicit */int) var_13)) - (arr_12 [i_0] [i_5 - 1] [(signed char)7] [i_5 + 1]))) - (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)12607)) : (((/* implicit */int) (short)-8180))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
