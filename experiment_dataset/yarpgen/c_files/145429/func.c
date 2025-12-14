/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145429
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [(unsigned char)10] [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551598ULL)) && (((/* implicit */_Bool) (short)7960)))))) + (var_1)))) ? (27ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((var_9), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 3442087668U)) ? (((/* implicit */int) max(((short)32767), ((short)7960)))) : (((/* implicit */int) ((_Bool) (short)7978)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) var_3);
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_16))))))))))));
                        var_23 = ((/* implicit */short) arr_8 [i_0] [i_1] [21ULL] [i_3]);
                    }
                    var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((var_13) * (134217664ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (short)-7955)) % (((/* implicit */int) (short)8191))))), (arr_10 [i_2] [i_0]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        arr_14 [i_2] [i_4] = ((/* implicit */_Bool) 1039841070);
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_4] = var_15;
                        var_25 |= ((/* implicit */unsigned long long int) -1039841057);
                        arr_16 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_4]))));
                    }
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (arr_0 [18ULL] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) < (((unsigned long long int) var_17))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            var_26 &= ((/* implicit */short) ((((((/* implicit */_Bool) 1039841070)) ? (((/* implicit */int) (short)-8192)) : (((/* implicit */int) (short)8198)))) / (((/* implicit */int) arr_18 [(_Bool)1]))));
            var_27 = arr_5 [i_5];
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                for (unsigned short i_8 = 2; i_8 < 14; i_8 += 1) 
                {
                    {
                        arr_30 [i_5] [(unsigned char)13] [(unsigned char)13] [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((18446744073709551570ULL), (((/* implicit */unsigned long long int) (short)-3169)))))));
                        var_28 = ((/* implicit */_Bool) ((((arr_20 [i_5]) | (((/* implicit */unsigned int) var_0)))) + (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)118)))))));
                        arr_31 [i_5] [1U] [1U] [11LL] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_19)) ? (((((/* implicit */int) var_5)) >> (((arr_22 [i_5] [i_5]) - (9673420094022593234ULL))))) : (((/* implicit */int) (short)9703))))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            for (unsigned long long int i_10 = 3; i_10 < 13; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    {
                        var_29 = var_18;
                        arr_41 [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) ((var_9) << (((((unsigned long long int) arr_1 [i_9])) - (52724ULL)))))) ? (((((/* implicit */_Bool) arr_8 [i_10 + 2] [i_11] [i_11] [i_10 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8207))) : (arr_8 [i_10 + 1] [i_10] [i_10 + 1] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))));
                        arr_42 [i_5] [i_10] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(3806039694471534043LL)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((-4123785431221194160LL) < (((/* implicit */long long int) ((/* implicit */int) (short)-512)))))))))) | (var_13)));
                        var_30 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 2250700302057472LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32008))) : (10930103219593555670ULL)))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned short) var_19);
    var_32 &= ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) var_11))))), (var_11)))) ? (var_13) : (var_1));
}
