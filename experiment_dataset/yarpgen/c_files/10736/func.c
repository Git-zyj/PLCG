/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10736
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
    var_13 = ((/* implicit */unsigned char) var_3);
    var_14 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_15 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1770295794206224184ULL)))))));
        arr_5 [i_0 - 2] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) var_9)))) : ((~(var_10)))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_6)))))))));
            arr_11 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 16676448279503327428ULL)) ? (16676448279503327430ULL) : (((/* implicit */unsigned long long int) -1269957636))));
        }
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            arr_14 [i_2] [i_2] [(short)11] = ((/* implicit */unsigned long long int) (~((~(var_3)))));
            var_17 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
            /* LoopSeq 3 */
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                var_18 *= (-(1770295794206224180ULL));
                arr_18 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) 1269957613)), (var_7)))) & ((~(var_6)))));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (var_7)))) ? (max((1770295794206224179ULL), (((/* implicit */unsigned long long int) (unsigned short)60712)))) : (((/* implicit */unsigned long long int) (~((~(var_12)))))))))));
            }
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                arr_21 [(unsigned short)14] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)109))))), (max((var_12), (var_12)))));
                arr_22 [i_4] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_5))))));
                arr_23 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) > (((/* implicit */int) var_9)))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) var_8))))));
                var_20 = min((((/* implicit */unsigned long long int) (-(var_7)))), (((18066724816879325114ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) (~(8701845947323565731LL)));
                            arr_29 [i_0] [i_2] [i_2] [i_0] [i_2] [i_6] [i_2] = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (var_6)))) && (((/* implicit */_Bool) -142593337129109138LL)));
                            var_22 = min(((+(var_3))), (((/* implicit */long long int) (~(((/* implicit */int) ((var_6) != (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                        }
                    } 
                } 
            }
            for (int i_7 = 1; i_7 < 15; i_7 += 1) 
            {
                arr_34 [0ULL] [i_2] = ((/* implicit */unsigned short) (+((-(var_10)))));
                arr_35 [i_0 + 2] [i_2] [i_7] = ((/* implicit */unsigned long long int) var_3);
            }
        }
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                for (unsigned int i_10 = 1; i_10 < 15; i_10 += 2) 
                {
                    {
                        var_23 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)0)), (16676448279503327436ULL)));
                        var_24 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */unsigned long long int) var_0)) : (var_11))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
                    }
                } 
            } 
            arr_43 [i_0] &= min((((((((/* implicit */_Bool) 9705806821223724136ULL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) / (((/* implicit */unsigned long long int) 3856032845568839501LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14657301859265403334ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) max((var_9), (((/* implicit */short) var_5)))))))));
        }
        var_25 = var_12;
    }
    for (unsigned int i_11 = 2; i_11 < 12; i_11 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) var_9);
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max((3789442214444148257ULL), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (short)1780))))))))))));
    }
    /* vectorizable */
    for (unsigned int i_12 = 2; i_12 < 12; i_12 += 3) /* same iter space */
    {
        arr_51 [i_12] [i_12] = (-(1770295794206224171ULL));
        var_28 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
        /* LoopSeq 1 */
        for (unsigned char i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            var_29 *= ((/* implicit */long long int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_8))));
            arr_56 [(unsigned char)14] [i_13] [i_13] |= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) var_0))));
        }
    }
}
