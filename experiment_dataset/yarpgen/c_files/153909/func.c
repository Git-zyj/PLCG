/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153909
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
    var_11 = ((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) ((short) var_10))) + (45))));
    var_12 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */short) ((int) 6922470217205100776LL));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (short)-20451))))));
                        var_14 = ((/* implicit */unsigned char) min((((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) (short)-20451)) : (((/* implicit */int) (short)-20451))))), (((/* implicit */unsigned long long int) (short)20450))));
                        var_15 *= ((/* implicit */unsigned short) (+((~(arr_4 [i_0])))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        for (short i_5 = 3; i_5 < 13; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)227))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20450))) : (((unsigned int) arr_16 [8ULL] [8ULL]))))) ? (((unsigned int) ((unsigned long long int) (short)-20451))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))))));
                    var_17 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-20451)) : (((/* implicit */int) var_3))))));
                    var_18 = ((/* implicit */unsigned char) min((((unsigned long long int) ((((/* implicit */_Bool) (short)-20433)) ? (((/* implicit */int) (short)20433)) : (((/* implicit */int) (short)-20433))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)20444)) / (((/* implicit */int) (short)-20442)))))));
                    var_19 *= ((/* implicit */unsigned char) arr_17 [(unsigned short)2]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((((/* implicit */long long int) ((unsigned char) (short)-20428))), (((((/* implicit */_Bool) (short)20441)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20450))) : (var_5)))))));
}
