/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168681
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0 - 2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            var_13 = ((/* implicit */signed char) var_0);
            var_14 &= ((/* implicit */int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2)))));
        }
        for (unsigned short i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            arr_10 [i_2] [i_2] [i_2] = ((/* implicit */signed char) max(((short)32767), (((/* implicit */short) (signed char)22))));
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (signed char i_4 = 1; i_4 < 22; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            var_15 = var_1;
                            arr_19 [i_0] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) 4236375797U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)139))))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(-6460294960874464060LL)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
        }
        arr_20 [i_0] = ((/* implicit */_Bool) max((((unsigned short) max((var_6), (var_5)))), (((/* implicit */unsigned short) var_12))));
    }
    var_17 = ((/* implicit */int) (!(max((min(((_Bool)0), ((_Bool)1))), ((_Bool)1)))));
    var_18 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (min((var_9), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))));
    /* LoopSeq 2 */
    for (signed char i_6 = 3; i_6 < 12; i_6 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)64)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67)))))));
            var_20 *= ((/* implicit */short) min((max((var_6), (var_5))), (var_5)));
            var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((signed char)102), ((signed char)-26))))))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) min(((short)32755), (((/* implicit */short) var_3)))))))));
        }
        var_22 *= ((/* implicit */unsigned char) (_Bool)1);
        var_23 = ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
    }
    for (unsigned short i_8 = 1; i_8 < 23; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_9 = 1; i_9 < 22; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                {
                    var_24 += ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((-(var_9))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)45)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned short) var_2)))));
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_0))));
                }
            } 
        } 
        var_27 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_7))))));
        var_28 |= (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_2)))))));
        arr_34 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_0))) ? ((~(var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) var_5))))));
    }
}
