/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14165
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_3))))), (max((var_0), (((/* implicit */unsigned long long int) var_15))))))) && (((/* implicit */_Bool) var_2))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_3)) - (1307618989))), (((/* implicit */int) (short)-32755)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14642))) / (var_0))))), (max((min((((/* implicit */unsigned long long int) var_10)), (var_0))), (((/* implicit */unsigned long long int) max(((_Bool)0), ((_Bool)1))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_18 = ((/* implicit */int) var_12);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_19 -= ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) var_12))))) : (var_1));
                    arr_12 [i_2] [i_2 + 1] [i_2] = ((/* implicit */unsigned short) (((_Bool)0) ? (31ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            {
                                arr_20 [i_3] [i_2] [i_3] [i_4] [i_2] [i_5] [i_3] = var_2;
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) * (((/* implicit */int) (short)0))));
                                var_21 += ((/* implicit */int) ((signed char) (signed char)-93));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((11583282723227808053ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7096))))))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_11))) ? (11583282723227808070ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (11583282723227808077ULL)))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) | (((/* implicit */int) var_8)))))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) % (((/* implicit */int) var_5))));
        }
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) == (var_15)))))))));
    }
    var_27 &= ((/* implicit */unsigned int) max((((int) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (((/* implicit */int) var_5))));
}
