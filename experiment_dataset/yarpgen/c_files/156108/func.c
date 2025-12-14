/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156108
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) + (((/* implicit */int) arr_2 [(signed char)10] [(signed char)10]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (161871631240740442LL)))) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-23833)) >= (((/* implicit */int) arr_1 [i_0] [(unsigned char)2])))) ? (((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_4 [i_0] [i_1])))) : (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned long long int) (-(-1078864944)))), (13851254582913687851ULL)))))));
                arr_5 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] = ((max((((/* implicit */long long int) (_Bool)1)), (((1139219724770654288LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) | (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (8119098712211613828LL))));
                arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_2 [(unsigned char)3] [i_0])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 2]))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)105), ((signed char)79))))) ^ (((((/* implicit */_Bool) 31ULL)) ? (18274549060637450837ULL) : (((/* implicit */unsigned long long int) -1136422310))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (((((_Bool)1) || (((/* implicit */_Bool) 134217727ULL)))) ? (((/* implicit */int) ((max((((/* implicit */long long int) -1338204518)), (var_0))) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-120)))))) : (var_4)));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (18446744073709551585ULL) : (var_16))))) ? (var_3) : (((/* implicit */long long int) min((((/* implicit */int) (signed char)4)), (((-1869349625) - (((/* implicit */int) (signed char)-7)))))))));
}
