/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127090
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
    var_16 = ((/* implicit */_Bool) min((((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) < (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) var_12)))))))), (min((((/* implicit */int) var_12)), ((-(var_15)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_17 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_4)), (var_0)))), ((+(var_5)))));
                    arr_7 [i_0] [i_1] [i_2 - 1] [i_2 - 1] = ((/* implicit */_Bool) var_2);
                }
                for (short i_3 = 2; i_3 < 9; i_3 += 2) 
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) (short)5739)) : (((/* implicit */int) (signed char)-6)))))));
                    var_19 = ((/* implicit */unsigned int) (((-(((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_2)))))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))) != ((~(var_1))))))));
                    arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(var_3)))), (max((var_5), (((/* implicit */unsigned long long int) var_4)))))))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_2)), (var_1))) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) var_9)) + (26))))))))) ? (max((((/* implicit */unsigned long long int) var_0)), (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_2), (var_0)))) ^ ((~(var_15))))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_1 - 1] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >> (((var_8) - (1564498402)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (var_3)))) ? (((/* implicit */unsigned int) min((var_15), (((/* implicit */int) var_2))))) : ((+(var_3))))))));
                            var_21 *= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))))))));
                            arr_16 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_12)) : ((~(((/* implicit */int) var_9))))))), (min((((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (var_8))))))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (4209562984937103937LL)));
                arr_18 [i_0] [i_1 + 1] [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_13))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-(((/* implicit */int) ((var_3) != (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))))))))));
}
