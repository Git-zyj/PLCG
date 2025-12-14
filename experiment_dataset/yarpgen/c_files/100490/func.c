/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100490
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)165)) ? (4672392559286725790LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)81)))))) ? (((((/* implicit */_Bool) 823826327817067217ULL)) ? (8491263771150827489LL) : (((/* implicit */long long int) 2578878741U)))) : (-8491263771150827490LL)));
            var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((8491263771150827503LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8)))))) : (((0ULL) + (((/* implicit */unsigned long long int) 2578878746U))))));
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1716088555U)) ? (-8943841248147203359LL) : (((/* implicit */long long int) 2719126479U))));
            arr_6 [i_0] [i_1] = ((long long int) 1716088555U);
        }
        arr_7 [i_0 - 1] [3] = ((/* implicit */unsigned short) (((+(18446744073709551611ULL))) >= (((/* implicit */unsigned long long int) ((((-8491263771150827489LL) / (-3304389303743935710LL))) >> (((2578878760U) - (2578878708U))))))));
    }
    for (long long int i_2 = 2; i_2 < 12; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */int) (signed char)17)), ((-2147483647 - 1)))));
        arr_12 [i_2] = ((((/* implicit */_Bool) ((short) 2147483647))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)4234)) + (651356739)))) : (max((((/* implicit */long long int) (signed char)-111)), (((7154900845567831878LL) / (-6201220783313143347LL))))));
    }
    var_21 = ((/* implicit */long long int) 2578878741U);
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) (signed char)53)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((1716088537U) ^ (((/* implicit */unsigned int) 7168))))))) : (((((/* implicit */_Bool) var_6)) ? (((1435347498U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76)))))));
}
