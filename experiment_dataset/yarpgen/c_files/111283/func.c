/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111283
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
    var_12 = ((/* implicit */int) var_11);
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)35766)))))));
    var_14 &= ((signed char) ((((/* implicit */_Bool) -129535898)) ? (((/* implicit */unsigned int) ((2147483647) | (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)9588)) : ((+(min((((/* implicit */int) (_Bool)0)), (1572864)))))));
        var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)0)), (3123987884U)));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */short) ((long long int) arr_5 [i_1] [i_1 + 1]));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                for (unsigned short i_4 = 3; i_4 < 12; i_4 += 1) 
                {
                    {
                        arr_15 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (unsigned short)65519))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_14 [i_4 - 1] [i_3] [6U] [i_1])))) : (var_4)));
                        var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-11))) : (-3014390005178526324LL)))) ? (((/* implicit */long long int) arr_0 [(_Bool)1] [i_2])) : (((((/* implicit */_Bool) arr_11 [(signed char)2] [(signed char)2])) ? (((/* implicit */long long int) -69846668)) : (var_4)))));
                        var_17 = ((/* implicit */signed char) ((int) arr_4 [i_2]));
                    }
                } 
            } 
        } 
        arr_16 [i_1 + 3] [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) 4138309225U)) == (1197115321300697185LL)));
        arr_17 [i_1] = ((/* implicit */unsigned short) arr_1 [i_1 + 2] [i_1 - 2]);
    }
    for (long long int i_5 = 3; i_5 < 11; i_5 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) arr_10 [i_5] [i_5]);
        arr_20 [i_5] = ((/* implicit */short) arr_11 [i_5] [i_5]);
    }
    for (long long int i_6 = 3; i_6 < 18; i_6 += 3) 
    {
        arr_24 [(unsigned char)15] = ((/* implicit */short) ((((((/* implicit */unsigned int) (-2147483647 - 1))) / (1582774403U))) << (((((/* implicit */int) ((signed char) (((_Bool)1) ? (6856812296688436867LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6]))))))) + (155)))));
        var_19 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7268)) ? (129535887) : (((/* implicit */int) (unsigned char)57))))) ? (((((/* implicit */_Bool) arr_0 [8] [i_6 - 1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6]))))) : (((/* implicit */long long int) ((var_11) ? (((/* implicit */int) var_10)) : (1572846)))))) << (((((/* implicit */int) arr_22 [i_6] [i_6 - 1])) * (((/* implicit */int) (_Bool)0))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((max((-129535898), (((/* implicit */int) (signed char)111)))) > (((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_23 [i_6])))))))))));
    }
    var_21 = ((/* implicit */signed char) var_7);
}
