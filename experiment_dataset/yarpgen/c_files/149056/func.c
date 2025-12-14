/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149056
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
    var_12 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                arr_7 [(unsigned char)12] [i_0] [(unsigned char)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)58648)) ? (1046265875U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2825)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_2] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) var_5)))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_10 [i_4] [(signed char)3] [i_4]))) ? ((+((~(-1695250128))))) : (((/* implicit */int) ((arr_12 [i_2] [i_2]) != (min((arr_12 [i_4] [i_2]), (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2])))))))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_10 [i_4] [16LL] [i_2]))));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)127)))))));
    }
    var_17 = ((/* implicit */unsigned char) max((var_17), (var_5)));
}
