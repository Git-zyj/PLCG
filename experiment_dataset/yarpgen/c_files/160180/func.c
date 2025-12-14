/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160180
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
    var_11 *= ((/* implicit */long long int) max((min((((/* implicit */short) max((var_10), (var_5)))), (min((((/* implicit */short) (_Bool)1)), (var_6))))), (((/* implicit */short) var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */unsigned long long int) ((((arr_0 [i_1]) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (-458686825) : (((/* implicit */int) var_6)))) : (((arr_0 [(unsigned char)12]) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2])) : (((/* implicit */int) arr_3 [i_2] [i_2])))))) == (((/* implicit */int) (_Bool)1))));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_4 [12LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (-9117252945430837119LL)))) : (((/* implicit */int) max((var_9), (((/* implicit */short) var_7))))))), (((/* implicit */int) var_9)))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)14))))) ? (((/* implicit */int) max((arr_1 [i_2]), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) var_9)))) >> (((max((((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_0] [i_0]) | (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_2]))))), (min((arr_4 [i_0]), (arr_4 [i_0]))))) - (2317218105477824862ULL)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) max((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 979894480)))))) == (min((var_0), (((/* implicit */long long int) arr_6 [i_0] [i_2] [i_0] [i_4 - 1]))))))), (var_5)));
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [(unsigned short)12] [i_1] [(unsigned short)13] [i_4]) : (var_0))), (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2] [i_3]))))), (((min((((/* implicit */unsigned long long int) arr_11 [i_2] [i_1] [i_2] [i_2] [i_2])), (var_2))) ^ (((/* implicit */unsigned long long int) max((arr_2 [i_3]), (((/* implicit */int) arr_0 [i_4])))))))));
                                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) >> (((/* implicit */int) ((((/* implicit */long long int) -1462035030)) > (arr_9 [i_0] [15LL] [i_0] [i_3])))))))));
                                var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) 36028797018963967LL))))) * (((/* implicit */int) arr_0 [i_3])))) ^ (max((((/* implicit */int) (signed char)125)), ((+(var_1)))))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [i_2])), (var_2))))));
                }
            } 
        } 
    } 
    var_17 ^= var_8;
}
