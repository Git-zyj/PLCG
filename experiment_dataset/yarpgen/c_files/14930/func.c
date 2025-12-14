/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14930
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_13 *= ((/* implicit */_Bool) (-(((/* implicit */int) (short)-7378))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) ^ (((long long int) var_7))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (int i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                {
                    arr_11 [i_1] [i_1 + 3] [2ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-1588641460772975511LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    var_14 ^= ((/* implicit */int) (~(2509271937646958162ULL)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            for (unsigned char i_5 = 2; i_5 < 13; i_5 += 3) 
            {
                {
                    var_15 += ((/* implicit */unsigned int) ((short) var_1));
                    var_16 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 5460127455909937074LL))));
                    arr_16 [i_1] &= ((/* implicit */_Bool) ((unsigned char) var_12));
                    var_17 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (var_12)));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        for (short i_7 = 1; i_7 < 23; i_7 += 1) 
        {
            for (long long int i_8 = 1; i_8 < 22; i_8 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-39)))) << (((((/* implicit */int) var_11)) + (30029))))))));
                    var_20 *= ((/* implicit */signed char) (-((+(-1588641460772975511LL)))));
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */unsigned int) var_2);
    var_22 += ((/* implicit */unsigned long long int) -262717621);
}
