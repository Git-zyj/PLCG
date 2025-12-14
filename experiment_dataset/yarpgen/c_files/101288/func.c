/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101288
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)16383)) ^ ((~(var_10)))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (signed char)11))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-((~((((_Bool)1) ? (-579756677901814056LL) : (((/* implicit */long long int) -1))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_17 = (signed char)-82;
                                var_18 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */unsigned long long int) 133693440LL)) : (1117103813820416ULL)))));
                            }
                        } 
                    } 
                    var_19 = (-(((29ULL) % (3758113090630551320ULL))));
                }
                var_20 = ((/* implicit */int) (((~((-(1117103813820416ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((((short) ((((/* implicit */_Bool) 3ULL)) ? (2147483647) : (((/* implicit */int) (signed char)112))))), (((/* implicit */short) var_13))));
}
