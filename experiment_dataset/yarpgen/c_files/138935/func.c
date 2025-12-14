/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138935
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_13))));
    var_21 = ((/* implicit */long long int) ((_Bool) var_15));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_18))))) - (((/* implicit */int) ((signed char) var_19))))))));
        var_23 = ((/* implicit */long long int) ((short) ((unsigned int) ((((/* implicit */long long int) var_11)) < (var_0)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-39))) > ((-9223372036854775807LL - 1LL))));
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((unsigned long long int) ((_Bool) ((int) var_12)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 14; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            var_26 |= ((/* implicit */int) var_3);
                            var_27 ^= ((/* implicit */short) ((var_0) ^ (((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_7)))))));
                        }
                        var_28 = var_9;
                    }
                } 
            } 
        }
    }
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 3) 
        {
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) (~(var_6))))))))));
            var_30 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
            var_31 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((var_15) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))))));
        }
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_17))))) + (((long long int) ((long long int) var_4))))))));
        var_33 = ((/* implicit */unsigned char) (-(var_8)));
        var_34 = ((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_18))) - (var_0))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_19)))))));
    }
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
    {
        var_35 += ((/* implicit */_Bool) var_2);
        var_36 *= ((/* implicit */long long int) ((var_0) < (((/* implicit */long long int) ((((unsigned int) var_12)) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
    }
}
