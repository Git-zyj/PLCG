/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144074
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
    var_18 |= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-102)) ? (2097151U) : (var_10)))) : (((long long int) -2045488829)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) var_10);
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -2045488819)) || (((/* implicit */_Bool) 8U)))) ? (((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) 2147483647))))) : ((+(((/* implicit */int) var_11)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (short)-32751))))) ? (1270717529U) : (4294967279U)));
                                arr_11 [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) + (-6523117520839663067LL))))));
                                var_22 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_17)))) && (((/* implicit */_Bool) (signed char)119))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) (+(arr_5 [i_0] [22ULL] [i_0])))) ? (((/* implicit */unsigned long long int) var_10)) : (arr_1 [i_0 - 1])))));
    }
    for (long long int i_5 = 1; i_5 < 22; i_5 += 3) /* same iter space */
    {
        arr_15 [i_5] [i_5 + 2] = ((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) 4292870142U)));
        var_24 |= var_2;
    }
    var_25 = ((/* implicit */int) var_17);
}
