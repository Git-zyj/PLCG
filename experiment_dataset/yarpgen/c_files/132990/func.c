/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132990
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
    var_18 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        var_19 += (unsigned short)12139;
        arr_2 [i_0] [16U] = ((/* implicit */unsigned char) (_Bool)1);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_20 -= ((/* implicit */long long int) (unsigned char)253);
            var_21 &= ((/* implicit */long long int) (unsigned short)65523);
            var_22 -= ((/* implicit */unsigned short) (_Bool)1);
        }
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) (_Bool)1);
        var_24 *= (unsigned short)0;
    }
    for (unsigned char i_3 = 3; i_3 < 16; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (unsigned char i_6 = 3; i_6 < 15; i_6 += 4) 
                {
                    {
                        arr_23 [i_3] = ((/* implicit */unsigned int) -17LL);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            arr_27 [i_3] [i_4] [i_5] [i_7] [i_3] = ((/* implicit */unsigned char) (signed char)77);
                            var_25 = ((/* implicit */unsigned int) -5LL);
                            arr_28 [i_3] = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                            var_26 |= ((/* implicit */long long int) (unsigned short)21814);
                        }
                        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) -5536590100765777294LL))));
                            arr_31 [i_3] = ((/* implicit */unsigned int) (signed char)7);
                            arr_32 [i_3] [i_3] = ((/* implicit */unsigned int) (_Bool)1);
                        }
                        /* LoopSeq 3 */
                        for (int i_9 = 3; i_9 < 15; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */signed char) (_Bool)1);
                            arr_35 [i_9] [i_3] [i_5] [i_6] [i_3] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        for (unsigned int i_10 = 4; i_10 < 16; i_10 += 4) 
                        {
                            arr_40 [i_3] = ((/* implicit */short) (_Bool)1);
                            arr_41 [i_3] [i_3] = (unsigned char)227;
                            arr_42 [i_3] [i_4] [i_5] [i_5] [(_Bool)1] [i_3] &= ((/* implicit */unsigned short) (unsigned char)255);
                            var_29 -= (signed char)0;
                        }
                        /* vectorizable */
                        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            var_30 = ((/* implicit */_Bool) 5536590100765777294LL);
                            arr_45 [i_3] [i_4] [i_11] [i_6] [i_6] [5U] [i_5] = ((/* implicit */unsigned int) (unsigned short)21814);
                        }
                        arr_46 [i_6] [4U] [i_3] [i_6] [i_5] = ((/* implicit */unsigned int) -3LL);
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */int) (unsigned short)13724);
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 17; i_12 += 4) 
        {
            for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                {
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (unsigned short)12924))));
                    var_33 ^= ((/* implicit */unsigned int) -5536590100765777294LL);
                }
            } 
        } 
    }
    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 1) 
    {
        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (unsigned short)0))));
        var_35 *= ((/* implicit */unsigned int) (unsigned short)52611);
    }
}
