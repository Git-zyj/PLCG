/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1496
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
    var_17 = ((/* implicit */unsigned short) (~(536870911ULL)));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) : (536870908ULL)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) max((17589748080659507775ULL), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) var_16))))))));
        var_20 *= ((/* implicit */short) (signed char)83);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 22; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 - 2] [i_2 - 1])) ? (((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 2] [i_2 - 1])) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 2] [i_2 - 1])))));
                        arr_12 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((min((max((((/* implicit */int) (unsigned char)242)), (-1295735308))), (((var_6) ? (-306182167) : (1295735301))))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 536870911ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5383))) : (18446744073172680689ULL)))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 4; i_4 < 19; i_4 += 1) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4 - 4])) && (((/* implicit */_Bool) ((arr_15 [i_4 - 4]) - (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
        var_23 ^= ((/* implicit */unsigned int) ((((unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (unsigned char)68))))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_17 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned short) 18446744073172680689ULL)), (var_4)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18446744073172680689ULL)) && (((/* implicit */_Bool) arr_2 [i_4 + 2] [i_4])))) ? (((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (arr_4 [i_4] [22LL]) : (((/* implicit */long long int) -1295735299)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5))))))) : (max((((/* implicit */unsigned long long int) (signed char)-83)), (arr_14 [i_4])))));
    }
    var_24 = ((/* implicit */_Bool) 536870891ULL);
    var_25 = ((/* implicit */unsigned short) var_0);
}
