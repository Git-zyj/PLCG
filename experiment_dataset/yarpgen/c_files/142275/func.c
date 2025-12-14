/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142275
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_2))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_14 &= ((/* implicit */signed char) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)1)) | (((/* implicit */int) (unsigned short)57292)))) + (((/* implicit */int) (_Bool)0))));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) - (var_0))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (_Bool)0))))))));
                }
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -3933781821962823403LL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    }
    for (int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned int) (((~(((/* implicit */int) (_Bool)1)))) > ((-((+(((/* implicit */int) var_3))))))));
        var_18 = (i_5 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)33082))))))) * (((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)67)), ((unsigned short)4227)))) << (((arr_16 [i_5] [i_5]) - (3438983510U)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)33082))))))) * (((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)67)), ((unsigned short)4227)))) << (((((arr_16 [i_5] [i_5]) - (3438983510U))) - (1614892131U))))))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
        var_19 = (_Bool)1;
        arr_24 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2268129030U)) ? (13959917335052410229ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (long long int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_8 = 1; i_8 < 7; i_8 += 3) 
        {
            for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                for (long long int i_10 = 1; i_10 < 9; i_10 += 3) 
                {
                    {
                        arr_38 [i_7] [i_9] [i_7] [i_7] [i_8 - 1] [1LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((+(950376656U)))))) && ((_Bool)1)));
                        var_20 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) % ((+((-(var_8)))))));
                    }
                } 
            } 
        } 
        arr_39 [i_7] = ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) var_0))));
        arr_40 [i_7] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)0)), (15242421298835867991ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (_Bool)0)) : (-879201509)))) : (((long long int) 2061842318621761038LL))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-1LL)));
    }
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (signed char i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (long long int i_15 = 0; i_15 < 14; i_15 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_12)) ? (min((arr_43 [i_11] [i_12] [i_11]), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)0), ((_Bool)0)))))))));
                                arr_52 [i_12] [i_12] = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
                                var_23 = ((((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_4))) % ((-(((/* implicit */int) var_12))))))) * (min((0U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)33793)) > (((/* implicit */int) (unsigned short)57349))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 14; i_18 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) (~((~((+(2136696212848638282LL)))))));
                                arr_60 [i_12] [i_12] [i_16] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((~(var_2))) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)106))))))));
                                var_25 = ((/* implicit */signed char) (~(((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1391565463U))) > (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-116))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
