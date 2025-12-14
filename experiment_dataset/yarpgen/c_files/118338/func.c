/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118338
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
    var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (short)-32759))))))) ? (((/* implicit */int) (short)-23207)) : (((/* implicit */int) var_17))));
    var_21 += min((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_19), (((/* implicit */long long int) (short)-1))))) ? ((-(((/* implicit */int) (unsigned char)151)))) : ((+(((/* implicit */int) (unsigned char)75))))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_12))))) : (min((((/* implicit */long long int) var_16)), (65582364736708994LL))))));
    var_22 = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) max((((/* implicit */short) var_18)), (var_9))))), (max((((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (short)-19886)))), (((/* implicit */int) (short)-19886))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max(((unsigned char)63), ((unsigned char)37)))) ? ((~(((/* implicit */int) (unsigned char)63)))) : (((/* implicit */int) (unsigned char)213)))))))));
        arr_2 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)10)), (arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_1 [(unsigned char)10])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)28260))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((short)(-32767 - 1)), ((short)29715)))) ? (((((/* implicit */int) arr_1 [i_0 + 1])) ^ (((/* implicit */int) (short)32759)))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 3])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (short)32750))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 11; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    arr_14 [i_3] [i_3] [(short)4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min(((short)-4714), ((short)2781)))) % (((/* implicit */int) min(((short)32759), (((/* implicit */short) (unsigned char)231)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_2])))))) : (max((((long long int) var_3)), (((/* implicit */long long int) max((var_4), (((/* implicit */short) (unsigned char)213)))))))));
                    arr_15 [i_1] [i_3] [i_1] = ((/* implicit */short) (~((~(-5087111046309172979LL)))));
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */long long int) min((((((/* implicit */int) arr_9 [i_1])) | (((/* implicit */int) arr_9 [i_1])))), (((/* implicit */int) ((unsigned char) ((short) 5087111046309172979LL))))));
        arr_17 [i_1] |= ((long long int) ((long long int) arr_1 [i_1]));
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
    {
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) (unsigned char)187))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-19420)) ^ (((/* implicit */int) (unsigned char)9))))) : (min((-504608843647335756LL), (-6041058808483516949LL))))), (((((/* implicit */_Bool) min((4267525145865289810LL), (((/* implicit */long long int) (short)20985))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_0)), ((short)-23011))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_19)))))));
        var_24 = ((/* implicit */short) max(((+(max((arr_8 [i_4] [i_4]), (((/* implicit */long long int) (unsigned char)39)))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4] [i_4]))) : (4267525145865289810LL)))));
        var_25 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((((/* implicit */short) arr_12 [9LL] [i_4] [i_4] [i_4])), (var_9)))) ? (((/* implicit */int) min(((short)17495), (((/* implicit */short) (unsigned char)213))))) : (((/* implicit */int) min((var_4), (var_15))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
    {
        arr_24 [i_5] [i_5] = var_8;
        arr_25 [i_5] = (+(min((((/* implicit */long long int) (unsigned char)68)), (-1LL))));
        var_26 ^= ((/* implicit */unsigned char) arr_8 [i_5] [i_5]);
        arr_26 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min(((short)-32759), ((short)-6544))))) / (((arr_22 [i_5]) | (((/* implicit */long long int) ((/* implicit */int) (short)30247)))))));
    }
}
