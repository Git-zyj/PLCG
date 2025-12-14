/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137772
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) (-((~(var_2)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_18 = arr_1 [i_0] [i_0];
                        arr_8 [i_0 - 2] [i_0 - 1] [i_2] [i_0] [i_1] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                    }
                } 
            } 
        } 
        var_19 *= ((/* implicit */unsigned int) var_10);
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        arr_12 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-51))) + (-5459699134161819115LL)));
        var_20 = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (12006457751085368678ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                for (unsigned int i_7 = 1; i_7 < 12; i_7 += 1) 
                {
                    {
                        arr_20 [i_4] [i_5] [i_5] [i_7] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1610612736)) ? (((/* implicit */int) (unsigned char)1)) : (-1360156001)));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_19 [i_7] [i_5] [i_6] [i_6] [0U]))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((int) 3971723316939784906ULL)))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4] [i_4] [(unsigned char)10])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)113)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) : (arr_7 [i_4] [i_4] [(unsigned short)6])));
    }
    var_24 = ((/* implicit */signed char) 4294967284U);
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (~(var_15))))));
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_5)))) & (((/* implicit */int) (unsigned char)181))))) ? ((-(((var_15) ^ (var_1))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-(var_11))))))));
}
