/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107416
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                var_10 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) (signed char)-117)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-60))))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    var_11 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 310136392333711658LL)) ? (2045957015621307915ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65524)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3999960240423793652LL)) ? (((/* implicit */int) (unsigned short)19087)) : (((/* implicit */int) (short)32742))))) : (((unsigned int) (unsigned char)135))));
                    arr_9 [i_1] [(short)2] &= ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */_Bool) (unsigned char)255)) ? (9223372036854775799LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) % (((((/* implicit */_Bool) 9U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) : (9223372036854775807LL))))));
                    var_12 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 1650569385)) ? (2045957015621307915ULL) : (0ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1689518111U)) && (((/* implicit */_Bool) (unsigned char)253)))))))))) != (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) * (0ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)960))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (16400787058088243709ULL)))))));
                }
                arr_10 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)24))) : (max((((((/* implicit */_Bool) -6725674468800663819LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))), (((/* implicit */long long int) (unsigned char)2))))));
            }
        } 
    } 
    var_13 -= ((/* implicit */unsigned short) var_1);
}
