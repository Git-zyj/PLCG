/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116637
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
    var_13 = (((!(((/* implicit */_Bool) 33030144)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (6578132146361533063ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (11868611927348018552ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))))) : ((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25978)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (13180986247140962370ULL)));
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) (short)-25978)) + (2147483647))) << (((((/* implicit */int) var_8)) - (1)))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_6 [i_1] &= ((/* implicit */unsigned char) (signed char)-20);
        var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (short)-31220)), (900314581U))) - (min((var_10), (((/* implicit */unsigned int) var_3))))))) ? (((long long int) min((var_11), (((/* implicit */unsigned long long int) var_12))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) var_1);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_9 [i_2])) + (((/* implicit */int) var_2)))) + (2147483647))) >> (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_12 [15ULL])) : (-838659347)))));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (5265757826568589243ULL) : (13180986247140962370ULL)))) ? (((int) var_7)) : (((/* implicit */int) (!((_Bool)1))))));
                /* LoopNest 2 */
                for (short i_5 = 3; i_5 < 15; i_5 += 2) 
                {
                    for (unsigned char i_6 = 3; i_6 < 16; i_6 += 2) 
                    {
                        {
                            arr_22 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) + (((((/* implicit */_Bool) var_4)) ? (13873384541970148675ULL) : (((/* implicit */unsigned long long int) 838659347))))));
                            var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) 4294967282U))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        {
                            arr_30 [i_2] [i_3] [i_7] [i_7] [i_2] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) 1942534449062996060ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-31220)))) ^ (((((/* implicit */_Bool) 576460614864470016ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-19))))));
                            arr_31 [(short)9] [i_7] [i_7] [i_3] [i_8] = ((_Bool) (~(((/* implicit */int) arr_26 [i_7] [5LL] [i_2]))));
                            arr_32 [i_7] [i_7] [i_8] = ((/* implicit */int) (((-(11868611927348018552ULL))) / (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
                        }
                    } 
                } 
                var_19 ^= ((/* implicit */short) ((((((/* implicit */int) var_3)) != (-609819232))) ? (((/* implicit */int) ((((/* implicit */_Bool) 33030144)) && (((/* implicit */_Bool) 6578132146361533063ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_2 - 1] [i_2] [i_2] [(_Bool)1] [i_2])))))));
            }
            for (short i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                var_20 ^= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)48)) ? (13180986247140962370ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) 1334179410))));
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1500559812)))))) : ((~(arr_10 [i_9])))))));
            }
            arr_36 [i_2] = ((/* implicit */int) arr_25 [(short)15] [(short)15]);
        }
        arr_37 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */unsigned long long int) 838659339)) : (6578132146361533063ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-19)) * (((/* implicit */int) (signed char)-38)))))));
        /* LoopSeq 1 */
        for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    {
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-92)) && (((/* implicit */_Bool) arr_4 [i_2]))))) + (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_1)) : (var_7)))) && (((((/* implicit */_Bool) 11703681849235669160ULL)) || (((/* implicit */_Bool) var_2))))))))))));
                        var_24 *= (~((~(arr_15 [i_2 - 1]))));
                    }
                } 
            } 
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_3)))))), (min((((/* implicit */unsigned long long int) var_8)), (((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (131941395333120ULL))))))))));
        }
        var_26 = ((/* implicit */_Bool) (-(((int) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))))));
    }
    var_27 = ((((/* implicit */_Bool) (~(((unsigned long long int) 838659323))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-6311))) / (2510782240U)))) : (((((/* implicit */_Bool) 11529280170981146320ULL)) ? (var_0) : (((/* implicit */unsigned long long int) 617121972)))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_5)) | (((/* implicit */int) var_5))))))));
    var_28 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) (short)-31477)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) : (var_1)))))), ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_11)))))));
}
