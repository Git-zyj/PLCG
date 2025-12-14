/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114657
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)39)), ((unsigned short)48889)));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_2), (((/* implicit */short) arr_4 [i_0] [i_0]))))) ? (max((-1LL), (((/* implicit */long long int) (signed char)-4)))) : (((long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_14))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        arr_10 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0 - 1]);
                        arr_11 [(_Bool)1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1292831214)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))) : (779938242781314285ULL)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_0] [4ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_4])) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)40660)) <= (((/* implicit */int) var_2)))))))) / (((((/* implicit */_Bool) var_12)) ? (1928772924752685264ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117)))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)12)))))) : (((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])) ? (var_15) : (((/* implicit */long long int) var_5))))));
                        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-119)) + (2147483647))) << (((((/* implicit */int) (unsigned short)65535)) - (65535)))));
                    }
                    var_22 = ((/* implicit */unsigned int) ((signed char) var_6));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) var_17);
}
