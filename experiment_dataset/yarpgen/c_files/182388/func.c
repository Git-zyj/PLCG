/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182388
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57303)))))));
                arr_8 [(signed char)0] [i_1] [i_1] &= ((/* implicit */short) var_10);
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) var_5);
        arr_13 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)4023)) >> (((((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (6727260202105410838LL)))));
    }
    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (long long int i_5 = 4; i_5 < 21; i_5 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((short) (+(((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57303))))))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(5708485365420569981LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -4665169357040950248LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))))) : (((/* implicit */int) var_2))));
                        var_14 = ((/* implicit */long long int) max((var_14), (min((1150669704793161728LL), (-1140674438740259394LL)))));
                        var_15 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_0))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -2208435385998556527LL)))))))) : (min(((+(var_5))), (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))))));
                    }
                    arr_24 [i_3] [i_4] [i_4] [(signed char)4] = ((/* implicit */unsigned short) var_8);
                }
            } 
        } 
        var_16 += ((/* implicit */signed char) min(((!(((/* implicit */_Bool) var_11)))), ((!(((/* implicit */_Bool) min((var_0), ((short)-28432))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_7 = 1; i_7 < 23; i_7 += 4) 
        {
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((long long int) var_2)))));
            var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) 1150669704793161728LL)) ? (((/* implicit */int) (unsigned short)61535)) : (((/* implicit */int) (signed char)-40)))))));
        }
        for (unsigned short i_8 = 4; i_8 < 23; i_8 += 4) 
        {
            var_20 = min((min((((((/* implicit */_Bool) (unsigned short)41499)) ? (-7923774972347803392LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (min((((/* implicit */long long int) (signed char)-44)), (-1150669704793161728LL))))), (((/* implicit */long long int) var_9)));
            /* LoopSeq 1 */
            for (short i_9 = 3; i_9 < 22; i_9 += 4) 
            {
                arr_32 [i_9] = ((/* implicit */long long int) min((min((((short) var_11)), (((/* implicit */short) var_8)))), (((short) var_4))));
                var_21 *= ((/* implicit */signed char) (-(min((((/* implicit */long long int) ((signed char) var_9))), (min((965356006072430363LL), (((/* implicit */long long int) var_11))))))));
            }
        }
        for (unsigned short i_10 = 1; i_10 < 21; i_10 += 4) 
        {
            arr_37 [i_3] [i_3] [i_3] = min(((~(var_5))), (((/* implicit */long long int) ((short) var_0))));
            var_22 ^= ((/* implicit */short) (-((-(((/* implicit */int) (unsigned short)57290))))));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) 9223372036854775807LL))));
            arr_38 [13LL] [i_10 - 1] [i_10] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (signed char)16)))))));
            var_24 = ((/* implicit */unsigned short) min((((signed char) (-(((/* implicit */int) var_2))))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_11)))))));
        }
    }
    for (long long int i_11 = 0; i_11 < 15; i_11 += 4) 
    {
        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)31)) + ((~(((/* implicit */int) (signed char)39)))))))));
        var_26 = ((/* implicit */signed char) 6471601974764367806LL);
    }
    /* LoopSeq 1 */
    for (signed char i_12 = 0; i_12 < 15; i_12 += 4) 
    {
        var_27 = ((/* implicit */short) ((long long int) -6471601974764367807LL));
        arr_43 [i_12] = ((/* implicit */long long int) var_4);
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) (unsigned short)59505)) - (59493)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) : ((+(var_5)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) >> (((((((long long int) (-9223372036854775807LL - 1LL))) - (-9223372036854775807LL))) + (19LL))))) : ((+(((/* implicit */int) ((unsigned short) var_0))))))))));
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (+(((/* implicit */int) min((min((var_8), (var_7))), ((signed char)-25)))))))));
    }
}
