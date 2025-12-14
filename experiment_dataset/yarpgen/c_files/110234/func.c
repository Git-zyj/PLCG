/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110234
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
    var_14 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_11 [i_0 + 2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38298)))))));
                        var_15 ^= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)47))))) ? (((((/* implicit */int) (signed char)-59)) / (((/* implicit */int) (unsigned char)231)))) : ((-(((/* implicit */int) var_12)))))));
                    }
                } 
            } 
        } 
        arr_12 [(signed char)6] = ((/* implicit */unsigned char) 8257536);
        var_16 -= ((/* implicit */signed char) (-(((long long int) (~(((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0 + 2] [(short)14])))))));
    }
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            {
                arr_18 [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) var_9);
                /* LoopSeq 2 */
                for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    arr_21 [i_4] [i_4] [i_6] = min((((((/* implicit */_Bool) (short)-23497)) ? (1736890941930769063LL) : (((/* implicit */long long int) 2573709619U)))), (((/* implicit */long long int) max(((signed char)-59), ((signed char)36)))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) (~(8257542)));
                        arr_24 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((long long int) ((max((((/* implicit */int) (unsigned char)207)), (-8257536))) < (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_8 [i_4] [i_5] [i_7]))))))));
                        var_18 ^= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) arr_23 [i_4] [i_5] [i_6])) >= (((/* implicit */int) arr_0 [i_7])))));
                    }
                    var_19 = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) >= (2573709623U))));
                    var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min(((signed char)-9), ((signed char)104)))))) ? (((/* implicit */int) max((arr_9 [i_4] [i_5] [i_6] [i_5]), (arr_9 [i_6] [i_6] [i_5] [i_4])))) : (((/* implicit */int) ((signed char) min(((signed char)125), (var_9)))))));
                    arr_25 [i_4] [i_5] [(signed char)10] [i_4] = ((/* implicit */long long int) min((-8257536), (((/* implicit */int) (unsigned short)36606))));
                }
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_9 = 3; i_9 < 18; i_9 += 3) 
                    {
                        var_21 -= ((signed char) arr_8 [(short)7] [i_9 - 2] [i_9 + 1]);
                        var_22 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [i_4] [i_9 + 2] [i_9 + 1] [i_9 - 3]))));
                        var_23 = ((((/* implicit */_Bool) ((unsigned short) (unsigned short)26866))) ? (((/* implicit */int) arr_19 [i_9] [i_9 - 1] [i_9 - 3] [i_9])) : (((/* implicit */int) var_9)));
                    }
                    for (long long int i_10 = 1; i_10 < 16; i_10 += 4) 
                    {
                        var_24 -= (~(((/* implicit */int) (signed char)-127)));
                        arr_33 [i_10] [i_10 + 2] [i_10 + 2] [i_4] = ((/* implicit */signed char) (+(arr_3 [i_10 + 2] [i_10 + 2] [i_4])));
                        arr_34 [i_10] [i_10 + 4] [i_4] [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((short) arr_4 [i_4]));
                    }
                    arr_35 [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) arr_19 [i_4] [i_5] [i_5] [i_8]))));
                }
                var_25 = ((/* implicit */unsigned int) (+(max(((+(((/* implicit */int) (signed char)104)))), (((/* implicit */int) (unsigned char)61))))));
                arr_36 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_5])) ? (5365156095315896555LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-2)), (2215467604U))))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_11))))) ^ (var_10))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2))))));
}
