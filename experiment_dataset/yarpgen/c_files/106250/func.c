/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106250
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
    var_15 = ((/* implicit */signed char) ((((((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned char)31)) * (((/* implicit */int) (unsigned char)225)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))))));
    var_16 += ((/* implicit */unsigned short) ((((((((/* implicit */int) var_5)) ^ (var_12))) / (((var_8) - (((/* implicit */int) var_2)))))) / (((/* implicit */int) (!(((((/* implicit */int) (signed char)86)) < (((/* implicit */int) (signed char)-1)))))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        arr_12 [i_3] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (((/* implicit */int) var_7)))) / (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) (((-(var_8))) + (((((/* implicit */_Bool) var_7)) ? (var_12) : (var_8)))))) : (((((/* implicit */_Bool) 549755813887ULL)) ? (-7044662604466788721LL) : (1504183440888378837LL)))));
                        arr_13 [i_0] [i_3] [i_3] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */int) (unsigned short)29725)) << (((((/* implicit */int) (unsigned char)214)) - (198))))) : (max((var_8), (var_12))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_10)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                        var_17 ^= ((/* implicit */int) (+((~(min((var_0), (((/* implicit */unsigned int) var_11))))))));
                        arr_14 [i_0] [i_1] [i_2] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)40659), ((unsigned short)33542))))) + ((-(9223372036854775795LL))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)1))))) ? (max((var_1), (((/* implicit */long long int) var_2)))) : (var_1)))));
                        arr_15 [i_3] [i_3] [i_2] [i_3 + 1] = ((/* implicit */short) min((((/* implicit */int) var_4)), ((~(min((((/* implicit */int) var_13)), (var_8)))))));
                    }
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) 3401331271453533977LL))) && (((((/* implicit */_Bool) var_7)) || (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_0))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) min((var_11), (var_6)))) + (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_3)))))))) ? (((long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_4))))) : (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_13))))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (var_14))))));
}
