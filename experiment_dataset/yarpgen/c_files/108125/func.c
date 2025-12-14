/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108125
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
    var_16 = ((/* implicit */int) ((((_Bool) ((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) var_9))));
    var_17 = ((/* implicit */int) (+((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_6)) : (8557488592839563952LL)))))));
    var_18 = 1072693248;
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) * ((+(var_0)))))) ? (((((/* implicit */_Bool) 8033228935037723124LL)) ? (10397415835047734356ULL) : (736522303324795025ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) -8038883054985968057LL)) || (((/* implicit */_Bool) 8284668058904183663ULL))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 15; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) var_13);
                    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)0))));
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        var_22 = ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_3 - 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0])) ? (arr_7 [i_0 - 2] [i_0]) : (arr_7 [i_0 + 1] [i_0])))));
                        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_9)) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)62407)))))));
                        var_24 = ((/* implicit */unsigned long long int) (~(((var_4) * (((/* implicit */int) arr_9 [i_2 - 3]))))));
                        arr_10 [i_0] [i_1] [i_1] [i_0] = (-((+((+(245085340))))));
                    }
                    arr_11 [(short)13] [(short)13] [(short)13] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) ? (1U) : (((/* implicit */unsigned int) -700277054))));
                }
            } 
        } 
    } 
}
