/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104700
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2])))))));
                                var_20 &= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)36766)), (((((/* implicit */int) (unsigned short)59789)) / (((/* implicit */int) (unsigned short)59758))))));
                            }
                        } 
                    } 
                } 
                var_21 = (-(max((((/* implicit */long long int) (unsigned short)28760)), (max((-2936087365567884836LL), (((/* implicit */long long int) (unsigned short)28766)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 3; i_5 < 9; i_5 += 2) 
    {
        for (short i_6 = 3; i_6 < 10; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (unsigned int i_8 = 1; i_8 < 7; i_8 += 1) 
                    {
                        {
                            var_22 &= ((/* implicit */short) ((max((((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_5] [i_5] [i_6] [i_7] [i_8])))))) % ((+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)241))))))));
                            var_23 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((-510551574) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))) ? (((/* implicit */int) max(((unsigned short)5738), (((/* implicit */unsigned short) var_2))))) : (((/* implicit */int) (_Bool)1))))));
                            var_24 = ((/* implicit */short) (!(((max((((/* implicit */long long int) arr_16 [i_5] [i_6 - 3] [i_6 - 3] [i_8 - 1])), (0LL))) > (((/* implicit */long long int) ((/* implicit */int) max(((short)-2), ((short)20863)))))))));
                        }
                    } 
                } 
                var_25 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_17) : (((/* implicit */long long int) var_1))))) ? (16288809894054438960ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_6 - 3] [i_6 - 2] [i_6] [i_5])))))))));
            }
        } 
    } 
    var_26 += var_7;
    /* LoopSeq 1 */
    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
    {
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) arr_22 [i_9])) ? (((/* implicit */int) arr_22 [i_9])) : (((/* implicit */int) arr_22 [i_9])))) : (((/* implicit */int) ((short) max((var_3), (var_8)))))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            for (short i_11 = 1; i_11 < 12; i_11 += 4) 
            {
                {
                    arr_31 [i_9] [i_10] [i_11] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_9] [i_10] [i_10] [i_11 + 1]))) % (4294967292U)))))) ? (((/* implicit */int) min(((signed char)126), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) arr_21 [i_10]))));
                    var_28 -= ((/* implicit */signed char) (short)19177);
                }
            } 
        } 
    }
}
