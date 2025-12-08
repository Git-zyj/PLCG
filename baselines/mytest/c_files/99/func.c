/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/99
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
    var_13 = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_10)))) ^ (((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */_Bool) var_12);
        arr_3 [i_0] |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [(unsigned char)13]))))) ? (((/* implicit */int) var_9)) : (((var_2) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)38)))))), (((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 += ((/* implicit */short) ((int) var_8));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [(short)1] [(unsigned short)6] [i_0] [(unsigned char)0] [i_0] = ((/* implicit */unsigned char) var_11);
                                var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                                var_17 |= ((/* implicit */unsigned short) ((signed char) ((unsigned char) var_0)));
                                var_18 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_0))))))) ? (min((arr_12 [i_2 + 1] [i_0] [i_0 - 1]), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) -403688474))));
                                var_19 = ((/* implicit */short) min(((-(var_3))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_6))) ? (550085072273761292ULL) : (((((/* implicit */_Bool) 403688473)) ? (((/* implicit */unsigned long long int) 403688483)) : (17896659001435790307ULL)))));
                }
            } 
        } 
    }
}
