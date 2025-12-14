/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139550
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned short)62965), (((/* implicit */unsigned short) var_9)))))))) : (((unsigned long long int) ((((/* implicit */int) (short)-5127)) - (((/* implicit */int) (unsigned short)62955)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */int) (unsigned short)2565);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62965)) ? (11447317223306687677ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
                        var_13 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_8 [i_3 - 1] [11U])) / (((/* implicit */int) (short)-5132))))));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            {
                                var_14 = max((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)25392))))), (((((/* implicit */_Bool) 1728638069U)) ? (11447317223306687677ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2565))))))), (((/* implicit */unsigned long long int) (~(-1423823512)))));
                                arr_19 [i_0] [i_1 - 1] [i_2] [i_0] [5ULL] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) (unsigned char)49)), ((~(arr_6 [i_0] [i_1] [i_2] [i_4])))))));
                                var_15 = ((/* implicit */short) (~(min((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned short)62980)) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) (short)-5117)) ? (1525443198) : (((/* implicit */int) (unsigned char)221))))))));
                            }
                        } 
                    } 
                    var_16 = ((((6999426850402863962ULL) | (9858713149250969552ULL))) <= (((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) var_5)))))));
                    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_8 [i_0 - 2] [i_0 - 1]), (arr_8 [i_0 - 3] [i_1 - 1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        for (short i_7 = 3; i_7 < 12; i_7 += 3) 
        {
            {
                arr_24 [i_6] = ((/* implicit */long long int) ((3884113767334598663ULL) * (((/* implicit */unsigned long long int) -784957501))));
                arr_25 [i_6] = ((/* implicit */_Bool) min((784957479), (((/* implicit */int) (short)4004))));
                var_18 = ((/* implicit */unsigned short) (_Bool)1);
                /* LoopNest 3 */
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    for (unsigned int i_9 = 2; i_9 < 14; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            {
                                arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (-(max((((/* implicit */int) (unsigned short)62972)), ((~(((/* implicit */int) (unsigned char)255))))))));
                                arr_34 [2ULL] [i_7] [2ULL] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -784957501)) ? (3578967048U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23522)))))) && (((/* implicit */_Bool) (unsigned char)101))))) / (min((((/* implicit */int) (_Bool)1)), (784957527)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
