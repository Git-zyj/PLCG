/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139940
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
        {
            var_10 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
            var_11 = ((/* implicit */_Bool) 7547217229491963308ULL);
        }
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    {
                        arr_13 [i_0] [i_2] [i_0] = ((/* implicit */signed char) var_2);
                        arr_14 [i_0] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */signed char) ((((unsigned long long int) (-(((/* implicit */int) (_Bool)0))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    }
                } 
            } 
            var_12 = ((/* implicit */unsigned short) var_3);
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
        {
            arr_17 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)0))));
            arr_18 [i_0] [i_5] [0ULL] = ((/* implicit */unsigned short) arr_5 [i_0] [i_5] [i_0]);
        }
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            var_13 = ((/* implicit */unsigned int) ((((int) (short)-8132)) ^ (((/* implicit */int) var_5))));
            arr_22 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_0);
            var_14 = ((/* implicit */short) var_7);
        }
        for (short i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (int i_8 = 4; i_8 < 17; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    {
                        arr_29 [i_0] [i_7] [i_7] [10LL] [i_7] = ((/* implicit */unsigned char) var_8);
                        var_15 = ((/* implicit */int) (signed char)-112);
                    }
                } 
            } 
            var_16 = var_2;
            arr_30 [i_0] [i_0] [i_7] = var_6;
            var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) (unsigned char)31);
            var_19 = ((/* implicit */long long int) (_Bool)1);
            var_20 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [i_10]) << (((((/* implicit */int) (signed char)93)) - (92)))))))))))) : (((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [i_10]) << (((((((/* implicit */int) (signed char)93)) - (92))) - (1))))))))))));
            var_21 = ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) arr_5 [i_0] [i_10] [i_10])))));
        }
        var_22 = ((/* implicit */unsigned int) var_7);
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) -1498714187);
        arr_37 [i_11] [i_11] = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) ((unsigned short) var_8))))));
        var_24 = ((/* implicit */unsigned long long int) ((signed char) var_7));
    }
    /* vectorizable */
    for (unsigned char i_12 = 1; i_12 < 11; i_12 += 2) 
    {
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_2))) || (((/* implicit */_Bool) var_8))));
        arr_41 [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
        var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
        var_27 = ((/* implicit */unsigned char) -1827418398);
    }
    for (long long int i_13 = 2; i_13 < 21; i_13 += 2) 
    {
        var_28 = (+(((/* implicit */int) (unsigned char)217)));
        /* LoopSeq 3 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 25; i_16 += 1) 
                {
                    for (long long int i_17 = 1; i_17 < 22; i_17 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */short) var_1);
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ ((+(((/* implicit */int) arr_51 [i_17] [i_14] [i_15] [i_16] [i_17]))))));
                            arr_52 [i_13] [i_17] = ((/* implicit */unsigned short) (-(((int) (unsigned short)38029))));
                            var_31 = (short)-8119;
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned short) (short)-24867);
            }
            var_33 = ((/* implicit */signed char) var_5);
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
            var_35 = ((/* implicit */signed char) arr_48 [i_13 + 2] [i_13] [i_13 + 1] [i_13 + 1]);
            arr_55 [i_18] [i_13 + 4] = ((/* implicit */int) var_5);
        }
        for (unsigned int i_19 = 0; i_19 < 25; i_19 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_20 = 0; i_20 < 25; i_20 += 3) 
            {
                for (unsigned long long int i_21 = 1; i_21 < 24; i_21 += 1) 
                {
                    for (unsigned char i_22 = 3; i_22 < 21; i_22 += 1) 
                    {
                        {
                            arr_70 [i_20] [i_20] [i_20] = ((/* implicit */unsigned long long int) max((var_9), (var_3)));
                            var_36 = var_0;
                            var_37 = ((/* implicit */unsigned char) 2147483647);
                            var_38 = ((/* implicit */_Bool) 2147483647);
                        }
                    } 
                } 
            } 
            var_39 = ((/* implicit */unsigned char) min((10969446966129638474ULL), (((/* implicit */unsigned long long int) var_7))));
        }
    }
    var_40 = ((/* implicit */long long int) ((unsigned long long int) var_4));
    var_41 = var_2;
}
