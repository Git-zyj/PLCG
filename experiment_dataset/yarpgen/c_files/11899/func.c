/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11899
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((var_3), (((/* implicit */unsigned int) (short)-8939))))))) : ((~(var_11)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        var_13 += ((/* implicit */unsigned int) (~(((/* implicit */int) max((var_5), (((/* implicit */short) ((unsigned char) 293334549U))))))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) arr_2 [i_0] [i_0])))) <= ((-(arr_0 [i_0] [i_0]))))))) | (((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) < (2437883792U))) ? (((/* implicit */unsigned int) arr_4 [i_1 + 1] [i_2 - 2])) : (3361579583U)))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_9 [i_0] [i_0])))))))) : (((((/* implicit */_Bool) -514356287)) ? (min((var_9), (((/* implicit */long long int) var_5)))) : (max((4194303LL), (var_7)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)211))));
                                arr_17 [i_0 - 1] [i_0 - 1] [i_2] [i_2] [i_1] = max(((-(4294967295U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0 - 3]))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) (!(((5204723634019015882ULL) >= (((/* implicit */unsigned long long int) ((860838148U) << (((var_9) + (6562585776340719474LL))))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    {
                        arr_29 [i_0] [i_5] [i_7] [i_6] [i_5] = ((((/* implicit */_Bool) 3434129152U)) ? (4906377816742946724ULL) : (18446744073709551610ULL));
                        var_17 = ((/* implicit */unsigned long long int) var_4);
                        var_18 ^= ((/* implicit */unsigned long long int) min((((((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_7))), (((long long int) var_0))));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) < (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_9)))))));
}
