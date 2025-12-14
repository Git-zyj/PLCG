/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113100
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
    var_16 ^= ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned int) var_1))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_17 -= ((/* implicit */signed char) ((_Bool) max((651566113U), (((/* implicit */unsigned int) arr_2 [i_0])))));
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) max(((-(((((/* implicit */_Bool) 651566107U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-114)))))), (((/* implicit */int) ((unsigned short) -1507008731280826609LL)))));
            arr_5 [10ULL] [10ULL] &= ((/* implicit */signed char) (((~(((/* implicit */int) arr_4 [i_1 - 2])))) & ((~(((/* implicit */int) var_13))))));
            arr_6 [(_Bool)0] [(_Bool)0] [i_1] &= ((/* implicit */int) arr_3 [i_0]);
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)26477)));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((13835058055282163712ULL) >= (((/* implicit */unsigned long long int) 70366596694016LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2])))))));
            arr_11 [(_Bool)1] [i_0] [i_2] = ((/* implicit */unsigned long long int) (-((-(1217223613)))));
        }
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_4 [i_3]))));
        /* LoopSeq 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_16 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((arr_13 [i_4]) / (((/* implicit */unsigned long long int) -4065180589058489579LL)))), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) var_1)))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_12))) ? ((+(((/* implicit */int) (unsigned short)6568)))) : (((((arr_1 [i_3]) + (2147483647))) << (((arr_15 [i_3] [i_3]) - (5051915473125986910LL))))))) : (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_3])) <= (((/* implicit */int) (short)32767))))), (((signed char) arr_0 [i_3])))))));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned short) ((signed char) arr_15 [i_4] [i_4]))))));
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            arr_21 [i_3] = ((/* implicit */unsigned char) var_15);
            arr_22 [i_3] [i_3] [i_3] = ((/* implicit */int) min((6199003427972402881LL), (((/* implicit */long long int) ((short) arr_4 [i_5 + 1])))));
            var_22 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_17 [i_3] [i_3] [i_3])) : (-2147483617)))))));
            arr_23 [i_3] [i_3] = ((/* implicit */short) ((signed char) ((_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_8 [i_3] [i_5]))))));
            var_23 = ((((/* implicit */_Bool) ((unsigned short) 6199003427972402870LL))) ? (((long long int) arr_2 [i_5 + 1])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) var_12))))))))));
        }
        var_24 = ((/* implicit */unsigned int) arr_20 [i_3]);
        var_25 ^= ((/* implicit */_Bool) min((((((-6199003427972402855LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)19)) - (18))))), (((((/* implicit */_Bool) (unsigned char)87)) ? (arr_15 [i_3] [i_3]) : (arr_15 [i_3] [i_3])))));
    }
    for (unsigned char i_6 = 1; i_6 < 14; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            arr_30 [i_6] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)0)), (651566111U)));
            var_26 = ((/* implicit */_Bool) (signed char)16);
        }
        for (int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            arr_34 [4U] [i_6] [i_8] |= ((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), ((-(6199003427972402869LL)))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 1; i_9 < 14; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    {
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((arr_25 [(unsigned char)14]) <= (((/* implicit */long long int) ((unsigned int) 8519710036367693686LL))))) ? (arr_0 [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_13))))))))))));
                        var_28 -= ((/* implicit */unsigned int) arr_32 [i_6] [i_6] [i_6 - 1]);
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned char) ((long long int) var_8));
        }
        arr_39 [i_6 + 1] [i_6] = ((/* implicit */long long int) min((((((/* implicit */int) arr_18 [i_6 + 1])) - (((/* implicit */int) arr_18 [i_6])))), ((~(var_11)))));
        var_30 |= ((/* implicit */_Bool) 9223372036854775807LL);
        var_31 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_7)), (3961481355U))), (((/* implicit */unsigned int) arr_18 [i_6 + 1]))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_36 [i_6] [i_6] [8]))))) : (((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) var_13)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_6] [i_6])) ? (arr_1 [i_6]) : (((/* implicit */int) (unsigned char)255)))))))));
    }
    for (int i_11 = 3; i_11 < 11; i_11 += 1) 
    {
        arr_42 [i_11] = ((/* implicit */unsigned int) min((6199003427972402882LL), (((/* implicit */long long int) (unsigned char)169))));
        arr_43 [i_11] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) (unsigned short)1762)) - (1751)))));
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)233)) ? (6199003427972402903LL) : (((/* implicit */long long int) ((int) 333485944U)))));
    }
}
