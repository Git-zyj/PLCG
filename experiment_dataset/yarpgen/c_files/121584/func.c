/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121584
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned short) (signed char)-124))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)0] [i_2]))))) : (((/* implicit */int) var_14))))) ? (((((/* implicit */int) arr_2 [i_0] [i_0])) << ((-(((/* implicit */int) var_4)))))) : (min((((((/* implicit */_Bool) (unsigned short)54930)) ? (((/* implicit */int) (short)-22976)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-22986)) : (((/* implicit */int) var_6)))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        var_17 = ((short) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))));
                        arr_9 [(unsigned char)14] [i_2] [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) var_10)))));
                        var_18 = (((~(max((((/* implicit */int) var_16)), (var_15))))) % (((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_2 + 2] [i_3 + 1]))));
                    }
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((536870912) < (((/* implicit */int) (short)22990)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((int) (((+(((/* implicit */int) (short)22965)))) + (((/* implicit */int) (short)27550)))));
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_1)) >= (((/* implicit */int) var_0)))) ? (((/* implicit */int) max((((/* implicit */short) ((unsigned char) (unsigned char)142))), (min(((short)-22976), (((/* implicit */short) var_7))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -536870908)) ? (((/* implicit */int) (short)19749)) : (-1748588619)))) && (((/* implicit */_Bool) ((unsigned char) var_1))))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            {
                arr_16 [i_4] [i_4] = ((/* implicit */unsigned char) ((((int) ((((/* implicit */_Bool) arr_13 [i_4])) && (((/* implicit */_Bool) arr_2 [(signed char)20] [(signed char)20]))))) - (((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_10))) >= ((-(-1748588611))))))));
                arr_17 [i_4] [i_4] = ((/* implicit */signed char) (((~(arr_12 [i_4]))) != (((/* implicit */int) (unsigned char)228))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_6 = 2; i_6 < 21; i_6 += 3) 
    {
        arr_21 [i_6] = ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((1723232221) >> (((((/* implicit */int) (short)-18516)) + (18547))))))) << (((max((((((/* implicit */_Bool) 1887332697)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))), (max((-1748588619), (var_15))))) - (761488372))));
        var_22 = ((/* implicit */signed char) arr_19 [i_6]);
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        var_23 = ((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_6))));
        arr_24 [i_7] [i_7] &= ((/* implicit */unsigned char) (~((+(((/* implicit */int) (unsigned char)144))))));
        /* LoopNest 3 */
        for (int i_8 = 4; i_8 < 16; i_8 += 3) 
        {
            for (unsigned char i_9 = 1; i_9 < 15; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            arr_34 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)112)) >= (((/* implicit */int) (short)8325)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_30 [i_9] [i_11])))))));
                            arr_35 [i_7] [i_8] [i_9] [i_8] [i_11] = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_12)) >> (((/* implicit */int) var_1))))));
                        }
                        var_24 = ((/* implicit */unsigned char) min((var_24), ((unsigned char)187)));
                        arr_36 [i_8] [i_9] [i_10] &= ((int) var_14);
                    }
                } 
            } 
        } 
    }
}
