/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10800
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_16 = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [(unsigned char)22] [i_3] [i_4]);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 2] [i_1] [i_1] [i_1] [i_0])) ^ (arr_1 [i_1 - 1] [i_1 + 2])))) == (((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 + 2] [6] [i_1] [i_1] [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                var_18 |= ((/* implicit */unsigned long long int) var_7);
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned short) 1033761506U))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (var_12)))) : ((+(var_9))))) | (((/* implicit */unsigned long long int) (-(((long long int) (_Bool)0))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_20 = (!(((/* implicit */_Bool) 7416232473908669065LL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4095))) - (18204586432715686393ULL))))));
                        arr_24 [i_5] [(short)10] [i_7] [i_5] [(unsigned char)0] [i_8] = ((/* implicit */long long int) ((unsigned int) 242157640993865223ULL));
                        var_22 = ((/* implicit */short) 2903566855661029135LL);
                        var_23 = 117440512U;
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_9 = 3; i_9 < 14; i_9 += 4) 
            {
                var_24 = ((/* implicit */unsigned long long int) arr_18 [i_5] [i_5] [i_9]);
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5] [i_6] [i_6] [i_5]))) <= (242157640993865218ULL))))) - (((1277884801862186734LL) << (((arr_17 [3ULL] [i_9]) - (1355003232U)))))));
            }
            for (int i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (-(var_12))))));
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)39629)) ? (((/* implicit */unsigned long long int) 2305843009213693951LL)) : (18204586432715686392ULL)));
                var_28 = ((/* implicit */unsigned char) var_10);
            }
            for (int i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
            {
                arr_34 [i_5] [i_5] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18204586432715686384ULL)) ? (arr_25 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) -1244446735))));
                var_29 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)14596))));
                var_30 += ((/* implicit */unsigned short) var_1);
            }
            arr_35 [i_5] [i_5] [(unsigned char)16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7376010747943134751LL)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (_Bool)1))));
        }
    }
    var_31 &= ((/* implicit */unsigned int) ((unsigned short) var_9));
    var_32 = ((/* implicit */unsigned short) var_11);
}
