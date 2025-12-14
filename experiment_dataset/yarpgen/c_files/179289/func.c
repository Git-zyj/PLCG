/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179289
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-20))))), (7429324795113325926LL))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)0)))) - ((+(((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) (+(-1509593060)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19))) : (((unsigned long long int) -1509593088)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_3] [i_3]))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) arr_11 [(signed char)3] [i_1] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)20))) : (var_6))))))));
                        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1509593030)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1] [i_2] [i_2])) ? (1509593059) : (((/* implicit */int) (short)-6901)))) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1])))) ^ (((((/* implicit */_Bool) -1509593088)) ? (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)29))))) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (-1509593088)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) (signed char)4);
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)59501)) ? (-15LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-104)) < ((-(((/* implicit */int) (signed char)36))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */long long int) ((unsigned long long int) var_10));
                        arr_20 [i_0] [i_2] = ((/* implicit */_Bool) (signed char)120);
                    }
                    var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 721785212090868343LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) arr_16 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) var_8)) + (((/* implicit */int) arr_9 [(signed char)3] [i_0] [(unsigned char)4] [i_2])))), (((var_0) ? (1509593088) : (((/* implicit */int) var_7))))))) ? ((-(((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) arr_14 [i_0] [i_0] [(signed char)6] [i_0])))))) : (((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) (signed char)-92);
}
