/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145848
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
    var_13 = ((/* implicit */unsigned long long int) var_10);
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 8191ULL)) ? (13922305264118000124ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */int) var_0)) : (var_1)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [22LL] [i_0] [i_0] = max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) (short)-13313)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)57395))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) (~(arr_1 [i_0])));
                var_15 = ((/* implicit */unsigned char) arr_1 [i_0]);
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [14ULL] [i_0])) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) (unsigned short)37683)) : (((/* implicit */int) (_Bool)1))))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_2 [(unsigned short)5])) ? (arr_3 [i_1] [i_1] [i_0]) : (arr_3 [i_1] [i_1] [i_0]))) : ((~(arr_3 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(((int) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (unsigned short)0)) : (-134217728)))))))));
                var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_10 [23ULL] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-7026583511936709654LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_2] [i_2]))) : (var_8))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) 134217757)))))) : ((+((((_Bool)1) ? (9437565478442263752ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2])))))))));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((short) arr_12 [i_2])))));
            }
        } 
    } 
}
