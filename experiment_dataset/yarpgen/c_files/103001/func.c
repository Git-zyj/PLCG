/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103001
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
    var_10 = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)190))))), (min((393216U), (((/* implicit */unsigned int) var_5))))))), (min((((/* implicit */long long int) max(((unsigned char)21), ((unsigned char)161)))), (max((((/* implicit */long long int) -779573307)), (var_1)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_11 += ((/* implicit */unsigned char) (-(max((min((((/* implicit */unsigned long long int) (unsigned char)190)), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)58111)) ? (((/* implicit */int) (short)-2558)) : (((/* implicit */int) arr_1 [i_0 + 1])))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_7))));
                            arr_14 [i_3] [i_3] [i_3] = ((/* implicit */int) (-(((((_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) : (min((var_6), (((/* implicit */long long int) arr_5 [i_4] [i_1] [i_1]))))))));
                            arr_15 [i_3] [i_1] = ((/* implicit */unsigned short) var_6);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            var_13 *= ((/* implicit */unsigned char) min((min((var_7), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) arr_8 [i_0 - 2] [i_0 + 1] [i_6]))));
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)68))))) ? (((/* implicit */long long int) ((arr_6 [i_1] [i_5] [(unsigned char)7]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned short)17] [(unsigned short)17] [i_5] [(unsigned char)2] [i_7])))))) : (((var_3) % (var_9))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)213)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_7 [i_0]))))))));
                        }
                    } 
                } 
            } 
        }
        var_15 = max((((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_7 [i_0 - 1]))))), ((+(1334496337040559120LL))));
    }
    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        arr_28 [i_8] [i_8] &= ((/* implicit */long long int) min((181497157U), (((/* implicit */unsigned int) (signed char)-20))));
        var_16 += ((/* implicit */unsigned char) max((((long long int) (~(var_7)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))))))) / ((+(arr_22 [i_8] [i_8] [i_8] [i_8]))))))));
        arr_29 [i_8] = ((/* implicit */unsigned char) min(((+(((long long int) arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))), (((/* implicit */long long int) (unsigned char)65))));
        var_17 += ((/* implicit */unsigned int) var_1);
    }
    var_18 ^= ((/* implicit */short) ((((((/* implicit */_Bool) min(((unsigned char)187), (var_5)))) || (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) max(((unsigned char)213), ((unsigned char)65))))));
}
