/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113570
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
    var_10 = ((/* implicit */unsigned int) ((unsigned short) var_8));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) 16700572821958452350ULL)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)61)))))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((var_8) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_3)))))))) ? (((((/* implicit */_Bool) max((var_6), (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_0)))))))))));
        var_13 = ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) max((var_9), (var_2))))))));
        var_14 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 1224634832)) ? (((/* implicit */int) ((_Bool) (unsigned char)8))) : (0))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_16 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_0)) : (var_5)))))) || (((/* implicit */_Bool) var_9)));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_5)) : (var_3))) : (((((/* implicit */_Bool) -2192500502321602440LL)) ? (1746171251751099266ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (max((((/* implicit */unsigned long long int) ((long long int) var_5))), (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6))))))));
        arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_1)))))))) ? (((((/* implicit */_Bool) ((var_8) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (var_9))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))), (((/* implicit */int) max((var_2), (var_9)))))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_8), (var_8))))) : (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) ? (((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -358552929)) ? (((/* implicit */int) (short)-27994)) : (((/* implicit */int) (_Bool)1)))))));
    }
    var_19 ^= (-(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (var_7)))) ? (((/* implicit */int) ((unsigned short) var_4))) : ((+(((/* implicit */int) (_Bool)1)))))));
}
