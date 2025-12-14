/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143535
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((signed char) var_10)));
                    var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) var_7)) : (arr_4 [i_1])));
                }
            } 
        } 
        arr_9 [2U] &= var_11;
        arr_10 [(_Bool)0] |= ((/* implicit */int) var_3);
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                    var_15 = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0] [(unsigned short)7] [i_4]))));
                }
            } 
        } 
        var_16 = ((/* implicit */short) -424582859866936387LL);
    }
    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) var_8);
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 2; i_7 < 20; i_7 += 4) 
            {
                {
                    var_18 += ((((unsigned int) arr_16 [i_7] [i_7 + 2])) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)40011))))) || (max(((_Bool)1), ((_Bool)0))))))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((int) 32767U)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) 241946851))));
            var_21 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 7668289912034352590ULL)) || ((_Bool)0)))) < (((/* implicit */int) ((signed char) var_6)))));
        }
        var_22 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_2))))) ? (arr_23 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) >= (arr_22 [i_5] [i_5] [16])))))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (arr_5 [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_26 [i_9] [i_9]))));
    }
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (-(var_11)))), (var_10))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
}
