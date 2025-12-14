/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104455
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_18 ^= ((/* implicit */int) max((min((max((((/* implicit */unsigned long long int) 0U)), (18446744073709551611ULL))), (((/* implicit */unsigned long long int) (unsigned char)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13513598706811450526ULL)) ? (min((2405572677U), (((/* implicit */unsigned int) (short)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-19481), (((/* implicit */short) (unsigned char)239)))))))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min(((unsigned char)237), ((unsigned char)0)))), (min((max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (2419330536024293069ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)237))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((1), (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) (short)10))))))), (((((/* implicit */_Bool) min(((unsigned char)156), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */_Bool) -9149388136676606093LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))) : (3048342330315722929ULL))) : (((/* implicit */unsigned long long int) min((1729382256910270464LL), (((/* implicit */long long int) (short)12288)))))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)245)), (min((3725905729225693056ULL), (((/* implicit */unsigned long long int) (short)-18138))))))) ? (min((max((1347179672365336072ULL), (((/* implicit */unsigned long long int) (unsigned char)253)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (4294967277U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13)))))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)243)), (1997422417)))), (min((((/* implicit */unsigned long long int) (signed char)-125)), (14814259532045553068ULL)))))));
}
