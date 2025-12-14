/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154795
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
    var_15 = ((/* implicit */short) ((unsigned long long int) (((+(((/* implicit */int) (unsigned char)18)))) * (((/* implicit */int) var_8)))));
    var_16 -= ((/* implicit */short) min((min((min((var_12), (var_12))), (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) (unsigned short)2239)) : (((/* implicit */int) var_11))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)197), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            arr_7 [i_0 - 1] = ((/* implicit */unsigned short) ((var_12) % (var_12)));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (var_7)))) < (var_13))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((1152921504598458368LL) <= (((/* implicit */long long int) 414592273U))))) * (((/* implicit */int) ((((/* implicit */int) (short)-3617)) < (((/* implicit */int) (unsigned char)197)))))));
                arr_10 [i_2 + 1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) var_1);
            }
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) var_10)) <= (((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (unsigned short)65535)))))))));
            var_20 = ((var_2) ? (((/* implicit */unsigned long long int) var_0)) : (var_3));
        }
        /* vectorizable */
        for (long long int i_4 = 2; i_4 < 12; i_4 += 2) 
        {
            var_21 ^= ((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) ((unsigned short) (unsigned short)34841))) : (((/* implicit */int) ((short) var_11)))));
            arr_16 [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) (short)32767)))));
        }
        for (signed char i_5 = 3; i_5 < 10; i_5 += 2) 
        {
            arr_19 [i_0] [(unsigned char)9] [(short)10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((long long int) ((long long int) (unsigned char)197)))) <= (var_3)));
            var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) min((var_10), (((/* implicit */unsigned short) var_7)))))) ? ((-(((/* implicit */int) min(((short)-3615), (((/* implicit */short) var_1))))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned char)152))))))));
            var_23 = ((/* implicit */long long int) var_1);
            var_24 = ((/* implicit */unsigned char) ((min((var_12), (((/* implicit */long long int) var_4)))) < (9027878387799116278LL)));
        }
        arr_20 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_2)))) : (((((/* implicit */_Bool) (short)29095)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_12)))));
        var_25 = ((/* implicit */long long int) ((signed char) ((_Bool) var_2)));
        arr_21 [(_Bool)1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) min((var_9), (var_9))))) ? (min((min((4467281980088368889LL), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (unsigned short)1)))) : (((long long int) min((((/* implicit */unsigned int) (unsigned char)241)), (2113794099U))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_8))));
        arr_24 [i_6] = ((_Bool) (signed char)-57);
    }
    var_27 = ((((/* implicit */_Bool) ((((/* implicit */long long int) min((((/* implicit */int) (short)1)), (var_13)))) / ((+(-8576350579052220571LL)))))) ? (((((/* implicit */int) (short)-27025)) + (((/* implicit */int) ((_Bool) var_0))))) : (((/* implicit */int) ((((/* implicit */int) ((short) var_8))) != (((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))));
    var_28 = ((unsigned char) min((((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)130))))));
}
