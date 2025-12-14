/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146857
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
    var_20 = ((/* implicit */unsigned short) var_8);
    var_21 *= ((/* implicit */signed char) ((unsigned short) ((max((((/* implicit */unsigned int) var_4)), (var_2))) << (((((((/* implicit */unsigned int) -2025633140)) - (var_2))) - (1150004496U))))));
    var_22 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((short) 1224557831U))))) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
        var_23 = ((/* implicit */signed char) var_0);
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_1 [0] [i_0])))))))) - (((arr_2 [i_0]) % (arr_2 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */long long int) (+(((var_11) % (((/* implicit */unsigned long long int) arr_4 [i_1]))))));
        var_26 ^= ((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_6 [i_1])), (arr_7 [i_1]))) ^ (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)14763)))))));
    }
    for (short i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1959965826)));
        var_28 = ((/* implicit */unsigned int) arr_11 [i_2] [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (unsigned int i_5 = 1; i_5 < 18; i_5 += 3) 
                {
                    {
                        var_29 ^= ((/* implicit */int) ((arr_15 [i_4] [12ULL] [i_3] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)0), (((/* implicit */signed char) (_Bool)1)))))) : (var_3)));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_14 [i_3 + 2] [i_3 + 2] [i_5 + 2] [i_5 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1])))))))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned long long int) var_0);
}
