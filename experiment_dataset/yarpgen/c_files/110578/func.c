/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110578
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
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2147483647))));
    var_18 = ((/* implicit */signed char) (((~(2147483647))) ^ (((/* implicit */int) (_Bool)1))));
    var_19 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
    var_20 = ((/* implicit */short) max((var_3), (((/* implicit */long long int) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)1)))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((short) var_15)))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((short) (+(((/* implicit */int) (unsigned short)65024))));
    }
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0))))) ? (max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) (short)32767)))));
        arr_14 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (3U)));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (short i_6 = 3; i_6 < 10; i_6 += 2) 
            {
                for (unsigned short i_7 = 1; i_7 < 8; i_7 += 2) 
                {
                    {
                        var_24 = ((/* implicit */short) var_7);
                        arr_24 [i_7] [i_7] [i_6] [i_6] [i_5] [i_4] = ((/* implicit */_Bool) 8192U);
                        arr_25 [i_4] [i_4] [i_4] [i_6] [i_7 - 1] = ((/* implicit */signed char) max((8180U), (((/* implicit */unsigned int) (_Bool)1))));
                    }
                } 
            } 
        } 
        var_25 = var_0;
        arr_26 [i_4] = ((/* implicit */short) var_1);
    }
}
