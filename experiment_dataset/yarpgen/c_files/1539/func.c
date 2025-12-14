/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1539
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_10))));
    var_13 = ((/* implicit */unsigned char) var_9);
    var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_1)) ? (((int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) 2320261257717842281LL)) || (((/* implicit */_Bool) -2320261257717842271LL)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((var_0), (var_0)))))) ? (max(((+(((/* implicit */int) arr_1 [i_0 + 1])))), (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 4])))) << (((max((((/* implicit */long long int) arr_2 [i_0 - 2])), (-2320261257717842296LL))) + (57LL)))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_17 = min((((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_1 [i_1])))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_1])), (var_4))))))), (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)151))))), (((((/* implicit */_Bool) arr_5 [(unsigned short)3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) : (8809540955663048728LL))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                {
                    var_18 |= ((/* implicit */int) ((((-1LL) + (9223372036854775807LL))) << (((((min(((~(var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned char)251))))))) + (30LL))) - (11LL)))));
                    var_19 = ((/* implicit */signed char) (+(-2320261257717842281LL)));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (((/* implicit */int) (unsigned short)64776)) : (((/* implicit */int) (unsigned char)147))))) || (((/* implicit */_Bool) ((long long int) arr_4 [i_3] [i_1])))));
                    var_21 = max((max(((~(var_8))), (((/* implicit */long long int) arr_5 [i_3])))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_4)) : (var_6)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) 2383581412U)))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 1) 
    {
        var_23 = ((/* implicit */signed char) ((1615540557914800889LL) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 + 3])))));
        arr_12 [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_9 [i_4 + 2] [i_4 + 1]))));
        var_24 ^= ((/* implicit */int) (unsigned short)733);
    }
}
