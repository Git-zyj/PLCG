/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150857
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) var_4))));
    var_11 ^= ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)3)))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_13 = ((/* implicit */int) var_9);
            var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
        }
        for (short i_2 = 2; i_2 < 17; i_2 += 1) 
        {
            var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
            arr_6 [i_0] [i_2] [i_2] = ((/* implicit */short) var_7);
            arr_7 [i_0] [9ULL] = ((/* implicit */_Bool) var_8);
            var_16 *= ((/* implicit */unsigned char) var_9);
        }
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_4 = 3; i_4 < 16; i_4 += 1) 
            {
                arr_14 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                var_17 = ((/* implicit */long long int) var_2);
                arr_15 [i_3] [(unsigned char)1] = ((/* implicit */int) var_9);
                var_18 += ((/* implicit */unsigned short) (~((-((-(((/* implicit */int) var_8))))))));
            }
            for (unsigned int i_5 = 1; i_5 < 16; i_5 += 1) 
            {
                var_19 *= ((/* implicit */unsigned char) var_5);
                var_20 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-41))));
            }
            for (short i_6 = 3; i_6 < 17; i_6 += 3) 
            {
                var_21 = var_6;
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (unsigned int i_8 = 1; i_8 < 16; i_8 += 1) 
                    {
                        {
                            arr_28 [i_6] [i_6 - 2] [i_8 + 2] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
                            arr_29 [i_6] [i_6] [i_6] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                        }
                    } 
                } 
            }
            var_22 = var_1;
        }
        arr_30 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((+((-(var_9)))))));
        var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
    }
    for (short i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) var_0);
        var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))));
        var_26 = ((/* implicit */short) (+(((/* implicit */int) var_6))));
    }
    for (short i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
    {
        arr_37 [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
        var_27 = ((/* implicit */_Bool) var_2);
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0)))))));
    }
    var_29 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
}
