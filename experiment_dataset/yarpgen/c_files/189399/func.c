/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189399
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) || (((/* implicit */_Bool) var_0))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((signed char) min((arr_7 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1]), (arr_7 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]))));
                    var_20 ^= ((/* implicit */unsigned short) (((+(max((arr_3 [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)62755)))))) * (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_2 - 1])) / (((/* implicit */int) (short)28472)))))));
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */_Bool) ((unsigned int) 4053355738U));
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned short) max((((/* implicit */short) ((signed char) arr_10 [i_3 - 1]))), (((short) min((arr_8 [i_3]), (((/* implicit */unsigned long long int) (signed char)33)))))));
                var_23 = ((/* implicit */unsigned short) min((1152921504606846976ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [i_3 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_10 [i_3 - 1])) + (13195))) - (9))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_24 = (!(((/* implicit */_Bool) max((-72057594037927936LL), (((long long int) (signed char)127))))));
        var_25 -= ((/* implicit */int) ((unsigned short) (~((-(((/* implicit */int) arr_0 [i_5])))))));
        var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_5]))), (((unsigned long long int) (signed char)77))))) || (((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned int) arr_5 [(unsigned short)4] [(unsigned short)4])), (arr_4 [i_5])))))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_19 [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) (short)8128))));
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) arr_17 [(signed char)0]))));
        var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)17))));
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) -3))));
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        var_30 -= ((/* implicit */short) 8817095073711778295ULL);
        var_31 ^= ((/* implicit */unsigned short) (~((~(9495835433176343980ULL)))));
    }
    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        var_32 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) ((unsigned int) 18446744073709551615ULL))))));
        var_33 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)37234)) <= (((/* implicit */int) arr_22 [i_8] [i_8])))))));
    }
}
