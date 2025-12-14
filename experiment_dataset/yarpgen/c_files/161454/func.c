/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161454
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1] [i_2 - 1] [i_3] [i_3] [i_3] [i_3] [i_3 - 1])) * (((/* implicit */int) (short)-32751))));
                                arr_12 [i_0] [i_1] [i_4] [i_4] |= ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_10 [i_4] [i_4] [i_3 + 1] [i_2])));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) ((signed char) arr_4 [i_0]));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_14))));
                }
            } 
        } 
        var_20 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (545040243U)))) < (arr_6 [0ULL])));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                {
                    arr_19 [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_17 [i_0])) != (((/* implicit */int) arr_17 [i_0])));
                    arr_20 [i_5] [i_5] [i_6] &= ((/* implicit */short) 17721607810221772675ULL);
                    arr_21 [i_6] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5]))) != (arr_14 [i_0] [i_0])));
                    var_21 += ((/* implicit */unsigned long long int) ((signed char) arr_9 [i_0] [i_0] [i_5] [i_5] [i_6] [i_6] [i_6]));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((short) ((arr_5 [i_8]) ? (((/* implicit */int) arr_5 [i_8])) : (((/* implicit */int) arr_5 [i_7]))))))));
                /* LoopNest 3 */
                for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        for (short i_11 = 3; i_11 < 12; i_11 += 1) 
                        {
                            {
                                arr_36 [i_7] [i_7] [1LL] [i_8] [i_7] = ((/* implicit */unsigned long long int) 1374502121867906516LL);
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_11)))) ? (((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5730440U)))))) : ((-(arr_23 [(signed char)5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4289236856U)) && (((/* implicit */_Bool) 1009744081U))))))));
                                var_24 = ((/* implicit */unsigned long long int) (-((~((-(arr_14 [i_7] [i_8])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
    {
        arr_40 [i_12] [i_12] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)219)), (5730440U)));
        arr_41 [i_12] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (signed char)42)))));
        arr_42 [i_12] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_12])) ? (((/* implicit */unsigned long long int) 6612702735470348139LL)) : (14002912830094404578ULL))))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
    {
        arr_45 [i_13] &= ((/* implicit */short) var_16);
        /* LoopNest 3 */
        for (long long int i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 2) 
            {
                for (signed char i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    {
                        arr_54 [i_16] [i_14] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 725136263487778964ULL))));
                        var_25 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((min((arr_16 [i_13]), ((_Bool)0))), (min(((_Bool)1), (var_2))))))));
                        arr_55 [i_13] [i_14] [i_14] [i_16] = ((/* implicit */unsigned long long int) max((min((var_3), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 725136263487778937ULL))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_14])) ? (((/* implicit */int) arr_46 [i_13] [i_15])) : (((/* implicit */int) arr_46 [i_13] [15ULL])))))));
                    }
                } 
            } 
        } 
        arr_56 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) % ((((_Bool)0) ? (((/* implicit */int) arr_50 [i_13] [i_13] [i_13])) : (((/* implicit */int) (unsigned char)128))))));
        var_26 += ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) max(((_Bool)1), (var_13)))))));
    }
}
