/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13149
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
    var_20 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((unsigned long long int) max(((short)-2176), (((/* implicit */short) arr_0 [i_0])))));
        var_21 -= ((/* implicit */long long int) (+(min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_22 = ((/* implicit */short) max(((~(7763741610393581466ULL))), (((/* implicit */unsigned long long int) ((arr_1 [i_0]) != (arr_1 [i_0]))))));
        var_23 = var_13;
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_24 = (+(((/* implicit */int) min((arr_4 [i_1]), (arr_4 [i_1])))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_1]) ? (15368978281992786466ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))) ? (((((/* implicit */_Bool) 2794832876549104552LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41079))) : (2794832876549104557LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_2]))) * (arr_7 [i_2] [i_2])));
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 10; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4] [i_2])) ? (((/* implicit */unsigned long long int) arr_7 [i_3] [i_4])) : (arr_1 [i_2])));
                    var_27 = ((/* implicit */unsigned long long int) ((17759306625950428626ULL) != (var_18)));
                    var_28 -= ((/* implicit */unsigned char) ((_Bool) 2794832876549104558LL));
                    var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) 2794832876549104542LL))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    {
                        arr_20 [i_2] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_0 [i_2]))))));
                        var_30 ^= ((/* implicit */short) (+(((unsigned long long int) (_Bool)1))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) 0LL)) == (arr_15 [i_2] [i_2])))))));
        var_32 = ((/* implicit */unsigned long long int) arr_3 [i_2] [i_2]);
    }
    var_33 = ((/* implicit */long long int) var_19);
    var_34 ^= ((/* implicit */long long int) var_9);
}
