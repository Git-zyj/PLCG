/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128516
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (signed char)87))))) == (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (0ULL))))));
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)2048), (((/* implicit */unsigned short) var_5))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) (unsigned char)142)) : (-616206226))))))), (min(((unsigned short)55065), (((/* implicit */unsigned short) (signed char)-87))))));
    var_13 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)65)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? ((-(((/* implicit */int) var_9)))) : (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)46))))))));
        arr_5 [i_0] = ((/* implicit */short) var_6);
        arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
        {
            var_14 = ((/* implicit */long long int) (short)-14275);
            var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1 + 3]))));
            var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-87)) - (((/* implicit */int) (signed char)87))));
        }
        for (unsigned int i_2 = 1; i_2 < 17; i_2 += 2) /* same iter space */
        {
            var_17 &= ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) (unsigned char)15))), ((-(((/* implicit */int) arr_1 [i_2 + 1]))))))) ? (0) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)15)) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_3)))))))));
            var_18 = max((((/* implicit */int) var_7)), ((~(((/* implicit */int) ((short) var_10))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)99)) ? ((~(((/* implicit */int) (signed char)-87)))) : (((/* implicit */int) (signed char)-93))));
                var_20 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)22085))));
            }
            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_6)))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (unsigned int i_6 = 1; i_6 < 16; i_6 += 4) 
                {
                    {
                        var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)49061))))) : (var_2)));
                        arr_23 [i_5] = (+(((/* implicit */int) (unsigned char)35)));
                    }
                } 
            } 
            var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!((_Bool)0)))) : (535822336)));
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
        {
            arr_26 [i_0] [i_7] [i_0] = ((/* implicit */unsigned char) ((_Bool) (+(-8406287543970671031LL))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 1; i_8 < 18; i_8 += 3) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_8] [i_8 - 1] [i_8 + 1] [i_7])) ? (var_1) : (((/* implicit */unsigned long long int) arr_19 [i_8 + 2] [i_8 + 2] [i_8 - 1] [i_7]))));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    for (unsigned short i_10 = 1; i_10 < 19; i_10 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((unsigned char) (+(-40900689)))))));
                            arr_36 [i_0] [i_0] [i_0] [i_8 - 1] [i_7] [i_9] [i_10] = ((/* implicit */_Bool) ((unsigned int) (unsigned char)42));
                            var_26 = ((unsigned int) (-(((/* implicit */int) (unsigned char)117))));
                        }
                    } 
                } 
                arr_37 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (_Bool)0)))))));
            }
        }
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_27 ^= ((/* implicit */unsigned long long int) min((2436543933U), ((~(((((/* implicit */_Bool) 4294967271U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65))) : (4294967271U)))))));
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) max(((~(((var_2) << (((((/* implicit */int) (unsigned char)178)) - (153))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))))))));
    }
}
