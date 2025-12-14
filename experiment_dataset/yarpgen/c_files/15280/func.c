/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15280
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
    var_12 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) arr_2 [i_0] [i_0]);
                var_14 = ((/* implicit */unsigned int) (~(min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    arr_8 [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) < (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) / (arr_3 [i_1])))))));
                    var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) min((arr_6 [i_0] [i_0] [i_2]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0] [i_1])))));
                    var_16 ^= ((/* implicit */short) min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_4 [i_0]))));
                }
                for (short i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) min((((arr_3 [i_0]) << (((arr_3 [i_3]) - (3533169522U))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_3])) : (((/* implicit */int) arr_4 [i_0])))) & (((((/* implicit */int) arr_0 [i_3])) - (((/* implicit */int) arr_4 [i_1])))))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((arr_10 [i_3] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_3]))))) : (((((/* implicit */int) arr_4 [i_0])) >> (((((arr_1 [i_0] [i_0]) | (((/* implicit */long long int) arr_3 [i_3])))) + (4710487163375456341LL))))))))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((arr_5 [i_3]), (((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_3])) ? (arr_2 [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_1] [i_0] [i_3])))))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_3])) || (((/* implicit */_Bool) arr_0 [i_3]))))))) : (((/* implicit */int) arr_0 [i_0])))))));
                }
                for (short i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned char) arr_13 [i_4] [i_1] [i_0]);
                    arr_14 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_4] [i_1]))));
                }
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_1])), (((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0]))))) * (((/* implicit */int) arr_4 [i_1]))))));
            }
        } 
    } 
}
