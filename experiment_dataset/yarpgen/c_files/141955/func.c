/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141955
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_2] |= ((/* implicit */int) arr_1 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) /* same iter space */
                    {
                        var_18 += ((/* implicit */long long int) var_13);
                        var_19 ^= ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned char)106)))) ^ (((/* implicit */int) (unsigned char)53))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [(short)5] [i_1] [i_2] [i_2]))));
                            arr_13 [i_1] = ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)53)));
                        }
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) var_8)))))))) - (max((arr_11 [i_3 - 1]), (arr_11 [i_3 + 3]))))))));
                        arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)111)), ((unsigned char)57)));
                    }
                    for (unsigned char i_5 = 1; i_5 < 15; i_5 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)71)) | (((/* implicit */int) var_14)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)71))))))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)53)) >= ((+(((/* implicit */int) arr_16 [i_1] [i_5 + 3] [i_5 + 2] [i_5 + 1] [i_5] [i_1]))))));
                        var_24 = min((var_1), (((/* implicit */int) arr_8 [i_0] [i_1])));
                        var_25 &= ((/* implicit */unsigned char) (~((-(var_7)))));
                    }
                    var_26 &= ((/* implicit */unsigned short) var_16);
                }
            } 
        } 
    } 
    var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (var_12) : (((/* implicit */long long int) ((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)110)))))))))));
    var_28 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 2147352576)) ? (var_15) : (((/* implicit */int) var_14)))))) != (((/* implicit */int) ((signed char) var_6)))));
}
