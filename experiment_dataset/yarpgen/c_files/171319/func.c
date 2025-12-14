/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171319
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
    for (int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) + ((+(arr_5 [i_1] [i_1 - 1]))));
                arr_8 [i_0] [i_0] = ((/* implicit */short) (~((~((~(((/* implicit */int) var_14))))))));
                var_20 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 3])))) && ((!((!(((/* implicit */_Bool) 9007199254740991ULL))))))));
                var_21 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_18))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_22 *= ((/* implicit */short) (!(((/* implicit */_Bool) (+(1340715356))))));
        var_23 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_11 [i_2] [i_2]) & (9007199254740983ULL))))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (((-(var_12))) > (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 4294967295U)))))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
        {
            arr_14 [i_2] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) & (arr_11 [i_2] [i_3])));
            arr_15 [i_2] = ((/* implicit */signed char) (+((-(((/* implicit */int) var_8))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 1; i_5 < 22; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_24 [i_2] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */_Bool) (+((-(var_11)))));
                        var_25 |= (((+(arr_20 [i_5 + 1] [i_5 + 1]))) / ((-(arr_20 [i_5 + 1] [i_5 + 1]))));
                        var_26 ^= ((/* implicit */unsigned short) (-((-(var_5)))));
                        var_27 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) var_17)) | (var_5))) >> ((((~(((/* implicit */int) arr_12 [i_5 - 1] [i_5 + 1] [i_5 - 1])))) + (31765)))));
                        var_28 = (!(((((/* implicit */_Bool) (unsigned char)2)) && (((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2])))));
                    }
                } 
            } 
            arr_25 [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)10))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_8 = 1; i_8 < 21; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 22; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_13)) << (((((/* implicit */int) (signed char)84)) - (67)))))));
                            arr_35 [i_2] [i_7] [i_9] [i_7] [i_7] [i_2] [i_8 + 2] |= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned short)65521))))));
                            arr_36 [i_10] [i_9] [i_9] [i_8 + 2] [i_8] [i_9] [i_2] = ((/* implicit */signed char) (+(-1538479731)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1340715368))))))))));
                            var_31 = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4))))));
                            var_32 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_16)))))));
                        }
                    } 
                } 
                arr_42 [i_2] [i_7] [(unsigned short)11] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10)))))));
            }
            var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_7] [i_2])) < (((/* implicit */int) var_4))))) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2357)))))));
            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (-((-(18437736874454810596ULL))))))));
        }
    }
    var_35 = ((/* implicit */unsigned long long int) (-(var_11)));
}
