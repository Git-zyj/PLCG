/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180892
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
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    arr_8 [i_0] [13] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)35)) + (((/* implicit */int) (signed char)-7)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [(short)10])) : (((/* implicit */int) (unsigned short)65535))))))) % (((((/* implicit */_Bool) (~(arr_5 [i_0])))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (var_10)))))))));
                    var_17 = ((/* implicit */unsigned short) var_13);
                }
                var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((1413510075) <= (((/* implicit */int) (signed char)63))))) * (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0 + 2]))))));
                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20773)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14840))) : (0ULL))))));
                var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0 - 3])), (arr_4 [i_0 + 2] [i_0 + 1]))))));
                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */short) (signed char)79)), ((short)32757)))), (((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (signed char)-32))))))), (min((arr_6 [(unsigned char)9] [i_1] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) + (-1995098440))))))));
            }
        } 
    } 
    var_22 = (~(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_8))) : (((/* implicit */unsigned long long int) 15U)))));
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_13)) ? (var_13) : ((+(((/* implicit */int) var_15)))))))))));
    var_24 = ((/* implicit */int) var_0);
}
