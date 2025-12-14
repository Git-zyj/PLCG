/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176028
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_17 *= ((/* implicit */unsigned char) max((9839439436025131828ULL), (((/* implicit */unsigned long long int) arr_2 [(signed char)7] [i_1]))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) (unsigned char)201)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((int) arr_7 [i_2 + 2])))));
        var_19 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-1))));
        /* LoopNest 3 */
        for (long long int i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            for (int i_4 = 1; i_4 < 18; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_5])))))));
                        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_3 + 1] [i_4 - 1] [i_2 - 1]))));
                        var_22 = ((/* implicit */long long int) arr_8 [i_2]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                for (signed char i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) arr_7 [i_8 + 1]);
                        arr_24 [i_2] [i_7] [i_6] [i_2] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_9))))));
                        arr_25 [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)148))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */signed char) (+(-926394278)));
    }
    var_25 ^= ((/* implicit */signed char) min(((unsigned char)96), ((unsigned char)153)));
    var_26 += ((/* implicit */long long int) var_16);
    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((unsigned int) (+(var_4)))))));
}
