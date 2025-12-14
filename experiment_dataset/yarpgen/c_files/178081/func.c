/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178081
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
    var_15 = ((/* implicit */unsigned short) var_14);
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) var_14))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_17 ^= ((((/* implicit */_Bool) ((unsigned char) (short)(-32767 - 1)))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */int) (signed char)-46)) : (2147483647))))))) : (((/* implicit */int) var_8)));
                    var_18 += ((/* implicit */_Bool) (short)32766);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_19 ^= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)26995)))))));
                                var_20 += ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0]))))) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (var_9)))), (var_6))) : (((/* implicit */unsigned long long int) min((arr_2 [i_1] [i_2] [i_4]), (((/* implicit */unsigned int) var_5))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_0] [i_3] [i_3] [i_4] [i_4] [i_3]), (arr_10 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0] [i_0])))) ? (min((((/* implicit */int) ((unsigned char) (_Bool)1))), ((-(((/* implicit */int) (unsigned char)8)))))) : ((((_Bool)0) ? (((/* implicit */int) (unsigned short)56864)) : (494012845)))));
                                var_22 = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2] [(unsigned char)10] [i_4]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)29966)) ? (((/* implicit */unsigned long long int) -494012844)) : (((((/* implicit */unsigned long long int) 3756624042U)) % (16911482019287657492ULL)))));
                                arr_18 [i_0] [(short)10] [i_0] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-100))))) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5 + 2]))) : (var_6)))));
                                var_23 = ((/* implicit */unsigned long long int) var_1);
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (-(-6361427101620476092LL)))) ? (((((/* implicit */_Bool) (+(3823942155181814498ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) arr_0 [i_6])) ? (16911482019287657492ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150))))))) : (((/* implicit */unsigned long long int) var_9))));
                                arr_19 [i_2] [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 268435448))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
