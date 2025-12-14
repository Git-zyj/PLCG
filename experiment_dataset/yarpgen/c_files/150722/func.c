/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150722
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((min((((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_0))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (3623029677714440420LL))))) * (((/* implicit */long long int) ((((((/* implicit */int) var_9)) / (((/* implicit */int) var_1)))) / (((/* implicit */int) var_10)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_14)) - (((/* implicit */int) var_2)))) - (((((/* implicit */int) var_1)) + (((/* implicit */int) var_13))))));
                        arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) ((_Bool) var_12)))))));
                        arr_13 [i_0] [i_1] [i_0] [i_2] [i_3] = ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_10))))) : ((~(((/* implicit */int) var_13))))));
                        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */signed char) var_2)), (var_7)))) - (((/* implicit */int) ((_Bool) ((var_8) << (((((/* implicit */int) var_6)) - (205)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_24 [i_0] [i_4] [i_4] [i_6] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_12)))));
                                arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-26739)) < (((/* implicit */int) (unsigned short)3840))));
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_5)))) * ((+(((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_8))))));
                }
            } 
        } 
    }
}
