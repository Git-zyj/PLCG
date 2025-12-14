/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121795
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
    var_14 = ((/* implicit */short) (_Bool)1);
    var_15 = ((/* implicit */unsigned int) (short)(-32767 - 1));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_11))) + (((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (arr_2 [i_0 - 1]))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned char i_3 = 2; i_3 < 7; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) var_0);
                        var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((long long int) var_6)), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)6441))) : (arr_12 [i_1] [i_2] [(short)0]))) : (((/* implicit */long long int) min(((+(((/* implicit */int) (signed char)-1)))), (((/* implicit */int) (short)-6441)))))));
                        arr_14 [i_2] [i_0] [i_3] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned short) (short)-22648)), ((unsigned short)12732))), (var_10)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            arr_19 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_11))));
            var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (18138520303637919876ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))))));
        }
    }
    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_6))));
        var_21 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_20 [i_5 + 1]))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_2))), (((/* implicit */long long int) min(((short)22651), (((/* implicit */short) (_Bool)1)))))))) ? ((~((~(((/* implicit */int) var_7)))))) : (((/* implicit */int) var_11))));
    }
}
