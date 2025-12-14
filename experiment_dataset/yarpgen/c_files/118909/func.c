/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118909
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) (((!((_Bool)0))) ? (max((((/* implicit */unsigned long long int) (unsigned short)6480)), ((~(18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_14))))), (((((/* implicit */int) var_14)) - (((/* implicit */int) var_15)))))))));
                            var_17 = max((((-819571539) | (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_3)) ? (var_7) : (var_7))));
                        }
                    } 
                } 
                var_18 -= ((/* implicit */unsigned long long int) (-(((((((/* implicit */int) arr_7 [i_1])) <= (((/* implicit */int) var_11)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1])), (var_1)))) : (((((/* implicit */_Bool) -1633731331)) ? (var_16) : (var_0)))))));
                arr_12 [i_1] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) var_6))), (9860278842254038188ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (short)2578))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6487)))))))) : (min(((-(var_16))), (((/* implicit */unsigned int) var_4))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        for (unsigned char i_5 = 4; i_5 < 22; i_5 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_15))))) : (18446744073709551613ULL))) >= (((/* implicit */unsigned long long int) -7122875607941577710LL))));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    for (unsigned char i_7 = 2; i_7 < 21; i_7 += 2) 
                    {
                        {
                            var_20 *= ((/* implicit */signed char) var_13);
                            var_21 &= ((/* implicit */int) ((min((arr_19 [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) (short)-11426)))) == (((/* implicit */unsigned int) ((/* implicit */int) (short)63)))));
                            arr_24 [i_4] [i_5] [i_6] [i_6] [i_7] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_4] [i_5 + 1]))));
                            var_22 = ((/* implicit */_Bool) var_15);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_4);
}
