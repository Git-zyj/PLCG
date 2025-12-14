/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111279
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
    var_12 = ((/* implicit */signed char) var_11);
    var_13 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-86))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (signed char)-86))));
        arr_2 [i_0] = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-112)) >= (3932160))))) & ((~(var_8))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) min(((signed char)112), ((signed char)116)))) : (((/* implicit */int) ((_Bool) var_5))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-((-(var_8)))))) & (((unsigned long long int) ((((/* implicit */unsigned long long int) 690946237U)) ^ (0ULL))))));
                        var_16 = ((/* implicit */unsigned int) var_1);
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned short) max((min((6877329976714692098LL), (((/* implicit */long long int) (signed char)118)))), (((/* implicit */long long int) (signed char)111))));
                            arr_13 [(unsigned short)17] [i_3] [(unsigned char)19] [i_3] [i_4] [i_4] [i_4] = ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */int) (unsigned char)16)) : (1065353216)))) | (((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9)))));
                            arr_14 [i_0] [19ULL] [i_2] [i_2] [i_2] = ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (522240U))))) * (((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) var_3))))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            var_18 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) % (var_2)));
                            arr_19 [i_0] [i_0] [(short)6] &= ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-108)) == (((/* implicit */int) var_10)))))) : (var_11)));
                            var_19 -= ((/* implicit */long long int) ((signed char) var_11));
                            arr_20 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned long long int) ((var_2) != (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)50969)))))));
                            arr_21 [i_5] [i_3] [i_5] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_11) <= (((/* implicit */long long int) var_3))))) & (((var_7) | (((/* implicit */int) var_9))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 21; i_6 += 4) 
    {
        var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_8)) : (2305843009213693951LL)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)126)) : (var_7))) : (((/* implicit */int) ((unsigned char) (signed char)-112)))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */int) var_4)) > (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)111))))))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                for (signed char i_9 = 3; i_9 < 19; i_9 += 4) 
                {
                    {
                        arr_34 [i_6 - 1] [(unsigned short)20] [i_6 - 1] [i_9 + 3] &= ((/* implicit */signed char) ((((var_11) - (-1LL))) - (((((/* implicit */long long int) var_3)) + (var_11)))));
                        var_22 ^= ((((((/* implicit */int) var_6)) - (((/* implicit */int) (unsigned short)46509)))) > (((/* implicit */int) ((-6658297804872585907LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)108)))))));
                    }
                } 
            } 
        } 
        arr_35 [i_6] [i_6] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) (unsigned short)46509)) : (((/* implicit */int) var_10)))));
        arr_36 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) >= ((~(((/* implicit */int) (unsigned short)28531))))));
    }
}
