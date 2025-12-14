/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105079
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) ((min((var_7), (((/* implicit */int) arr_1 [i_0 + 1])))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 *= ((/* implicit */unsigned short) (((((-(((/* implicit */int) var_5)))) & (((/* implicit */int) (!(var_4)))))) << (((min((((/* implicit */unsigned long long int) 226053277)), (var_6))) - (226053266ULL)))));
            var_14 = ((/* implicit */unsigned short) min((((unsigned int) -7956812491161166629LL)), (((/* implicit */unsigned int) var_8))));
            var_15 = ((/* implicit */unsigned char) (~(3186039436U)));
            var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)33)) ? (4611123068473966592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1])))))));
        }
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_17 -= (-(((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_4)))));
            arr_9 [i_0] [i_0 - 1] [i_2] = ((/* implicit */unsigned long long int) ((signed char) (-(((((/* implicit */_Bool) var_2)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
        }
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)119)) ? (4611123068473966607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23515)))));
        arr_10 [10U] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((arr_7 [i_0] [0] [i_0]), (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (262143LL)))) ? (((/* implicit */unsigned long long int) min((-4067506756094169747LL), (-7841603035893826312LL)))) : (var_2)))));
        arr_11 [i_0 + 1] = ((/* implicit */unsigned long long int) ((unsigned char) ((long long int) ((short) (unsigned short)65528))));
    }
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) % (min((((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */int) (unsigned short)35015)))), (((((((/* implicit */int) var_5)) + (2147483647))) << (((var_6) - (1699799240481455901ULL)))))))));
    var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 7841603035893826311LL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) != (var_2)))) : (min((var_11), (((/* implicit */int) (signed char)-121)))))), (((((/* implicit */_Bool) -301858603)) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) ((var_7) != (((/* implicit */int) var_8)))))))));
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))), (var_6)));
    var_22 = ((/* implicit */unsigned char) var_7);
}
