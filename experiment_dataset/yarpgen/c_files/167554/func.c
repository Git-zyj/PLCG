/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167554
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 10; i_2 += 3) 
            {
                {
                    var_13 *= ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) (short)2850)))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((unsigned char) (-(var_11))));
                    arr_9 [i_0] [i_1] [6] [i_1] = (~(((((((/* implicit */long long int) ((/* implicit */int) var_7))) / (-1LL))) / ((~(-2643102149551801611LL))))));
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */long long int) ((int) 0LL));
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 23; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            {
                arr_15 [(unsigned char)12] [i_3] = ((/* implicit */short) (+((~(((1035838781U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148)))))))));
                arr_16 [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -3LL))))) + (((/* implicit */int) var_3))));
                var_15 = ((/* implicit */signed char) ((((long long int) var_9)) == (((/* implicit */long long int) ((((/* implicit */int) var_0)) % ((-(((/* implicit */int) (short)32745)))))))));
                var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (1535677625) : (((/* implicit */int) var_8))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((-((+(((/* implicit */int) (unsigned short)34318)))))) : ((+(((/* implicit */int) (short)-17486))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_7);
}
