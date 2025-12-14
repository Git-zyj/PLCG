/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171155
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
    var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned char i_4 = 2; i_4 < 10; i_4 += 4) 
                    {
                        {
                            var_17 += ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
                            arr_13 [8LL] [i_0] [(short)6] [i_2] [(unsigned short)0] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned short) var_0)));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) var_14))))))));
                        }
                    } 
                } 
                arr_14 [i_2] [i_1] = ((/* implicit */signed char) (!(((((/* implicit */int) var_0)) < (((/* implicit */int) var_1))))));
                var_19 = ((/* implicit */unsigned long long int) var_10);
            }
            for (signed char i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */signed char) min((var_20), (var_6)));
                var_21 ^= ((/* implicit */long long int) var_10);
                var_22 = ((/* implicit */unsigned short) var_11);
            }
            for (signed char i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
            {
                arr_19 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                var_23 = var_7;
            }
            arr_20 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))) == (((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (-(-2753157724225689723LL))))));
            arr_23 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) * (((/* implicit */int) var_0)))));
            arr_24 [(signed char)5] [(short)5] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-27629)) ? (2753157724225689725LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-64)))));
        }
        var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)13))));
        arr_25 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))));
    }
}
